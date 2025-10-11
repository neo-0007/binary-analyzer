
undefined8 FUN_0052deb0(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3b == 0) {
    uVar7 = param_4;
    if (param_4 == 0) goto LAB_0052df9d;
  }
  else {
    uVar7 = 0x800000000000000;
  }
  do {
    local_44 = FUN_00409fd0(param_1);
    uVar1 = FUN_004098b0(param_1);
    uVar3 = FUN_004098f0(param_1);
    iVar2 = FUN_0040b2f0(param_1,0x2000);
    uVar4 = uVar7 * 8;
    if (iVar2 != 0) {
      uVar4 = uVar7;
    }
    param_4 = param_4 - uVar7;
    lVar6 = param_3 + uVar7;
    lVar5 = param_2 + uVar7;
    FUN_0054da20(param_3,param_2,uVar4,uVar3,param_1 + 0x28,&local_44,uVar1,PTR_FUN_0093afa8);
    FUN_0040a0a0(param_1,local_44);
    if (param_4 < uVar7) {
      uVar7 = param_4;
    }
  } while ((param_4 != 0) && (param_2 = lVar5, param_3 = lVar6, uVar7 <= param_4));
LAB_0052df9d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

