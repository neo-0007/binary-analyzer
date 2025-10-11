
int FUN_0055b840(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 uStack_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  iVar1 = FUN_00559ed0(&local_28);
  if (iVar1 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_004ab7e0(param_1,local_28,iVar1,uStack_30);
    FUN_0041ad60(local_28,"../crypto/pem/pvkfmt.c",0x458);
    if (iVar1 != iVar2) {
      FUN_0051f420();
      FUN_0051f540("../crypto/pem/pvkfmt.c",0x45c,"i2b_PVK_bio_ex");
      iVar2 = -1;
      FUN_0051f8f0(9,0x76,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

