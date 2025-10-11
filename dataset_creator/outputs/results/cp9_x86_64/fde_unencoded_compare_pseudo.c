
int fde_unencoded_compare(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(ulong *)(param_2 + 8) <= *(ulong *)(param_3 + 8)) {
    iVar1 = -(uint)(*(ulong *)(param_2 + 8) < *(ulong *)(param_3 + 8));
  }
  return iVar1;
}

