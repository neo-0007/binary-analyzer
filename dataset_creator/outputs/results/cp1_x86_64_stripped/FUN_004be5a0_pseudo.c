
void FUN_004be5a0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1 & 0x1fffffff;
  param_1[1] = uVar1 >> 0x1d & 0x1fffffff;
  param_1[2] = uVar1 >> 0x3a | (uVar2 & 0x7fffff) << 6;
  uVar1 = param_2[2];
  param_1[3] = uVar2 >> 0x17 & 0x1fffffff;
  param_1[4] = uVar2 >> 0x34 | (uVar1 & 0x1ffff) << 0xc;
  uVar2 = param_2[3];
  param_1[5] = uVar1 >> 0x11 & 0x1fffffff;
  param_1[6] = uVar1 >> 0x2e | (uVar2 & 0x7ff) << 0x12;
  uVar1 = param_2[4];
  param_1[7] = uVar2 >> 0xb & 0x1fffffff;
  param_1[8] = uVar2 >> 0x28 | (uVar1 & 0x1f) << 0x18;
  uVar2 = param_2[5];
  param_1[9] = uVar1 >> 5 & 0x1fffffff;
  param_1[10] = uVar1 >> 0x22 & 0x1fffffff;
  param_1[0xb] = uVar1 >> 0x3f | (uVar2 & 0xfffffff) << 1;
  uVar1 = param_2[6];
  param_1[0xc] = uVar2 >> 0x1c & 0x1fffffff;
  param_1[0xd] = uVar2 >> 0x39 | (uVar1 & 0x3fffff) << 7;
  uVar2 = param_2[7];
  param_1[0xe] = uVar1 >> 0x16 & 0x1fffffff;
  param_1[0xf] = uVar1 >> 0x33 | (uVar2 & 0xffff) << 0xd;
  uVar1 = param_2[8];
  param_1[0x10] = uVar2 >> 0x10 & 0x1fffffff;
  param_1[0x11] = uVar2 >> 0x2d | (uVar1 & 0x3ff) << 0x13;
  uVar2 = param_2[9];
  param_1[0x12] = uVar1 >> 10 & 0x1fffffff;
  param_1[0x13] = uVar1 >> 0x27 | (uVar2 & 0xf) << 0x19;
  uVar1 = param_2[10];
  param_1[0x14] = uVar2 >> 4 & 0x1fffffff;
  param_1[0x15] = uVar2 >> 0x21 & 0x1fffffff;
  param_1[0x16] = uVar2 >> 0x3e | (uVar1 & 0x7ffffff) << 2;
  uVar2 = param_2[0xb];
  param_1[0x17] = uVar1 >> 0x1b & 0x1fffffff;
  param_1[0x18] = uVar1 >> 0x38 | (uVar2 & 0x1fffff) << 8;
  uVar1 = param_2[0xc];
  param_1[0x19] = uVar2 >> 0x15 & 0x1fffffff;
  param_1[0x1a] = uVar2 >> 0x32 | (uVar1 & 0x7fff) << 0xe;
  uVar2 = param_2[0xd];
  param_1[0x1b] = uVar1 >> 0xf & 0x1fffffff;
  param_1[0x1c] = uVar1 >> 0x2c | (uVar2 & 0x1ff) << 0x14;
  uVar1 = param_2[0xe];
  param_1[0x1d] = uVar2 >> 9 & 0x1fffffff;
  param_1[0x1e] = uVar2 >> 0x26 | (uVar1 & 7) << 0x1a;
  uVar2 = param_2[0xf];
  param_1[0x1f] = uVar1 >> 3 & 0x1fffffff;
  param_1[0x20] = uVar1 >> 0x20 & 0x1fffffff;
  param_1[0x21] = uVar1 >> 0x3d | (uVar2 & 0x3ffffff) << 3;
  param_1[0x22] = uVar2 >> 0x1a & 0x1fffffff;
  param_1[0x23] = uVar2 >> 0x37;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}

