
void FUN_0078d220(uint param_1,undefined8 *param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if (((uint)(&DAT_00939ed0)[uVar1 * 0x1c] < 3) && ((&DAT_00939ed0)[uVar1 * 0x1c] == 0)) {
    *(int *)param_2 = (int)(&DAT_00939ee8)[uVar1 * 0xe];
  }
  else {
    *param_2 = (&DAT_00939ee8)[uVar1 * 0xe];
  }
  if (((&DAT_00939ef0)[uVar1 * 0x70] != '\0') && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0078d274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&DAT_00939ee8 + uVar1 * 0xe);
    return;
  }
  return;
}

