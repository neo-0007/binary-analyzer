
undefined4
FUN_005b92c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_00406bd0(param_6,param_5,param_7,param_8);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_005b8dc0(param_1,param_2,param_3,param_4,lVar2);
    uVar3 = FUN_0040b080(lVar2);
    FUN_00412f00(uVar3);
    FUN_00406b90(lVar2);
  }
  return uVar1;
}

