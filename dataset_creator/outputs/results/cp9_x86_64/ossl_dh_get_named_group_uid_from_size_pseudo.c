
undefined8 ossl_dh_get_named_group_uid_from_size(int param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0x1000) {
    uVar1 = 0x468;
  }
  else if (param_1 < 0x1001) {
    uVar1 = 0x466;
    if (param_1 != 0x800) {
      uVar1 = 0;
      if (param_1 == 0xc00) {
        uVar1 = 0x467;
      }
      return uVar1;
    }
  }
  else {
    uVar1 = 0x469;
    if (param_1 != 0x1800) {
      uVar1 = 0;
      if (param_1 == 0x2000) {
        uVar1 = 0x46a;
      }
      return uVar1;
    }
  }
  return uVar1;
}

