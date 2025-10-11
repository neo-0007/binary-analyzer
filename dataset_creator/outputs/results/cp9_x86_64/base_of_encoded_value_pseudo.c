
undefined8 base_of_encoded_value(byte param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (param_1 != 0xff) {
    bVar2 = param_1 & 0x70;
    if (bVar2 == 0x30) {
      uVar1 = _Unwind_GetDataRelBase(param_2);
      return uVar1;
    }
    if (bVar2 < 0x31) {
      if (bVar2 == 0x20) {
        uVar1 = _Unwind_GetTextRelBase();
        return uVar1;
      }
      if ((0x20 < bVar2) || ((param_1 & 0x60) != 0)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    else {
      if (bVar2 == 0x40) {
        uVar1 = _Unwind_GetRegionStart();
        return uVar1;
      }
      if (bVar2 != 0x50) {
        uVar1 = base_of_encoded_value_cold();
        return uVar1;
      }
    }
  }
  return 0;
}

