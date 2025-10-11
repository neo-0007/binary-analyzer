
undefined8 blake2_mac_update(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    return 1;
  }
  uVar1 = ossl_blake2s_update();
  return uVar1;
}

