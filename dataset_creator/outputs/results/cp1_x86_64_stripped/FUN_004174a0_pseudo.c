
undefined * FUN_004174a0(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 != (undefined *)0x0) {
    return param_1;
  }
  iVar1 = FUN_00422340(&DAT_0093fa08,FUN_00417240);
  if (((iVar1 != 0) && (DAT_0093fa00 != 0)) &&
     (puVar2 = (undefined *)FUN_00422380(&DAT_0093fa04), puVar2 != (undefined *)0x0)) {
    return puVar2;
  }
  return &DAT_0093fa20;
}

