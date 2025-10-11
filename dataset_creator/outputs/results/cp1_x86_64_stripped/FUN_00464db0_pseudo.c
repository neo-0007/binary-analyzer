
bool FUN_00464db0(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((((iVar1 != 0) && (param_1 != (undefined8 *)0x0)) && (param_2 != 0)) &&
     (iVar1 = FUN_004d5ea0(param_2), iVar1 != 0)) {
    FUN_004d5b70(param_1[1]);
    param_1[1] = param_2;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    iVar1 = FUN_00464490(param_1,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_005b1f60(*param_1,param_2);
      return iVar1 != 0;
    }
  }
  return false;
}

