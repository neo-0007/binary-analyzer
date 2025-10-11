
int FUN_007c9140(long *param_1,int param_2,long param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  ulong uVar2;
  ushort uVar3;
  
  puVar1 = (undefined1 *)(param_3 + param_2);
  if ((long)param_4 - (long)param_2 < 0xb) {
    return -1;
  }
  *puVar1 = 0;
  uVar3 = 2;
  *(undefined2 *)(puVar1 + 1) = 0x2900;
  if ((0x1ff < param_5) && (uVar3 = (ushort)param_5 << 8 | (ushort)param_5 >> 8, 0x4b0 < param_5)) {
    uVar3 = 0xb004;
  }
  *(ushort *)(puVar1 + 3) = uVar3;
  *(undefined2 *)(puVar1 + 5) = 0;
  uVar2 = *(ulong *)(*param_1 + 8);
  *(undefined2 *)(puVar1 + 9) = 0;
  *(ushort *)(puVar1 + 7) = (ushort)((int)(uVar2 >> 0x17) << 0xf) >> 8;
  uVar3 = (*(ushort *)(param_3 + 10) << 8 | *(ushort *)(param_3 + 10) >> 8) + 1;
  *(ushort *)(param_3 + 10) = uVar3 * 0x100 | uVar3 >> 8;
  return ((int)puVar1 + 0xb) - (int)param_3;
}

