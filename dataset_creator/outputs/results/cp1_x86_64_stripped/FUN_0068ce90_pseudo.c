
long * FUN_0068ce90(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
  if (plVar1 != (long *)0x0) {
                    /* try { // try from 0068ceb0 to 0068ceb2 has its CatchHandler @ 0068cedc */
    iVar2 = (**(code **)(*plVar1 + 0x30))();
    if (iVar2 == -1) {
      lVar3 = *(long *)(*param_1 + -0x18) + (long)param_1;
      FUN_0066ec40(lVar3,*(uint *)(lVar3 + 0x20) | 1);
      return param_1;
    }
  }
  return param_1;
}

