
void FUN_007cd8a0(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = DAT_0094b590;
  if (DAT_0094b590 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      FUN_007104f0(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  DAT_0094b590 = (long *)0x0;
  return;
}

