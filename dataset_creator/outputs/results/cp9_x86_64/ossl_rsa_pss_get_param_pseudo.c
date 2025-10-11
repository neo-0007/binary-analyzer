
undefined8 ossl_rsa_pss_get_param(void)

{
  long lVar1;
  undefined8 uVar2;
  int *in_RCX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = ossl_rsa_pss_get_param_unverified();
  if ((int)uVar2 != 0) {
    if ((in_RCX == (int *)0x0) || (-1 < *in_RCX)) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x246,"rsa_pss_verify_param");
      ERR_set_error(4,0x8b,0);
      uVar2 = 0;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_ameth.c",0x23e,"rsa_pss_verify_param");
      ERR_set_error(4,0x96,0);
      uVar2 = 0;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar2;
}

