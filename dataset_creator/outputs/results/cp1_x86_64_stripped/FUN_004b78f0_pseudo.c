
uint FUN_004b78f0(long *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < param_2) && (param_2 >> 6 < (int)param_1[1])) {
    uVar1 = (uint)(*(ulong *)(*param_1 + (long)(param_2 >> 6) * 8) >> ((byte)param_2 & 0x3f)) & 1;
  }
  return uVar1;
}

