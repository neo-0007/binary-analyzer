
undefined4 evp_pkey_copy_downgraded(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  EVP_PKEY_CTX *ctx;
  EVP_PKEY *pkey;
  
  if ((param_1 != (long *)0x0) &&
     (((*(long *)(param_2 + 8) != 0 || (*(long *)(param_2 + 0x1a) != 0)) &&
      (lVar1 = *(long *)(param_2 + 0x18), lVar1 != 0)))) {
    iVar4 = *param_2;
    lVar2 = *(long *)(param_2 + 0x1a);
    pcVar5 = (char *)EVP_KEYMGMT_get0_name(lVar1);
    if (iVar4 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x7ca,"evp_pkey_copy_downgraded");
      ERR_set_error(6,0xc0103,"keymgmt key type = %s but legacy type = EVP_PKEY_NONE",pcVar5);
      return 0;
    }
    if (iVar4 != -1) {
      pcVar5 = OBJ_nid2sn(iVar4);
    }
    puVar3 = (undefined4 *)*param_1;
    if (puVar3 == (undefined4 *)0x0) {
      pkey = EVP_PKEY_new();
      *param_1 = (long)pkey;
      if (pkey == (EVP_PKEY *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/p_lib.c",0x7d8,"evp_pkey_copy_downgraded");
        ERR_set_error(6,0xc0100,0);
        return 0;
      }
    }
    else {
      evp_keymgmt_util_clear_operation_cache(puVar3,1);
      evp_pkey_free_legacy(puVar3);
      if (*(long *)(puVar3 + 0x18) != 0) {
        evp_keymgmt_freedata(*(long *)(puVar3 + 0x18),*(undefined8 *)(puVar3 + 0x1a));
        EVP_KEYMGMT_free(*(undefined8 *)(puVar3 + 0x18));
        *(undefined8 *)(puVar3 + 0x18) = 0;
        *(undefined8 *)(puVar3 + 0x1a) = 0;
      }
      *puVar3 = 0;
      pkey = (EVP_PKEY *)*param_1;
    }
    iVar4 = EVP_PKEY_set_type(pkey,iVar4);
    if (iVar4 != 0) {
      if (lVar2 == 0) {
        return 1;
      }
      if (*(long *)(*(long *)(*param_1 + 8) + 0x128) == 0) {
        ERR_new();
        ERR_set_debug("../crypto/evp/p_lib.c",0x7e5,"evp_pkey_copy_downgraded");
        ERR_set_error(6,0xce,"key type = %s",pcVar5);
      }
      else {
        uVar6 = ossl_provider_libctx(*(undefined8 *)(lVar1 + 0x18));
        ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,*param_1,0);
        if (ctx == (EVP_PKEY_CTX *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p_lib.c",0x7f2,"evp_pkey_copy_downgraded");
          ERR_set_error(6,0xc0100,0);
        }
        else {
          iVar4 = evp_keymgmt_export(lVar1,lVar2,0x87,
                                     *(undefined8 *)(*(long *)(*param_1 + 8) + 0x128),ctx);
          if (iVar4 != 0) {
            lVar1 = *param_1;
            uVar6 = (**(code **)(*(long *)(lVar1 + 8) + 0x118))(lVar1);
            *(undefined8 *)(lVar1 + 0x80) = uVar6;
            EVP_PKEY_CTX_free(ctx);
            return 1;
          }
        }
        EVP_PKEY_CTX_free(ctx);
      }
      ERR_new();
      ERR_set_debug("../crypto/evp/p_lib.c",0x802,"evp_pkey_copy_downgraded");
      ERR_set_error(6,0xcd,"key type = %s",pcVar5);
    }
  }
  return 0;
}

