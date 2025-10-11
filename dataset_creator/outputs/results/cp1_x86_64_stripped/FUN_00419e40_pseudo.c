
void FUN_00419e40(void)

{
  int iVar1;
  
  DAT_0093fc68 = FUN_00422240();
  if (DAT_0093fc68 != 0) {
    FUN_00546520(DAT_0093fc68);
    iVar1 = FUN_0041aaa0();
    if ((iVar1 != 0) && (iVar1 = FUN_00422360(&DAT_0093fc64,0), iVar1 != 0)) {
      DAT_0093fc5c = 1;
      DAT_0093fc58 = 1;
      return;
    }
  }
  FUN_00422300(DAT_0093fc68);
  DAT_0093fc68 = 0;
  DAT_0093fc58 = 0;
  return;
}

