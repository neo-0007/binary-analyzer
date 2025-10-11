
ulong BN_is_word(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = BN_abs_is_word();
  if (((int)uVar1 != 0) && (uVar1 = 1, param_2 != 0)) {
    return (ulong)(*(int *)(param_1 + 0x10) == 0);
  }
  return uVar1;
}

