
undefined8 FUN_005a2680(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_00436480();
  if ((param_2 < iVar1) && (-1 < param_2)) {
    uVar2 = FUN_004364a0(param_1,param_2);
    return uVar2;
  }
  return 0;
}

