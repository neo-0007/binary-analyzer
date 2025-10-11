
long FUN_006c2e40(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  
  plVar4 = (long *)FUN_006c2fb0();
  plVar1 = param_1 + -10;
  plVar2 = (long *)*plVar4;
  if (*param_1 + 0xb8b1aabcbcd4d500U < 2) {
    iVar3 = (int)param_1[-5];
    if (iVar3 < 0) {
      iVar3 = -iVar3;
    }
    *(int *)(param_1 + -5) = iVar3 + 1;
    *(int *)(plVar4 + 1) = (int)plVar4[1] + -1;
    if (plVar2 != plVar1) {
      param_1[-6] = (long)plVar2;
      *plVar4 = (long)plVar1;
    }
    return param_1[-1];
  }
  if (plVar2 == (long *)0x0) {
    *plVar4 = (long)plVar1;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00623f30();
}

