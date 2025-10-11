
long * __cxa_current_exception_type(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)__cxa_get_globals();
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(plVar2 + 10) & 1) != 0) {
      plVar2 = (long *)(*plVar2 + -0x70);
    }
    plVar2 = (long *)*plVar2;
  }
  return plVar2;
}

