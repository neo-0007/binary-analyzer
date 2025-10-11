
int FUN_005a1620(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)PTR_DAT_0093cd00;
  piVar2 = (int *)PTR_DAT_0093cd00;
  if (iVar1 != 0) {
    while (param_1 != iVar1) {
      iVar1 = piVar2[1];
      piVar2 = piVar2 + 1;
      if (iVar1 == 0) {
        return iVar1;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}

