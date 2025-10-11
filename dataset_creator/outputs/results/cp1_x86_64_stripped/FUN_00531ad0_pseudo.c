
undefined8 FUN_00531ad0(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long extraout_RDX;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long lStack_80;
  long local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = param_4;
  lVar5 = param_2;
  uVar7 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if (0x3fffffffffffffff < param_4) {
    lVar6 = param_3;
    lStack_80 = param_2;
    do {
      local_44 = FUN_00409fd0(param_1,lStack_80,lVar6,uVar4);
      uVar1 = FUN_004098b0(param_1);
      uVar4 = (ulong)uVar1;
      lStack_80 = 0x531b5f;
      uVar3 = FUN_004098f0(param_1);
      lVar5 = (param_2 + param_4) - uVar7;
      lVar6 = (param_3 + param_4) - uVar7;
      uVar7 = uVar7 + 0xc000000000000000;
      FUN_005cbf10(lVar6,lVar5,0x4000000000000000,uVar3,param_1 + 0x28,&local_44);
      FUN_0040a0a0(param_1,local_44);
      lVar5 = 0x531b5f;
      lVar6 = extraout_RDX;
    } while (0x3fffffffffffffff < uVar7);
    uVar7 = param_4 & 0x3fffffffffffffff;
    local_60 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + local_60;
    local_60 = param_2 + local_60;
    param_3 = extraout_RDX;
  }
  if (uVar7 != 0) {
    local_44 = FUN_00409fd0(param_1,lVar5,param_3,uVar4);
    uVar2 = FUN_004098b0(param_1);
    uVar3 = FUN_004098f0(param_1);
    FUN_005cbf10(local_58,local_60,uVar7,uVar3,param_1 + 0x28,&local_44,uVar2);
    FUN_0040a0a0(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

