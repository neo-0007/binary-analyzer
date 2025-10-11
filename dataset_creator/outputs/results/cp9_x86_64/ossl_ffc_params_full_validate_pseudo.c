
int ossl_ffc_params_full_validate(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  BN_CTX *c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 != (undefined8 *)0x0) {
    if (param_2[4] != 0) {
      if ((*(byte *)(param_2 + 8) & 4) == 0) {
        iVar2 = ossl_ffc_params_FIPS186_4_validate();
      }
      else {
        iVar2 = ossl_ffc_params_FIPS186_2_validate();
      }
      goto LAB_005370a5;
    }
    iVar2 = ossl_ffc_params_simple_validate();
    if ((iVar2 != 0) && (c = (BN_CTX *)BN_CTX_new_ex(param_1), c != (BN_CTX *)0x0)) {
      iVar3 = BN_check_prime(param_2[1],c,0);
      if (iVar3 == 1) {
        iVar3 = BN_check_prime(*param_2,c,0);
        if (iVar3 != 1) {
          ERR_new();
          iVar2 = 0;
          ERR_set_debug("../crypto/ffc/ffc_params_validate.c",0xb2,"ossl_ffc_params_full_validate");
          ERR_set_error(10,0x73,0);
        }
      }
      else {
        ERR_new();
        iVar2 = 0;
        ERR_set_debug("../crypto/ffc/ffc_params_validate.c",0xac,"ossl_ffc_params_full_validate");
        ERR_set_error(10,0x71,0);
      }
      BN_CTX_free(c);
      goto LAB_005370a5;
    }
  }
  iVar2 = 0;
LAB_005370a5:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

