
void FUN_006a4620(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_006e2770(*param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x006a4654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  return;
}

