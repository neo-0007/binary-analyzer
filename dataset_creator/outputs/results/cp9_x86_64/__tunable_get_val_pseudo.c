
void __tunable_get_val(uint param_1,undefined8 *param_2,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  
  lVar1 = (ulong)param_1 * 0x70;
  if ((*(uint *)(&DAT_0092ced0 + lVar1) < 3) && (*(uint *)(&DAT_0092ced0 + lVar1) == 0)) {
    *(int *)param_2 = (int)*(undefined8 *)(&DAT_0092cee8 + lVar1);
  }
  else {
    *param_2 = *(undefined8 *)(&DAT_0092cee8 + lVar1);
  }
  lVar1 = (ulong)param_1 * 0x70;
  if (((&DAT_0092cef0)[lVar1] != '\0') && (UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00783944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(&DAT_0092cee8 + lVar1);
    return;
  }
  return;
}

