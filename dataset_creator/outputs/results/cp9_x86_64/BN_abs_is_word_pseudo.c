
uint BN_abs_is_word(undefined8 *param_1,long param_2,long *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if ((uVar1 == 1) && (param_3 = (long *)*param_1, *param_3 == param_2)) {
    return uVar1;
  }
  return (uint)(uVar1 == 0) & (uint)CONCAT71((int7)((ulong)param_3 >> 8),param_2 == 0);
}

