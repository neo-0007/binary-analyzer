
int __sched_cpucount(size_t __setsize,cpu_set_t *__setp)

{
  __cpu_mask *p_Var1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  if (__setsize >> 3 != 0) {
    p_Var1 = __setp->__bits;
    iVar4 = 0;
    do {
      uVar2 = __setp->__bits[0];
      if (uVar2 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          uVar2 = uVar2 & uVar2 - 1;
        } while (uVar2 != 0);
        iVar4 = iVar4 + iVar3;
      }
      __setp = (cpu_set_t *)((long)__setp + 8);
    } while ((cpu_set_t *)(p_Var1 + (__setsize >> 3)) != __setp);
    return iVar4;
  }
  return 0;
}

