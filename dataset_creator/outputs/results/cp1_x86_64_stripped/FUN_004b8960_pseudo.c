
undefined8 FUN_004b8960(long *param_1,int param_2)

{
  ulong *puVar1;
  byte bVar2;
  
  if (-1 < param_2) {
    if (param_2 >> 6 < (int)param_1[1]) {
      bVar2 = (byte)param_2 & 0x3f;
      puVar1 = (ulong *)(*param_1 + (long)(param_2 >> 6) * 8);
      *puVar1 = *puVar1 & (-2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2);
      FUN_004b8490();
      return 1;
    }
  }
  return 0;
}

