
int FUN_0051d920(ulong *param_1,ulong *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != *param_2) {
    iVar1 = (-(uint)(*param_2 < *param_1) & 2) - 1;
  }
  return iVar1;
}

