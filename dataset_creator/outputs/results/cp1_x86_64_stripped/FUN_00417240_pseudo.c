
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00417240(void)

{
  int iVar1;
  
  iVar1 = FUN_00422360(&DAT_0093fa04,0);
  if (iVar1 != 0) {
    _DAT_0093fa20 = FUN_00422240();
    if (_DAT_0093fa20 != 0) {
      iVar1 = FUN_00417120(&DAT_0093fa20);
      DAT_0093fa00 = (uint)(iVar1 != 0);
      return;
    }
  }
  DAT_0093fa00 = 0;
  return;
}

