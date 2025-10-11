
undefined8 FUN_004fd8a0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004b7d60(param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
    iVar1 = FUN_004b87e0(param_2,&local_48,0x20);
    if (iVar1 < 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ec/ecp_nistp256.c",0xa1,"BN_to_felem");
      FUN_0051f8f0(0x10,0x90,0);
    }
    else {
      param_1[1] = 0;
      uVar2 = 1;
      param_1[3] = 0;
      *param_1 = local_48;
      param_1[5] = 0;
      param_1[2] = local_40;
      param_1[7] = 0;
      param_1[4] = local_38;
      param_1[6] = local_30;
    }
  }
  else {
    FUN_0051f420();
    uVar2 = 0;
    FUN_0051f540("../crypto/ec/ecp_nistp256.c",0x9c,"BN_to_felem");
    FUN_0051f8f0(0x10,0x90,0);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

