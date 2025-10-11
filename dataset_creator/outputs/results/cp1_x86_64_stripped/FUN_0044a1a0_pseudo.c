
undefined8 FUN_0044a1a0(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((*(byte *)(param_1 + 0x3c) & 4) != 0) {
    uVar6 = 0;
    do {
      pbVar1 = (byte *)(param_1 + 0x75 + uVar6);
      pbVar2 = (byte *)(param_1 + 0x76 + uVar6);
      uVar5 = uVar6 >> 2;
      pbVar3 = (byte *)(param_1 + 0x74 + uVar6);
      pbVar4 = (byte *)(param_1 + 0x77 + uVar6);
      uVar6 = uVar6 + 4;
      *(uint *)(param_1 + 0xe0 + (uVar5 & 0x3fffffff) * 4) =
           (uint)*pbVar1 << 8 | (uint)*pbVar2 << 0x10 | (uint)*pbVar3 | (uint)*pbVar4 << 0x18;
    } while (uVar6 != 0x10);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}

