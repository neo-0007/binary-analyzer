
undefined8 ossl_provider_doall_activated(undefined8 param_1,code *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  
  lVar5 = ossl_lib_ctx_get_data(param_1,1,provider_store_method);
  if (lVar5 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
    ERR_set_error(0xf,0xc0103,0);
    iVar2 = ossl_lib_ctx_is_default(param_1);
    if (iVar2 != 0) {
      OPENSSL_init_crypto(0x40,0);
    }
    return 1;
  }
  iVar2 = ossl_lib_ctx_is_default(param_1);
  if (iVar2 != 0) {
    OPENSSL_init_crypto(0x40,0);
  }
  iVar2 = provider_activate_fallbacks(lVar5);
  if ((iVar2 == 0) || (iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar5 + 0x20)), iVar2 == 0))
  {
    return 0;
  }
  lVar6 = OPENSSL_sk_dup(*(undefined8 *)(lVar5 + 8));
  if (lVar6 == 0) {
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
    return 0;
  }
  iVar3 = OPENSSL_sk_num(lVar6);
  iVar2 = iVar3 + -1;
  if (-1 < iVar2) {
    do {
      pbVar7 = (byte *)OPENSSL_sk_value(lVar6,iVar2);
      iVar4 = CRYPTO_THREAD_write_lock(*(undefined8 *)(pbVar7 + 8));
      if (iVar4 == 0) {
LAB_004202c0:
        CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
        goto LAB_004202c9;
      }
      if ((*pbVar7 & 2) == 0) {
        iVar3 = iVar3 + -1;
        OPENSSL_sk_delete(lVar6,iVar2);
      }
      else {
        LOCK();
        *(int *)(pbVar7 + 0x10) = *(int *)(pbVar7 + 0x10) + 1;
        UNLOCK();
        iVar4 = provider_activate(pbVar7,0,0);
        if (iVar4 < 0) {
          LOCK();
          *(int *)(pbVar7 + 0x10) = *(int *)(pbVar7 + 0x10) + -1;
          UNLOCK();
          CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar7 + 8));
          goto LAB_004202c0;
        }
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(pbVar7 + 8));
      bVar10 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar10);
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(lVar5 + 0x20));
  if (iVar3 < 1) {
    uVar8 = 1;
    goto LAB_00420313;
  }
  iVar2 = 0;
  do {
    iVar9 = iVar2 + 1;
    uVar8 = OPENSSL_sk_value(lVar6,iVar2);
    iVar4 = (*param_2)(uVar8,param_3);
    if (iVar4 == 0) goto LAB_004202c9;
    iVar2 = iVar9;
  } while (iVar9 != iVar3);
  uVar8 = 1;
  iVar2 = 0;
LAB_004202e8:
  do {
    while( true ) {
      lVar5 = OPENSSL_sk_value(lVar6,iVar2);
      provider_deactivate(lVar5,0,1);
      LOCK();
      piVar1 = (int *)(lVar5 + 0x10);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) break;
      iVar2 = iVar2 + 1;
      if (iVar3 <= iVar2) goto LAB_00420313;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < iVar3);
LAB_00420313:
  OPENSSL_sk_free(lVar6);
  return uVar8;
LAB_004202c9:
  iVar2 = iVar2 + 1;
  uVar8 = 0;
  if (iVar3 <= iVar2) goto LAB_00420313;
  goto LAB_004202e8;
}

