
ulong ossl_drbg_get_seed(long param_1,long *param_2,int param_3,ulong param_4,ulong param_5,
                        undefined4 param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((-1 < param_3) && (uVar3 = (ulong)(param_3 + 7 >> 3), param_4 < uVar3)) {
    param_4 = uVar3;
  }
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  local_38 = param_1;
  lVar2 = CRYPTO_secure_malloc(param_4,"../providers/implementations/rands/drbg.c",0xa1);
  if (lVar2 == 0) {
    ERR_new();
    param_4 = 0;
    ERR_set_debug("../providers/implementations/rands/drbg.c",0xa3,"ossl_drbg_get_seed");
    ERR_set_error(0x39,0xc0100,0);
  }
  else {
    iVar1 = ossl_prov_drbg_generate
                      (local_38,lVar2,param_4,*(undefined4 *)(local_38 + 0x80),param_6,&local_38);
    if (iVar1 == 0) {
      CRYPTO_secure_clear_free(lVar2,param_4,"../providers/implementations/rands/drbg.c",0xb3);
      param_4 = 0;
      ERR_new();
      ERR_set_debug("../providers/implementations/rands/drbg.c",0xb4,"ossl_drbg_get_seed");
      ERR_set_error(0x39,0xbf,0);
    }
    else {
      *param_2 = lVar2;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

