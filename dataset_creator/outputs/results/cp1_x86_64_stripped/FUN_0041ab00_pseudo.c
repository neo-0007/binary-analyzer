
void FUN_0041ab00(void)

{
  long lVar1;
  
  if (DAT_0093b1d0 == -1) {
    return;
  }
  lVar1 = FUN_00422380(&DAT_0093b1d0);
  FUN_00422390(&DAT_0093b1d0,0);
  if (lVar1 != 0) {
    FUN_0041a7b0(0,lVar1);
  }
  FUN_0041a710(lVar1);
  FUN_0041ad60(lVar1,"../crypto/initthread.c",0xec);
  return;
}

