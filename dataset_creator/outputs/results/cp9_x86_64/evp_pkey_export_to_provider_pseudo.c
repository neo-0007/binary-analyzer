
long evp_pkey_export_to_provider(int *param_1,undefined8 param_2,long *param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  EVP_PKEY_CTX *pEVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*(long *)(param_1 + 8) == 0) {
    if (*(long *)(param_1 + 0x1a) == 0) {
      return 0;
    }
    if (param_3 == (long *)0x0) goto LAB_0053167a;
LAB_005315eb:
    lVar10 = *param_3;
    *param_3 = 0;
    lVar9 = lVar10;
    if (lVar10 != 0) goto LAB_005315fe;
    pEVar4 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_2,param_1,param_4);
    if (pEVar4 != (EVP_PKEY_CTX *)0x0) {
      lVar9 = *(long *)(pEVar4 + 0x20);
      *(undefined8 *)(pEVar4 + 0x20) = 0;
      EVP_PKEY_CTX_free(pEVar4);
      if (lVar9 != 0) goto LAB_005315fe;
    }
    lVar2 = 0;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 2) + 0x118) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 2) + 0x120) == 0) {
      return 0;
    }
    if (param_3 != (long *)0x0) goto LAB_005315eb;
LAB_0053167a:
    pEVar4 = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(param_2,param_1,param_4);
    if (pEVar4 == (EVP_PKEY_CTX *)0x0) {
LAB_005316aa:
      lVar2 = 0;
      goto LAB_0053164c;
    }
    lVar9 = *(long *)(pEVar4 + 0x20);
    *(undefined8 *)(pEVar4 + 0x20) = 0;
    EVP_PKEY_CTX_free(pEVar4);
    if (lVar9 == 0) goto LAB_005316aa;
LAB_005315fe:
    lVar10 = lVar9;
    if (*(long *)(param_1 + 8) == 0) {
      lVar2 = evp_keymgmt_util_export_to_provider(param_1,lVar9);
LAB_005317de:
      if (lVar2 == 0) {
        lVar10 = 0;
      }
      goto LAB_00531644;
    }
    lVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
    if (lVar2 == *(long *)(param_1 + 0x20)) {
      iVar1 = CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0xe));
      if (iVar1 != 0) {
        plVar7 = (long *)evp_keymgmt_util_find_operation_cache(param_1,lVar9);
        if ((plVar7 != (long *)0x0) && (*plVar7 != 0)) {
          lVar2 = plVar7[1];
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
          goto LAB_005317de;
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
        goto LAB_00531623;
      }
LAB_0053163e:
      lVar10 = 0;
      lVar2 = 0;
    }
    else {
LAB_00531623:
      pcVar3 = OBJ_nid2sn(*param_1);
      iVar1 = EVP_KEYMGMT_is_a(lVar9,pcVar3);
      if ((iVar1 == 0) || (lVar5 = evp_keymgmt_newdata(lVar9), lVar5 == 0)) goto LAB_0053163e;
      iVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x120))
                        (param_1,lVar5,*(undefined8 *)(lVar9 + 0xb8),param_2,param_4);
      if ((iVar1 == 0) || (iVar1 = EVP_KEYMGMT_up_ref(lVar9), iVar1 == 0)) {
LAB_00531840:
        evp_keymgmt_freedata(lVar9,lVar5);
        goto LAB_0053163e;
      }
      iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0xe));
      lVar2 = lVar5;
      if (iVar1 != 0) {
        lVar6 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
        if ((lVar6 != *(long *)(param_1 + 0x20)) &&
           (iVar1 = evp_keymgmt_util_clear_operation_cache(param_1,0), iVar1 == 0)) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
          evp_keymgmt_freedata(lVar9,lVar5);
          EVP_KEYMGMT_free(lVar9);
          goto LAB_0053163e;
        }
        EVP_KEYMGMT_free(lVar9);
        plVar7 = (long *)evp_keymgmt_util_find_operation_cache(param_1,lVar9);
        if ((plVar7 != (long *)0x0) && (*plVar7 != 0)) {
          lVar2 = plVar7[1];
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
          evp_keymgmt_freedata(lVar9,lVar5);
          goto LAB_005317de;
        }
        iVar1 = evp_keymgmt_util_cache_keydata(param_1,lVar9,lVar5);
        if (iVar1 == 0) {
          CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
          goto LAB_00531840;
        }
        uVar8 = (**(code **)(*(long *)(param_1 + 2) + 0x118))(param_1);
        *(undefined8 *)(param_1 + 0x20) = uVar8;
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0xe));
      }
    }
LAB_00531644:
    if (param_3 == (long *)0x0) goto LAB_0053164c;
  }
  *param_3 = lVar10;
LAB_0053164c:
  EVP_KEYMGMT_free(0);
  return lVar2;
}

