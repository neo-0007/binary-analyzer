
void trecurse_r(long param_1,code *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) != 0) ||
     (uVar1 = 3, *(long *)(param_1 + 0x10) != 0)) {
    (*UNRECOVERED_JUMPTABLE)(param_1,0);
    uVar2 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    if (uVar2 != 0) {
      trecurse_r(uVar2,UNRECOVERED_JUMPTABLE,param_3);
    }
    (*UNRECOVERED_JUMPTABLE)(param_1,1,param_3);
    if (*(long *)(param_1 + 0x10) != 0) {
      trecurse_r(*(long *)(param_1 + 0x10),UNRECOVERED_JUMPTABLE,param_3);
    }
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00765830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar1,param_3);
  return;
}

