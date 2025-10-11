
void FUN_0074dae0(undefined4 *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  uVar2 = param_3 * 4;
  if (uVar2 < 0x10) {
    uVar1 = (uint)uVar2;
    if (7 < uVar1) {
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[param_3 + -2] = param_2;
      (param_1 + param_3 + -2)[1] = param_2;
      return;
    }
    if (3 < uVar1) {
      *param_1 = param_2;
      param_1[param_3 + -1] = param_2;
      return;
    }
    if (1 < uVar1) {
      *(short *)param_1 = (short)param_2;
      *(char *)((long)param_1 + (uVar2 - 1)) = (char)param_2;
      return;
    }
    if (uVar1 != 0) {
      *(char *)param_1 = (char)param_2;
      return;
    }
  }
  else {
    if (uVar2 < 0x21) {
      puVar3 = param_1 + param_3 + -4;
      *puVar3 = param_2;
      puVar3[1] = param_2;
      puVar3[2] = param_2;
      puVar3[3] = param_2;
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
      return;
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    param_1[4] = param_2;
    param_1[5] = param_2;
    param_1[6] = param_2;
    param_1[7] = param_2;
    if (uVar2 < 0x41) {
      param_1[param_3 + -8] = param_2;
      param_1[param_3 + -7] = param_2;
      param_1[param_3 + -6] = param_2;
      param_1[param_3 + -5] = param_2;
      param_1[param_3 + -4] = param_2;
      param_1[param_3 + -3] = param_2;
      param_1[param_3 + -2] = param_2;
      param_1[param_3 + -1] = param_2;
      return;
    }
    param_1[8] = param_2;
    param_1[9] = param_2;
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    param_1[0xc] = param_2;
    param_1[0xd] = param_2;
    param_1[0xe] = param_2;
    param_1[0xf] = param_2;
    if (0x80 < uVar2) {
      puVar3 = (undefined4 *)((ulong)(param_1 + 0x10) & 0xffffffffffffffe0);
      do {
        *puVar3 = param_2;
        puVar3[1] = param_2;
        puVar3[2] = param_2;
        puVar3[3] = param_2;
        puVar3[4] = param_2;
        puVar3[5] = param_2;
        puVar3[6] = param_2;
        puVar3[7] = param_2;
        puVar3[8] = param_2;
        puVar3[9] = param_2;
        puVar3[10] = param_2;
        puVar3[0xb] = param_2;
        puVar3[0xc] = param_2;
        puVar3[0xd] = param_2;
        puVar3[0xe] = param_2;
        puVar3[0xf] = param_2;
        puVar3 = puVar3 + 0x10;
      } while (puVar3 < param_1 + param_3 + -0x10);
    }
    param_1[param_3 + -0x10] = param_2;
    param_1[param_3 + -0xf] = param_2;
    param_1[param_3 + -0xe] = param_2;
    param_1[param_3 + -0xd] = param_2;
    param_1[param_3 + -0xc] = param_2;
    param_1[param_3 + -0xb] = param_2;
    param_1[param_3 + -10] = param_2;
    param_1[param_3 + -9] = param_2;
    param_1[param_3 + -8] = param_2;
    param_1[param_3 + -7] = param_2;
    param_1[param_3 + -6] = param_2;
    param_1[param_3 + -5] = param_2;
    param_1[param_3 + -4] = param_2;
    param_1[param_3 + -3] = param_2;
    param_1[param_3 + -2] = param_2;
    param_1[param_3 + -1] = param_2;
  }
  return;
}

