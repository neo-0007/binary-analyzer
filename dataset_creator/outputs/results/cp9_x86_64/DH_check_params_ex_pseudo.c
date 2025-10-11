
/* WARNING: Type propagation algorithm not settling */

ulong DH_check_params_ex(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check_params(param_1,&local_14);
  if ((int)uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x24,"DH_check_params_ex");
      ERR_set_error(5,0x75,0);
    }
    if ((local_14 & 8) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x26,"DH_check_params_ex");
      ERR_set_error(5,0x78,0);
    }
    if ((local_14 & 0x80) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x28,"DH_check_params_ex");
      ERR_set_error(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x2a,"DH_check_params_ex");
      ERR_set_error(5,0x67,0);
    }
    uVar1 = (ulong)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

