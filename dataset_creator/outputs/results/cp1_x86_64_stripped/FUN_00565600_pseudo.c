
ulong * FUN_00565600(long param_1,long param_2,ulong *param_3,ulong param_4)

{
  ulong *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  param_2 = param_2 - (long)param_3;
  param_1 = param_1 - (long)param_3;
  uVar3 = param_4 >> 4;
  if (uVar3 != 0) {
    do {
      puVar1 = (ulong *)(param_2 + (long)param_3);
      uVar5 = *puVar1 ^ *param_3;
      uVar6 = puVar1[1] ^ param_3[1];
      puVar1 = (ulong *)(param_1 + (long)param_3);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      *param_3 = uVar5;
      param_3[1] = uVar6;
      param_3 = param_3 + 2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    param_4 = param_4 & 0xf;
    if (param_4 == 0) {
      return param_3;
    }
  }
  lVar4 = 0x10 - param_4;
  do {
    bVar2 = *(byte *)(param_2 + (long)param_3) ^ (byte)*param_3;
    *(byte *)(param_1 + (long)param_3) = bVar2;
    *(byte *)param_3 = bVar2;
    param_3 = (ulong *)((long)param_3 + 1);
    param_4 = param_4 - 1;
  } while (param_4 != 0);
  do {
    *(byte *)param_3 = 0;
    param_3 = (ulong *)((long)param_3 + 1);
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return param_3;
}

