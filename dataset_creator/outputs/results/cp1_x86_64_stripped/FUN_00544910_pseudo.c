
undefined8
FUN_00544910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,uint *param_7)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004b75a0();
  iVar1 = FUN_004b7840(param_5,uVar2);
  if ((0 < iVar1) && (iVar1 = FUN_004b7840(param_5,param_3), iVar1 < 0)) {
    uVar2 = FUN_004b4eb0(param_6,param_5,param_4,param_3,param_1,param_2);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar2 = FUN_004b75a0();
    iVar1 = FUN_004b7840(param_6,uVar2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  *param_7 = *param_7 | 8;
  return 0;
}

