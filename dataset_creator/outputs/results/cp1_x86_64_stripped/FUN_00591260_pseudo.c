
undefined8 FUN_00591260(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00590fd0(param_2,param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005902f0(param_1,lVar1);
  }
  FUN_004b7fa0(lVar1);
  return uVar2;
}

