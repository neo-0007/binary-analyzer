
void felem_diff_128_64(ulong *param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 + (0x7fffffffffffffc0U - lVar3);
  param_1[1] = param_1[1] + (ulong)CARRY8(uVar2,0x7fffffffffffffc0U - lVar3);
  lVar3 = param_2[1];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[3] = param_1[3] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[2];
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[5] = param_1[5] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[3];
  puVar1 = param_1 + 6;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[7] = param_1[7] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[4];
  puVar1 = param_1 + 8;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[9] = param_1[9] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[5];
  puVar1 = param_1 + 10;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[0xb] = param_1[0xb] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[6];
  puVar1 = param_1 + 0xc;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[0xd] = param_1[0xd] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[7];
  puVar1 = param_1 + 0xe;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[0xf] = param_1[0xf] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  lVar3 = param_2[8];
  puVar1 = param_1 + 0x10;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + (0x7fffffffffffffe0U - lVar3);
  param_1[0x11] = param_1[0x11] + (ulong)CARRY8(uVar2,0x7fffffffffffffe0U - lVar3);
  return;
}

