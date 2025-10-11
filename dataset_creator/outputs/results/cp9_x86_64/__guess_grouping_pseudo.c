
undefined1  [16] __guess_grouping(uint param_1,char *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  uVar3 = 0;
  if ((byte)(*param_2 - 1U) < 0x7e) {
    while (uVar2 = (uint)*param_2, uVar2 < param_1) {
      pbVar1 = (byte *)(param_2 + 1);
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 1;
      param_1 = param_1 - uVar2;
      if (0x7e < *pbVar1) break;
      if (*pbVar1 == 0) {
        auVar5._4_4_ = 0;
        auVar5._0_4_ = uVar3 + (param_1 - 1) / uVar2;
        auVar5._8_8_ = (ulong)(param_1 - 1) % (ulong)uVar2;
        return auVar5;
      }
    }
  }
  auVar4._4_4_ = 0;
  auVar4._0_4_ = uVar3;
  auVar4._8_8_ = param_3;
  return auVar4;
}

