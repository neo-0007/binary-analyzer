
undefined * FUN_00614580(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 8) {
    return &DAT_0093d100 + (long)param_1 * 0x28;
  }
  puVar1 = (undefined *)FUN_004364a0(DAT_00942858,param_1 + -8);
  return puVar1;
}

