
int provider_deactivate(byte *param_1,byte param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 != (byte *)0x0) {
    lVar4 = ossl_lib_ctx_get_data(*(undefined8 *)(param_1 + 0x50),1,provider_store_method);
    if (lVar4 == 0) {
      ERR_new();
      bVar1 = false;
      ERR_set_debug("../crypto/provider_core.c",0x154,"get_provider_store");
      ERR_set_error(0xf,0xc0103,0);
      iVar2 = *(int *)(param_1 + 0x20) + -1;
      if (1 < *(int *)(param_1 + 0x20)) {
        *(int *)(param_1 + 0x20) = iVar2;
        bVar6 = param_2 & 1 & param_1[200];
LAB_0041eafb:
        if (bVar6 == 0) {
          return iVar2;
        }
        ossl_provider_free_parent(param_1,1);
        return iVar2;
      }
LAB_0041ea38:
      *(int *)(param_1 + 0x20) = iVar2;
      if ((((iVar2 < 1) && (*param_1 = *param_1 & 0xfd, param_3 != 0)) && (lVar4 != 0)) &&
         (iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar4 + 0x10)), 0 < iVar3)) {
        iVar7 = 0;
        do {
          iVar8 = iVar7 + 1;
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar4 + 0x10),iVar7);
          (**(code **)(lVar5 + 0x10))(param_1,*(undefined8 *)(lVar5 + 0x20));
          iVar7 = iVar8;
        } while (iVar8 != iVar3);
      }
      if (!bVar1) {
        return iVar2;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
      return iVar2;
    }
    iVar2 = CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar4 + 0x20));
    if (iVar2 != 0) {
      iVar2 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 8));
      if (iVar2 != 0) {
        bVar1 = true;
        iVar2 = *(int *)(param_1 + 0x20) + -1;
        if (1 < *(int *)(param_1 + 0x20)) {
          *(int *)(param_1 + 0x20) = iVar2;
          bVar6 = param_2 & 1 & param_1[200];
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 8));
          CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
          goto LAB_0041eafb;
        }
        goto LAB_0041ea38;
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(lVar4 + 0x20));
    }
  }
  return -1;
}

