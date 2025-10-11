
void FUN_0051d940(void)

{
  int iVar1;
  
  iVar1 = FUN_00419fe0(0x40000,0);
  if ((iVar1 != 0) && (DAT_009411f0 = FUN_00422240(), DAT_009411f0 != 0)) {
    DAT_009411e8 = FUN_00545610(FUN_0051d8d0,FUN_0051d920);
    if (DAT_009411e8 != 0) {
      DAT_009411e4 = 1;
      return;
    }
    FUN_00422300(DAT_009411f0);
    DAT_009411f0 = 0;
  }
  DAT_009411e4 = 0;
  return;
}

