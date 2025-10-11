
undefined * FUN_004173c0(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = FUN_00422340(&DAT_0093fa08,FUN_00417240);
  if ((iVar1 != 0) && (DAT_0093fa00 != 0)) {
    puVar2 = (undefined *)FUN_00422380(&DAT_0093fa04);
    if (puVar2 != (undefined *)0x0) goto LAB_00417403;
  }
  puVar2 = &DAT_0093fa20;
LAB_00417403:
  if (param_1 != (undefined *)0x0) {
    if (param_1 == &DAT_0093fa20) {
      param_1 = (undefined *)0x0;
    }
    FUN_00422390(&DAT_0093fa04,param_1);
  }
  return puVar2;
}

