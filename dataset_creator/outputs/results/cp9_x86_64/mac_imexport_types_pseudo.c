
undefined1 * mac_imexport_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = mac_key_types;
  if ((param_1 & 1) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}

