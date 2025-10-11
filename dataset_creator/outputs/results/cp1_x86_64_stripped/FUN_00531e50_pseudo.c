
undefined8 FUN_00531e50(long param_1,ulong param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  long lStack_80;
  ulong local_78;
  long local_70;
  ulong local_58;
  ulong local_50;
  undefined1 local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 >> 0x3b == 0) {
    local_50 = param_4;
    if (param_4 == 0) goto LAB_00531f8f;
  }
  else {
    local_50 = 0x800000000000000;
  }
  local_78 = param_2;
  local_70 = param_3;
  local_58 = param_4;
  do {
    if (local_50 << 3 != 0) {
      uVar6 = 0;
      lStack_80 = param_3;
      do {
        uVar7 = uVar6 >> 3;
        local_42 = (undefined1)(((int)(uint)*(byte *)(local_70 + uVar7) >> (~(byte)uVar6 & 7)) << 7)
        ;
        uVar2 = FUN_004098b0(param_1,param_2,lStack_80);
        lStack_80 = 0x531f04;
        uVar3 = FUN_004098f0(param_1);
        FUN_005cc090(&local_42,&local_41,1,1,uVar3,param_1 + 0x28,uVar2);
        bVar4 = (byte)uVar6 & 7;
        uVar6 = uVar6 + 1;
        pbVar1 = (byte *)(local_78 + uVar7);
        uVar5 = (int)(local_41 & 0x80) >> bVar4;
        param_2 = (ulong)uVar5;
        *pbVar1 = ~(byte)(0x80 >> bVar4) & *pbVar1 | (byte)uVar5;
        param_3 = 0x531f04;
      } while (uVar6 != local_50 << 3);
    }
    local_58 = local_58 - local_50;
    local_70 = local_70 + local_50;
    local_78 = local_78 + local_50;
    if (local_58 < local_50) {
      local_50 = local_58;
    }
  } while (local_58 != 0);
LAB_00531f8f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

