
long FUN_00474d60(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  uVar2 = FUN_00485290();
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    lVar3 = FUN_0042bce0(uVar2);
    if (lVar3 != 0) {
      FUN_0042c5d0(lVar3,0xf000);
      FUN_0042c5f0(lVar3,0x1000);
    }
  }
  return lVar3;
}

