
/* WARNING: Type propagation algorithm not settling */

uint DH_check_ex(DH *param_1)

{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = DH_check(param_1,(int *)&local_14);
  if (uVar1 != 0) {
    if ((local_14 & 8) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x77,"DH_check_ex");
      ERR_set_error(5,0x78,0);
    }
    if ((local_14 & 0x10) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x79,"DH_check_ex");
      ERR_set_error(5,0x77,0);
    }
    if ((local_14 & 0x20) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x7b,"DH_check_ex");
      ERR_set_error(5,0x74,0);
    }
    if ((local_14 & 0x40) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x7d,"DH_check_ex");
      ERR_set_error(5,0x73,0);
    }
    if ((local_14 & 4) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x7f,"DH_check_ex");
      ERR_set_error(5,0x79,0);
    }
    if ((local_14 & 1) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x81,"DH_check_ex");
      ERR_set_error(5,0x75,0);
    }
    if ((local_14 & 2) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x83,"DH_check_ex");
      ERR_set_error(5,0x76,0);
    }
    if ((local_14 & 0x80) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x85,"DH_check_ex");
      ERR_set_error(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      ERR_new();
      ERR_set_debug("../crypto/dh/dh_check.c",0x87,"DH_check_ex");
      ERR_set_error(5,0x67,0);
    }
    uVar1 = (uint)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

