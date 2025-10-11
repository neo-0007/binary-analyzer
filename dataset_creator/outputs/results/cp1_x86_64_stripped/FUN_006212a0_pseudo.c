
undefined4 FUN_006212a0(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = FUN_005ae880(param_2);
  uVar2 = 0;
  if (lVar3 != 0) {
    iVar1 = FUN_00620c10(param_1[10],param_1[0xb],param_2,param_1 + 1,param_1 + 2);
    if (iVar1 == 0) {
      FUN_0040f4f0(lVar3);
      return 0;
    }
    FUN_0040f4f0(*param_1);
    *param_1 = lVar3;
    uVar2 = 1;
  }
  return uVar2;
}

