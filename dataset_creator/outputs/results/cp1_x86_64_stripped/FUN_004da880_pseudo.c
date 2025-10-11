
undefined8
FUN_004da880(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined4 *param_5,long param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_30;
  
  local_30 = param_4;
  if (*(long *)(param_6 + 0xb8) != 0) {
    lVar3 = *(long *)(param_6 + 0xa0);
    lVar2 = FUN_004d9830();
    if (lVar3 == lVar2) {
      lVar3 = FUN_004d9850(param_2,param_3,param_6);
      goto LAB_004da8cd;
    }
  }
  lVar3 = FUN_004da430(param_2,param_3,param_6);
LAB_004da8cd:
  if (lVar3 != 0) {
    uVar1 = FUN_004da640(lVar3,&local_30);
    *param_5 = uVar1;
    FUN_004da4d0(lVar3);
    return 1;
  }
  *param_5 = 0;
  return 0;
}

