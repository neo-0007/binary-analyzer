
int FUN_007694c0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(uint *)(param_2 + 0x10) <= *(uint *)(param_1 + 0x10)) {
    iVar1 = -(uint)(*(uint *)(param_1 + 0x10) != *(uint *)(param_2 + 0x10));
  }
  return iVar1;
}

