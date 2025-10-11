
undefined8 dh_export_types(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((param_1 & 0x84) != 0);
  if ((param_1 & 3) != 0) {
    uVar1 = uVar1 + 2;
  }
  return *(undefined8 *)(dh_types + (long)(int)uVar1 * 8);
}

