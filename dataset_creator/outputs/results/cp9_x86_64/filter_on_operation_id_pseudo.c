
void filter_on_operation_id(byte param_1,undefined8 param_2,uint *param_3)

{
  if ((uint)param_1 != *param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0040d10b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 2))(param_2,*(undefined8 *)(param_3 + 4));
  return;
}

