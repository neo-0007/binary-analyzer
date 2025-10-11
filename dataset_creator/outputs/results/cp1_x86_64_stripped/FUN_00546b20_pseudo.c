
bool FUN_00546b20(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((((param_2 < 0) || ((param_2 < 0x1f && (iVar1 = FUN_00547790(), iVar1 != 0)))) &&
      (iVar1 = FUN_00547790(param_1), iVar1 != 0)) &&
     (((iVar1 = FUN_00547c30(param_1,param_3,param_4), iVar1 != 0 &&
       (iVar1 = FUN_00547aa0(param_1), iVar1 != 0)) &&
      (iVar1 = FUN_005477a0(param_1,4,1), iVar1 != 0)))) {
    iVar1 = FUN_00546870(param_1,param_2);
    return iVar1 != 0;
  }
  return false;
}

