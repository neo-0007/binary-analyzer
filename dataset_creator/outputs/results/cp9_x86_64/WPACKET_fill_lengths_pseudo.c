
undefined8 WPACKET_fill_lengths(long param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    while (iVar1 = wpacket_intern_close(param_1,plVar2,0), iVar1 != 0) {
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
        return 1;
      }
    }
  }
  return 0;
}

