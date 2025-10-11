
undefined8 FUN_005c3bd0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 != 1) {
      if (*param_1 != 2) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x005c3bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(param_1 + 4))(param_2,param_3,param_1);
      return uVar1;
    }
    if (*(code **)(param_1 + 4) != (code *)0x0) {
      (**(code **)(param_1 + 4))(param_2,param_3,*(undefined8 *)(param_1 + 2));
      return 1;
    }
  }
  return 1;
}

