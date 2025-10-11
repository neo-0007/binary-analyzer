
void ctr_XOR(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar2 = *(ulong *)(param_1 + 0x28);
    uVar4 = uVar2;
    if (param_3 <= uVar2) {
      uVar4 = param_3;
    }
    if (uVar4 != 0) {
      uVar3 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x34 + uVar3);
        *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar4 != uVar3);
    }
    if (uVar2 < param_3) {
      param_3 = param_3 - uVar2;
      if (0x10 < param_3) {
        param_3 = 0x10;
      }
      uVar4 = 0;
      do {
        pbVar1 = (byte *)(param_1 + 0x54 + uVar4);
        *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + uVar2 + uVar4);
        uVar4 = uVar4 + 1;
      } while (param_3 != uVar4);
    }
  }
  return;
}

