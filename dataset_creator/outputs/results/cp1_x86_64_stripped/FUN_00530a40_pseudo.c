
undefined8 FUN_00530a40(long param_1,long param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_1 + 0x78);
  if (param_2 != 0) {
    uVar7 = 0;
    do {
      pbVar2 = (byte *)(param_2 + 1 + uVar7);
      pbVar3 = (byte *)(param_2 + 2 + uVar7);
      uVar6 = uVar7 >> 2;
      pbVar1 = (byte *)(param_2 + uVar7);
      pbVar4 = (byte *)(param_2 + 3 + uVar7);
      uVar7 = uVar7 + 4;
      *(uint *)(lVar5 + (uVar6 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar7 != 0x20);
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      pbVar2 = (byte *)(param_3 + 1 + uVar7);
      pbVar3 = (byte *)(param_3 + 2 + uVar7);
      uVar6 = uVar7 >> 2;
      pbVar1 = (byte *)(param_3 + uVar7);
      pbVar4 = (byte *)(param_3 + 3 + uVar7);
      uVar7 = uVar7 + 4;
      *(uint *)(lVar5 + 0x20 + (uVar6 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar7 != 0x10);
  }
  *(undefined4 *)(lVar5 + 0x70) = 0;
  return 1;
}

