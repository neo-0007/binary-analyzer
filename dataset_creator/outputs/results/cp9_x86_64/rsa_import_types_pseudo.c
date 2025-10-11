
undefined1 * rsa_import_types(uint param_1)

{
  undefined1 *puVar1;
  
  puVar1 = rsa_key_types;
  if ((param_1 & 3) == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}

