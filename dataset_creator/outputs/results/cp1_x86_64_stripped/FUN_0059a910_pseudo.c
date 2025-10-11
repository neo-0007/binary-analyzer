
undefined * FUN_0059a910(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 9) {
    return &DAT_0093cb40 + (long)param_1 * 0x30;
  }
  puVar1 = (undefined *)FUN_004364a0(DAT_00942780,param_1 + -9);
  return puVar1;
}

