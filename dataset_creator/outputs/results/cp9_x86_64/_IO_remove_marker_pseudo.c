
void _IO_remove_marker(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1[1] + 0x60);
  if (plVar1 == (long *)0x0) {
    return;
  }
  if (param_1 == plVar1) {
    plVar2 = (long *)(param_1[1] + 0x60);
  }
  else {
    do {
      plVar2 = plVar1;
      plVar1 = (long *)*plVar2;
      if (plVar1 == (long *)0x0) {
        return;
      }
    } while (param_1 != plVar1);
  }
  *plVar2 = *param_1;
  return;
}

