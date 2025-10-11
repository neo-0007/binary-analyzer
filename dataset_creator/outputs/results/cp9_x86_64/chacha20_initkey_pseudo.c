
undefined8 chacha20_initkey(long param_1,long param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_2 != 0) {
    uVar6 = 0;
    do {
      pbVar2 = (byte *)(param_2 + 1 + uVar6);
      pbVar3 = (byte *)(param_2 + 2 + uVar6);
      uVar5 = uVar6 >> 2;
      pbVar1 = (byte *)(param_2 + uVar6);
      pbVar4 = (byte *)(param_2 + 3 + uVar6);
      uVar6 = uVar6 + 4;
      *(uint *)(param_1 + 0xc0 + (uVar5 & 0x3fffffff) * 4) =
           (uint)*pbVar2 << 8 | (uint)*pbVar3 << 0x10 | (uint)*pbVar1 | (uint)*pbVar4 << 0x18;
    } while (uVar6 != 0x20);
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return 1;
}

