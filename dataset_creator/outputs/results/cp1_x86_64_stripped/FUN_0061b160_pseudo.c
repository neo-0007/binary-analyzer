
ulong FUN_0061b160(uint *param_1,long *param_2)

{
  uint uVar1;
  
  if (param_2 != (long *)0x0) {
    thunk_FUN_00713a50(*param_2,*(undefined8 *)(param_1 + 2),(long)(int)*param_1);
    uVar1 = *param_1;
    *param_2 = *param_2 + (long)(int)uVar1;
    return (long)(int)uVar1;
  }
  return (ulong)*param_1;
}

