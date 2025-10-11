
long FUN_0046f340(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar1 = FUN_0043b840();
  if (iVar1 != 0) {
    uVar2 = FUN_00485290(param_1);
    lVar3 = FUN_004d5e90(uVar2);
    if (lVar3 != 0) {
      FUN_004d6100(lVar3,0xf000);
      FUN_004d6120(lVar3,0);
    }
  }
  return lVar3;
}

