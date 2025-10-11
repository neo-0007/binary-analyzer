
ulong FUN_004d42a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = FUN_004d4200(param_1,param_2,&local_14);
  if ((int)uVar1 != 0) {
    if ((local_14 & 1) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0xed,"DH_check_pub_key_ex");
      FUN_0051f8f0(5,0x7c,0);
    }
    if ((local_14 & 2) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0xef,"DH_check_pub_key_ex");
      FUN_0051f8f0(5,0x7b,0);
    }
    if ((local_14 & 4) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0xf1,"DH_check_pub_key_ex");
      FUN_0051f8f0(5,0x7a,0);
    }
    uVar1 = (ulong)(local_14 == 0);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar1;
}

