
bool ec_to_type_specific_no_pub_pem_does_selection(undefined8 param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return true;
  }
  uVar1 = param_2 & 1;
  if (uVar1 == 0) {
    if ((param_2 & 2) == 0) {
      if ((param_2 & 0x84) == 0) {
        return false;
      }
      uVar1 = 0x84;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1 != 0;
}

