
long FUN_006c3f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  long lVar3;
  
  do {
    uVar1 = FUN_006c3ea0(param_1);
    lVar3 = FUN_0076d9c0(uVar1,param_2,param_3);
    if (lVar3 != -1) {
      return lVar3;
    }
    piVar2 = (int *)FUN_006d2700();
  } while (*piVar2 == 4);
  return -1;
}

