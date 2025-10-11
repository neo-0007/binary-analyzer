
long * FUN_0059bc30(long param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = FUN_0059b9e0(param_1,0xffffffff,0);
  plVar2 = (long *)0x0;
  if ((iVar1 == 1) && (plVar2 = *(long **)(param_1 + 0x100), plVar2 != (long *)0x0)) {
    plVar2 = (long *)*plVar2;
  }
  return plVar2;
}

