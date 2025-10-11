
ulong FUN_0040dee0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong uVar2;
  
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x60) != 0) {
      iVar1 = FUN_0053d9d0(param_1,4);
      return (ulong)(iVar1 == 0);
    }
    if ((*(long *)(param_1 + 8) != 0) &&
       (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 8) + 0x80),
       UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0040df05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  return 0;
}

