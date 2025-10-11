
ulong FUN_004b7cc0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_004b7b70(param_1,1);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}

