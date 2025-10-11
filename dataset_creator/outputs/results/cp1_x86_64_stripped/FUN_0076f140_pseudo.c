
void FUN_0076f140(long param_1,code *UNRECOVERED_JUMPTABLE,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) != 0) ||
     (uVar1 = 3, *(long *)(param_1 + 0x10) != 0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1,0);
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (uVar2 != 0) {
      FUN_0076f140(uVar2,UNRECOVERED_JUMPTABLE,(int)param_3 + 1);
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,1,param_3 & 0xffffffff);
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_0076f140(*(long *)(param_1 + 0x10),UNRECOVERED_JUMPTABLE,(int)param_3 + 1);
    }
    param_3 = param_3 & 0xffffffff;
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x0076f1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,param_3);
  return;
}

