
undefined8 FUN_00445010(long param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if ((((iVar1 != 0) && ((*(byte *)(param_1 + 0x364) & 1) != 0)) &&
      (iVar1 = *(int *)(param_1 + 0x360), iVar1 != 3)) && (iVar1 != 0)) {
    if (iVar1 == 1) {
      iVar1 = FUN_00551ad0(param_1 + 0x2b0,param_1 + 0x94,*(undefined8 *)(param_1 + 0x20),
                           *(undefined8 *)(param_1 + 0x368));
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x360) = 2;
    }
    *param_3 = 0;
    if (*(long *)(param_1 + 0x370) != 0) {
      if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
        iVar1 = FUN_00552070();
      }
      else {
        iVar1 = FUN_00551e20(param_1 + 0x2b0,param_1 + 0x390,param_2);
      }
      if (iVar1 == 0) {
        return 0;
      }
      *param_3 = *(undefined8 *)(param_1 + 0x370);
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(long *)(param_1 + 0x378) != 0) {
      iVar1 = FUN_00551c70(param_1 + 0x2b0,param_1 + 0x3a0);
      if (iVar1 != 1) {
        return 0;
      }
      *(undefined8 *)(param_1 + 0x378) = 0;
    }
    if ((*(byte *)(param_1 + 0x3c) & 2) == 0) {
      if ((*(long *)(param_1 + 0x368) != 0) &&
         (iVar1 = FUN_005522d0(param_1 + 0x2b0,param_1 + 0x380), iVar1 == 0)) {
LAB_004450a9:
        *(undefined4 *)(param_1 + 0x360) = 3;
        return 1;
      }
    }
    else {
      iVar1 = FUN_005523a0(param_1 + 0x2b0,param_1 + 0x380);
      if (0 < iVar1) goto LAB_004450a9;
    }
  }
  return 0;
}

