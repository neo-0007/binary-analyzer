
long * FUN_006c2fd0(void)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)FUN_006c2fb0();
  plVar2 = (long *)*puVar1;
  if (plVar2 != (long *)0x0) {
    if ((*(byte *)(plVar2 + 10) & 1) != 0) {
      plVar2 = (long *)(*plVar2 + -0x70);
    }
    plVar2 = (long *)*plVar2;
  }
  return plVar2;
}

