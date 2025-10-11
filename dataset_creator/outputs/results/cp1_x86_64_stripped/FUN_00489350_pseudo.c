
undefined8 FUN_00489350(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_4 >> 0x3e == 0) {
    if (param_4 != 0) {
      FUN_00488e90();
    }
    return 1;
  }
  uVar1 = 0x4000000000000000;
  do {
    uVar3 = param_4 - uVar1;
    lVar4 = param_3 + uVar1;
    lVar2 = param_2 + uVar1;
    FUN_00488e90(param_1,param_2,param_3,param_4);
    if (uVar3 < uVar1) {
      uVar1 = uVar3;
    }
    param_2 = lVar2;
    param_4 = uVar3;
    param_3 = lVar4;
  } while (uVar3 != 0);
  return 1;
}

