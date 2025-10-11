
undefined8
FUN_00622d20(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  if (param_1 == (long *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_b64.c",0x91,"CTLOG_new_from_base64_ex");
    FUN_0051f8f0(0x32,0x80106,0);
    uVar4 = 0;
  }
  else {
    iVar1 = FUN_00622990(param_2,&local_50);
    if (iVar1 < 0) {
      FUN_0051f420();
      uVar4 = 0x97;
    }
    else {
      local_48 = local_50;
      lVar2 = FUN_005aeb60(0,&local_48,(long)iVar1,param_4,param_5);
      FUN_0041ad60(local_50,"../crypto/ct/ct_b64.c",0x9d);
      if (lVar2 != 0) {
        lVar3 = FUN_00622680(lVar2,param_3,param_4,param_5);
        uVar4 = 1;
        *param_1 = lVar3;
        if (lVar3 == 0) {
          FUN_0040f4f0(lVar2);
          uVar4 = 0;
        }
        goto LAB_00622ddc;
      }
      FUN_0051f420();
      uVar4 = 0x9f;
    }
    FUN_0051f540("../crypto/ct/ct_b64.c",uVar4,"CTLOG_new_from_base64_ex");
    FUN_0051f8f0(0x32,0x6e,0);
    uVar4 = 0;
  }
LAB_00622ddc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

