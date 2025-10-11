
void FUN_004283b0(void)

{
  int iVar1;
  
  DAT_0093fd68 = FUN_00422240();
  if (DAT_0093fd68 == 0) {
    DAT_0093fd48 = 0;
    return;
  }
  DAT_0093fd60 = FUN_00422240();
  if ((DAT_0093fd60 != 0) && (iVar1 = FUN_0047bec0(DAT_0093fd60), iVar1 != 0)) {
    DAT_0093fd48 = 1;
    DAT_0093fd4c = 1;
    return;
  }
  FUN_00422300(DAT_0093fd60);
  DAT_0093fd60 = 0;
  FUN_00422300(DAT_0093fd68);
  DAT_0093fd68 = 0;
  DAT_0093fd48 = 0;
  return;
}

