
void FUN_006cd8c0(long param_1)

{
  if (*(code **)(param_1 + 8) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006cd8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))(1,param_1);
    return;
  }
  return;
}

