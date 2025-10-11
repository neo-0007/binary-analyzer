
/* WARNING: Type propagation algorithm not settling */

ulong FUN_004d3f20(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  uVar1 = FUN_004d3ca0(param_1,&local_14);
  if ((int)uVar1 != 0) {
    if ((local_14 & 8) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x77,"DH_check_ex");
      FUN_0051f8f0(5,0x78,0);
    }
    if ((local_14 & 0x10) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x79,"DH_check_ex");
      FUN_0051f8f0(5,0x77,0);
    }
    if ((local_14 & 0x20) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x7b,"DH_check_ex");
      FUN_0051f8f0(5,0x74,0);
    }
    if ((local_14 & 0x40) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x7d,"DH_check_ex");
      FUN_0051f8f0(5,0x73,0);
    }
    if ((local_14 & 4) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x7f,"DH_check_ex");
      FUN_0051f8f0(5,0x79,0);
    }
    if ((local_14 & 1) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x81,"DH_check_ex");
      FUN_0051f8f0(5,0x75,0);
    }
    if ((local_14 & 2) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x83,"DH_check_ex");
      FUN_0051f8f0(5,0x76,0);
    }
    if ((local_14 & 0x80) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x85,"DH_check_ex");
      FUN_0051f8f0(5,0x7e,0);
    }
    if ((local_14 & 0x100) != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/dh/dh_check.c",0x87,"DH_check_ex");
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

