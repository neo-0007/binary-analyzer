
undefined4 FUN_00619070(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  
  if (*param_3 == 0) {
    FUN_004b7b50();
    return 1;
  }
  FUN_004b2c00(param_4);
  lVar3 = FUN_004b2df0(param_4);
  if (lVar3 != 0) {
    iVar1 = FUN_004b8360(lVar3,*param_3 + -1);
    if (iVar1 != 0) {
      uVar2 = FUN_00618f10(param_1,param_2,lVar3,param_3,param_4);
      goto LAB_006190d1;
    }
  }
  uVar2 = 0;
LAB_006190d1:
  FUN_004b2d50(param_4);
  return uVar2;
}

