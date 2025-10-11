
bool FUN_005b4140(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_2 + 7;
  if (-1 < param_2) {
    iVar1 = param_2;
  }
  bVar2 = false;
  if (((param_1 != (int *)0x0) && (iVar1 >> 3 < *param_1)) && (*(long *)(param_1 + 2) != 0)) {
    bVar2 = (1 << (~(byte)param_2 & 7) &
            (uint)*(byte *)(*(long *)(param_1 + 2) + (long)(iVar1 >> 3))) != 0;
  }
  return bVar2;
}

