
void __wmemset_avx2_unaligned_rtm(undefined4 *param_1,undefined4 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  uVar2 = param_3 * 4;
  if (uVar2 < 0x20) {
    uVar1 = (uint)uVar2;
    if (uVar1 < 0x10) {
      if (uVar1 < 8) {
        if (uVar1 < 4) {
          if (uVar1 < 2) {
            if (uVar1 != 0) {
              *(char *)param_1 = (char)param_2;
            }
          }
          else {
            *(short *)param_1 = (short)param_2;
            *(char *)((long)param_1 + (uVar2 - 1)) = (char)param_2;
          }
        }
        else {
          *param_1 = param_2;
          param_1[param_3 + -1] = param_2;
        }
      }
      else {
        *param_1 = param_2;
        param_1[1] = param_2;
        param_1[param_3 + -2] = param_2;
        (param_1 + param_3 + -2)[1] = param_2;
      }
    }
    else {
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
      param_1 = param_1 + param_3 + -4;
      *param_1 = param_2;
      param_1[1] = param_2;
      param_1[2] = param_2;
      param_1[3] = param_2;
    }
  }
  else if (uVar2 < 0x41) {
    puVar3 = param_1 + param_3 + -8;
    *puVar3 = param_2;
    puVar3[1] = param_2;
    puVar3[2] = param_2;
    puVar3[3] = param_2;
    puVar3[4] = param_2;
    puVar3[5] = param_2;
    puVar3[6] = param_2;
    puVar3[7] = param_2;
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    param_1[4] = param_2;
    param_1[5] = param_2;
    param_1[6] = param_2;
    param_1[7] = param_2;
  }
  else {
    *param_1 = param_2;
    param_1[1] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_2;
    param_1[4] = param_2;
    param_1[5] = param_2;
    param_1[6] = param_2;
    param_1[7] = param_2;
    param_1[8] = param_2;
    param_1[9] = param_2;
    param_1[10] = param_2;
    param_1[0xb] = param_2;
    param_1[0xc] = param_2;
    param_1[0xd] = param_2;
    param_1[0xe] = param_2;
    param_1[0xf] = param_2;
    if (uVar2 < 0x81) {
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
    else {
      param_1[0x10] = param_2;
      param_1[0x11] = param_2;
      param_1[0x12] = param_2;
      param_1[0x13] = param_2;
      param_1[0x14] = param_2;
      param_1[0x15] = param_2;
      param_1[0x16] = param_2;
      param_1[0x17] = param_2;
      param_1[0x18] = param_2;
      param_1[0x19] = param_2;
      param_1[0x1a] = param_2;
      param_1[0x1b] = param_2;
      param_1[0x1c] = param_2;
      param_1[0x1d] = param_2;
      param_1[0x1e] = param_2;
      param_1[0x1f] = param_2;
      if (0x100 < uVar2) {
        puVar3 = (undefined4 *)((ulong)(param_1 + 0x20) & 0xffffffffffffffc0);
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
          puVar3[0x10] = param_2;
          puVar3[0x11] = param_2;
          puVar3[0x12] = param_2;
          puVar3[0x13] = param_2;
          puVar3[0x14] = param_2;
          puVar3[0x15] = param_2;
          puVar3[0x16] = param_2;
          puVar3[0x17] = param_2;
          puVar3[0x18] = param_2;
          puVar3[0x19] = param_2;
          puVar3[0x1a] = param_2;
          puVar3[0x1b] = param_2;
          puVar3[0x1c] = param_2;
          puVar3[0x1d] = param_2;
          puVar3[0x1e] = param_2;
          puVar3[0x1f] = param_2;
          puVar3 = puVar3 + 0x20;
        } while (puVar3 < param_1 + param_3 + -0x20);
      }
      param_1[param_3 + -0x20] = param_2;
      param_1[param_3 + -0x1f] = param_2;
      param_1[param_3 + -0x1e] = param_2;
      param_1[param_3 + -0x1d] = param_2;
      param_1[param_3 + -0x1c] = param_2;
      param_1[param_3 + -0x1b] = param_2;
      param_1[param_3 + -0x1a] = param_2;
      param_1[param_3 + -0x19] = param_2;
      param_1[param_3 + -0x18] = param_2;
      param_1[param_3 + -0x17] = param_2;
      param_1[param_3 + -0x16] = param_2;
      param_1[param_3 + -0x15] = param_2;
      param_1[param_3 + -0x14] = param_2;
      param_1[param_3 + -0x13] = param_2;
      param_1[param_3 + -0x12] = param_2;
      param_1[param_3 + -0x11] = param_2;
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
  }
  bVar4 = (bool)xtest();
  if (!bVar4) {
    return;
  }
  return;
}

