
undefined * FUN_004a13f0(int param_1)

{
  undefined *puVar1;
  
  if (param_1 < 0) {
    return (undefined *)0x0;
  }
  if (param_1 < 0x10) {
    return (&PTR_DAT_0093bca0)[param_1];
  }
  puVar1 = (undefined *)FUN_004364a0(DAT_00940fa8,param_1 + -0x10);
  return puVar1;
}

