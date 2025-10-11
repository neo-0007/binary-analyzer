
undefined8 kdf_tls1_prf_set_ctx_params(undefined8 *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_prov_ctx_get0_libctx(*param_1);
  if (param_2 != 0) {
    lVar3 = OSSL_PARAM_locate_const(param_2,"digest");
    if (lVar3 != 0) {
      iVar1 = OPENSSL_strcasecmp(*(undefined8 *)(lVar3 + 0x10),&DAT_007c6510);
      if (iVar1 == 0) {
        iVar1 = ossl_prov_macctx_load_from_params
                          (param_1 + 1,param_2,&DAT_007c9964,0,&DAT_007c5ccc,uVar2);
        if (iVar1 != 0) {
          iVar1 = ossl_prov_macctx_load_from_params
                            (param_1 + 2,param_2,&DAT_007c9964,0,&DAT_007c6514,uVar2);
          if (iVar1 == 0) {
            uVar2 = 0;
            goto LAB_0046a600;
          }
          goto LAB_0046a517;
        }
      }
      else {
        EVP_MAC_CTX_free(param_1[2]);
        iVar1 = ossl_prov_macctx_load_from_params(param_1 + 1,param_2,&DAT_007c9964,0,0,uVar2);
        if (iVar1 != 0) goto LAB_0046a517;
      }
LAB_0046a4df:
      uVar2 = 0;
      goto LAB_0046a600;
    }
LAB_0046a517:
    lVar3 = OSSL_PARAM_locate_const(param_2,"secret");
    if (lVar3 != 0) {
      CRYPTO_clear_free(param_1[3],param_1[4],"../providers/implementations/kdfs/tls1_prf.c",0xc1);
      param_1[3] = 0;
      iVar1 = OSSL_PARAM_get_octet_string(lVar3,param_1 + 3,0,param_1 + 4);
      if (iVar1 == 0) goto LAB_0046a4df;
    }
    for (lVar3 = OSSL_PARAM_locate_const(param_2,"seed"); lVar3 != 0;
        lVar3 = OSSL_PARAM_locate_const(lVar3 + 0x28,"seed")) {
      lVar4 = param_1[0x85];
      local_38 = 0;
      local_40 = (long)param_1 + lVar4 + 0x28;
      if ((*(long *)(lVar3 + 0x18) != 0) && (*(long *)(lVar3 + 0x10) != 0)) {
        uVar2 = OSSL_PARAM_get_octet_string(lVar3,&local_40,0x400 - lVar4,&local_38);
        if ((int)uVar2 == 0) goto LAB_0046a600;
        lVar4 = param_1[0x85] + local_38;
      }
      param_1[0x85] = lVar4;
    }
  }
  uVar2 = 1;
LAB_0046a600:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

