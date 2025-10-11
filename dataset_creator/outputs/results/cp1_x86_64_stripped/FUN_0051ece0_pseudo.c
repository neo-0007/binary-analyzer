
int FUN_0051ece0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00422340(&DAT_009411f8,FUN_0051d940);
  if ((iVar1 != 0) && (DAT_009411e4 != 0)) {
    iVar2 = FUN_004222c0(DAT_009411f0);
    iVar1 = DAT_0093bf70;
    if (iVar2 != 0) {
      DAT_0093bf70 = DAT_0093bf70 + 1;
      FUN_004222e0(DAT_009411f0);
      return iVar1;
    }
  }
  return 0;
}

