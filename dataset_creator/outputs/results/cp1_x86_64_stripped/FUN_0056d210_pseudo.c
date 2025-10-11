
bool FUN_0056d210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_004b75a0();
  iVar1 = FUN_004b18d0(param_6,param_2,uVar2);
  if (iVar1 != 0) {
    uVar2 = FUN_004b75a0();
    iVar1 = FUN_004b18d0(param_7,param_3,uVar2);
    if (((iVar1 != 0) && (iVar1 = FUN_004bacf0(param_8,param_6,param_7,param_1), iVar1 != 0)) &&
       (iVar1 = FUN_004b6d50(param_5,param_6,param_7,param_1), iVar1 != 0)) {
      iVar1 = FUN_004b34a0(param_4,0,param_8,param_5,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

