
void FUN_004342b0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long in_R9;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(in_R9 + 0x18) + 0x60);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004342c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00433d30();
  return;
}

