
long FUN_004b0cd0(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004b0b80();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 != 0) {
    FUN_004ab6e0(lVar2,0);
    FUN_004abd40(lVar2,0x6a,(long)param_2,param_1);
  }
  return lVar2;
}

