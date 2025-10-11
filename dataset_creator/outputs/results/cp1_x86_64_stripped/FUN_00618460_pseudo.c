
long FUN_00618460(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = FUN_00618450();
  lVar2 = FUN_004ab550(uVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_004abd40(lVar2,100,0,param_1);
    if (lVar3 == 0) {
      FUN_004ab560(lVar2);
      return 0;
    }
  }
  return lVar2;
}

