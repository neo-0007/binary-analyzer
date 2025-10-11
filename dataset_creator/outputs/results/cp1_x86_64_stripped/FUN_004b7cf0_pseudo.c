
ulong FUN_004b7cf0(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_004b7b70();
  if (((int)uVar1 != 0) && (uVar1 = 1, param_2 != 0)) {
    return (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}

