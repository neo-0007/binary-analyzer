
void FUN_0053e900(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x80) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0053e914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x88))(param_2);
    return;
  }
  return;
}

