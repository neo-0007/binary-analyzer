
void _dl_find_object_freeres(void)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  plVar4 = _dlfo_loaded_mappings;
  if (_dlfo_loaded_mappings != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar4;
      free((void *)plVar4[1]);
      plVar4 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  _dlfo_loaded_mappings = (long *)0x0;
  puVar3 = DAT_0093dda8;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    free((void *)puVar3[1]);
    puVar3 = puVar2;
  }
  DAT_0093dda8 = (undefined8 *)0x0;
  return;
}

