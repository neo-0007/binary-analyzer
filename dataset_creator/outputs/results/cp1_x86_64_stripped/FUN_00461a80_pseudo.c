
undefined4
FUN_00461a80(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,long param_5,
            undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = FUN_0040ec60();
  if (((lVar3 != 0) && (iVar1 = (*param_4)(lVar3,param_2), iVar1 != 0)) &&
     ((param_5 == 0 || (iVar1 = FUN_00549540(param_1 + 2,param_5,param_6), iVar1 != 0)))) {
    uVar4 = FUN_00485290(*param_1);
    lVar5 = FUN_0043bf50(*param_1,param_3);
    if (lVar5 != 0) {
      uVar2 = FUN_0055b840(lVar5,lVar3,*(undefined4 *)(param_1 + 1),&LAB_00549d80,param_1 + 2,uVar4,
                           0);
      FUN_004ab560(lVar5);
      goto LAB_00461ae3;
    }
  }
  uVar2 = 0;
LAB_00461ae3:
  FUN_0040f4f0(lVar3);
  return uVar2;
}

