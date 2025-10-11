
uint DH_check_pub_key_ex(DH *param_1,BIGNUM *param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check_pub_key(param_1,param_2,(int *)&local_14);
  if (uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0xed,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7c,0);
    }
    if ((local_14 & 2) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0xef,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7b,0);
    }
    if ((local_14 & 4) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0xf1,"DH_check_pub_key_ex");
      ERR_set_error(5,0x7a,0);
    }
    uVar1 = (uint)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

