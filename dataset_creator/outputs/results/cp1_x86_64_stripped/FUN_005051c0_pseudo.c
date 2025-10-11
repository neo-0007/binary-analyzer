
void FUN_005051c0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_1[2];
  *param_1 = uVar1 - *param_2;
  param_1[1] = ((param_1[1] - uVar3) - (ulong)(uVar1 < uVar2)) + 0x7fffffffffffffc0;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar4 - param_2[2];
  uVar3 = param_1[4];
  param_1[3] = ((param_1[3] - uVar2) - (ulong)(uVar4 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar3 - param_2[4];
  uVar4 = param_1[6];
  param_1[5] = ((param_1[5] - uVar2) - (ulong)(uVar3 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  param_1[6] = uVar4 - param_2[6];
  uVar3 = param_1[8];
  param_1[7] = ((param_1[7] - uVar2) - (ulong)(uVar4 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  param_1[8] = uVar3 - param_2[8];
  uVar4 = param_1[10];
  param_1[9] = ((param_1[9] - uVar2) - (ulong)(uVar3 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  param_1[10] = uVar4 - param_2[10];
  uVar3 = param_1[0xc];
  param_1[0xb] = ((param_1[0xb] - uVar2) - (ulong)(uVar4 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  param_1[0xc] = uVar3 - param_2[0xc];
  uVar4 = param_1[0xe];
  param_1[0xd] = ((param_1[0xd] - uVar2) - (ulong)(uVar3 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[0xe];
  uVar2 = param_2[0xf];
  param_1[0xe] = uVar4 - param_2[0xe];
  uVar3 = param_1[0x10];
  param_1[0xf] = ((param_1[0xf] - uVar2) - (ulong)(uVar4 < uVar1)) + 0x7fffffffffffffe0;
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  param_1[0x10] = uVar3 - param_2[0x10];
  param_1[0x11] = ((param_1[0x11] - uVar2) - (ulong)(uVar3 < uVar1)) + 0x7fffffffffffffe0;
  return;
}

