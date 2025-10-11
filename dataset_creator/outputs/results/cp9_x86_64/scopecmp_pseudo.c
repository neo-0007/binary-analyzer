
ulong scopecmp(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0xffffffff;
  if (*(uint *)(param_1 + 4) <= *(uint *)(param_2 + 4)) {
    uVar1 = (ulong)(*(uint *)(param_1 + 4) != *(uint *)(param_2 + 4));
  }
  return uVar1;
}

