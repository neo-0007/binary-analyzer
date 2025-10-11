
/* WARNING: Type propagation algorithm not settling */

ulong FUN_004d3b20(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = FUN_004d39f0(param_1,&local_14);
  if ((int)uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x24,"DH_check_params_ex");
      FUN_0051f8f0(5,0x75,0);
    }
    if ((local_14 & 8) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x26,"DH_check_params_ex");
      FUN_0051f8f0(5,0x78,0);
    }
    if ((local_14 & 0x80) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x28,"DH_check_params_ex");
      FUN_0051f8f0(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x2a,"DH_check_params_ex");
      FUN_0051f8f0(5,0x67,0);
    }
    uVar1 = (ulong)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

