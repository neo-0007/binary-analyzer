
undefined8 ec_import_types(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 7;
  if ((param_1 & 0x80) != 0) {
    uVar1 = (param_1 & 7) + 8;
  }
  return *(undefined8 *)(ec_types + (long)(int)uVar1 * 8);
}

