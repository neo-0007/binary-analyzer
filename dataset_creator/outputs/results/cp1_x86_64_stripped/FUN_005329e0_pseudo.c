
undefined8 FUN_005329e0(long param_1,long param_2,long param_3,ulong param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  byte bVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  undefined1 local_42;
  byte local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_0040b2f0(param_1,0x2000);
  uVar4 = param_4 * 8;
  if (iVar2 != 0) {
    uVar4 = param_4;
  }
  if (uVar4 != 0) {
    uVar9 = 0;
    do {
      uVar10 = uVar9 >> 3;
      local_42 = (undefined1)(((int)(uint)*(byte *)(param_3 + uVar10) >> (~(byte)uVar9 & 7)) << 7);
      uVar3 = FUN_004098b0(param_1);
      lVar5 = FUN_004098f0(param_1);
      lVar6 = FUN_004098f0(param_1);
      uVar7 = FUN_004098f0(param_1);
      FUN_004ce230(&local_42,&local_41,1,1,uVar7,lVar6 + 0x80,lVar5 + 0x100,param_1 + 0x28,uVar3);
      bVar8 = (byte)uVar9 & 7;
      uVar9 = uVar9 + 1;
      pbVar1 = (byte *)(param_2 + uVar10);
      *pbVar1 = ~(byte)(0x80 >> bVar8) & *pbVar1 | (byte)((int)(local_41 & 0x80) >> bVar8);
    } while (uVar4 != uVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

