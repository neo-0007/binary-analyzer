
void FUN_006323c0(long *param_1)

{
  long *plVar1;
  int iVar2;
  
  if (DAT_0093ea10 == '\0') {
    LOCK();
    plVar1 = param_1 + 1;
    iVar2 = (int)*plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + -1;
  }
  if (iVar2 != 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006323e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}

