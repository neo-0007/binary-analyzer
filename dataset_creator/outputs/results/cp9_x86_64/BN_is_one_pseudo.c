
ulong BN_is_one(long param_1)

{
  ulong uVar1;
  
  uVar1 = BN_abs_is_word(param_1,1);
  if ((int)uVar1 != 0) {
    uVar1 = (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}

