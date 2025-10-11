
undefined4 FUN_005c4ed0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = 0;
  uVar2 = FUN_004b0b80();
  lVar3 = FUN_004ab550(uVar2);
  if (lVar3 != 0) {
    FUN_004abd40(lVar3,0x6a,0,param_1);
    uVar1 = FUN_005c4dd0(lVar3,param_2);
    FUN_004ab560(lVar3);
  }
  return uVar1;
}

