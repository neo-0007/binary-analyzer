
undefined8 FUN_00530710(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3e == 0) {
    uVar3 = param_4;
    if (param_4 == 0) goto LAB_005307cb;
  }
  else {
    uVar3 = 0x4000000000000000;
  }
  do {
    param_4 = param_4 - uVar3;
    local_44 = FUN_00409fd0(param_1);
    uVar1 = FUN_004098b0(param_1);
    uVar2 = FUN_004098f0(param_1);
    lVar5 = param_3 + uVar3;
    lVar4 = param_2 + uVar3;
    FUN_005c7c20(param_3,param_2,uVar3,uVar2,param_1 + 0x28,&local_44,uVar1);
    FUN_0040a0a0(param_1,local_44);
    if (param_4 < uVar3) {
      uVar3 = param_4;
    }
    param_2 = lVar4;
    param_3 = lVar5;
  } while (param_4 != 0);
LAB_005307cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

