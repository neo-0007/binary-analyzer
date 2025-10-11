
void FUN_007ccef0(void)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = DAT_0094aa58;
  if (DAT_0094aa58 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar2;
      DAT_0094aa58 = plVar1;
      FUN_007104f0(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  FUN_007104f0(DAT_0094aa50);
  DAT_0094aa50 = 0;
  return;
}

