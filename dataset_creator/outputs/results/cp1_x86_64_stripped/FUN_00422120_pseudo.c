
void FUN_00422120(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == (undefined8 *)0x0) {
    return;
  }
  if (param_1[3] != 0) {
    param_1[1] = param_2;
    *param_1 = "Start";
    param_1[2] = param_3;
    FUN_00421ef0();
                    /* WARNING: Could not recover jumptable at 0x0042215b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_1[3])(param_1 + 4,param_1[0x18]);
    return;
  }
  return;
}

