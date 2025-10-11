
undefined8 WPACKET_close(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(long **)(param_1 + 0x28);
  if ((plVar1 != (long *)0x0) && (*plVar1 != 0)) {
    uVar2 = wpacket_intern_close(param_1,plVar1,1);
    return uVar2;
  }
  return 0;
}

