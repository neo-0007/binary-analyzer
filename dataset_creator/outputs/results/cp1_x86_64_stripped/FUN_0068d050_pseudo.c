
long * FUN_0068d050(long *param_1)

{
  long lVar1;
  
  if ((*(byte *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) & 5) == 0) {
                    /* try { // try from 0068d078 to 0068d07a has its CatchHandler @ 0068d0ac */
    lVar1 = (**(code **)(**(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8) + 0x28))();
    if (lVar1 == -1) {
      lVar1 = *(long *)(*param_1 + -0x18) + (long)param_1;
      FUN_0066ec40(lVar1,*(uint *)(lVar1 + 0x20) | 4);
      return param_1;
    }
  }
  return param_1;
}

