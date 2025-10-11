
void FUN_00422b00(void)

{
  DAT_0093fd28 = 0;
  DAT_0093fd20 = FUN_00422240();
  if (DAT_0093fd20 == 0) {
    if (DAT_0093fd28 != 0) {
      DAT_0093fd0c = 0;
      return;
    }
  }
  else {
    DAT_0093fd28 = FUN_00545610(FUN_00422aa0,FUN_00422bf0);
    if (DAT_0093fd28 != 0) {
      if (DAT_0093fd20 == 0) {
        DAT_0093fd0c = 0;
        return;
      }
      DAT_0093fd0c = 1;
      return;
    }
  }
  FUN_00422300();
  DAT_0093fd20 = 0;
  DAT_0093fd0c = 0;
  return;
}

