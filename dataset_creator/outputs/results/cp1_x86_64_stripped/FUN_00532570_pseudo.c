
undefined8 FUN_00532570(long param_1,long param_2,long param_3,ulong param_4)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = param_4;
  local_60 = param_2;
  local_58 = param_3;
  if (0x3fffffffffffffff < param_4) {
    do {
      local_44 = FUN_00409fd0(param_1);
      uVar1 = FUN_004098b0(param_1);
      lVar2 = FUN_004098f0(param_1);
      lVar3 = FUN_004098f0(param_1);
      uVar4 = FUN_004098f0(param_1);
      lVar5 = (param_2 + param_4) - uVar7;
      lVar6 = (param_3 + param_4) - uVar7;
      uVar7 = uVar7 + 0xc000000000000000;
      FUN_004ce070(lVar6,lVar5,0x4000000000000000,uVar4,lVar3 + 0x80,lVar2 + 0x100,param_1 + 0x28,
                   &local_44,uVar1);
      FUN_0040a0a0(param_1,local_44);
    } while (0x3fffffffffffffff < uVar7);
    uVar7 = param_4 & 0x3fffffffffffffff;
    local_60 = (param_4 + 0xc000000000000000 >> 0x3e) + 1 << 0x3e;
    local_58 = param_3 + local_60;
    local_60 = param_2 + local_60;
  }
  if (uVar7 != 0) {
    local_44 = FUN_00409fd0(param_1);
    uVar1 = FUN_004098b0(param_1);
    lVar2 = FUN_004098f0(param_1);
    lVar3 = FUN_004098f0(param_1);
    uVar4 = FUN_004098f0(param_1);
    FUN_004ce070(local_58,local_60,uVar7,uVar4,lVar3 + 0x80,lVar2 + 0x100,param_1 + 0x28,&local_44,
                 uVar1);
    FUN_0040a0a0(param_1,local_44);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

