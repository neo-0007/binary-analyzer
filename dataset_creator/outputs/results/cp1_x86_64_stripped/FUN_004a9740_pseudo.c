
int FUN_004a9740(void)

{
  int iVar1;
  
  iVar1 = FUN_00422360(&DAT_00940fb4,0);
  if (iVar1 != 0) {
    iVar1 = FUN_00422360(&DAT_00940fb0,0);
    if (iVar1 != 0) {
      return 1;
    }
    FUN_004223b0(&DAT_00940fb4);
    iVar1 = 0;
  }
  return iVar1;
}

