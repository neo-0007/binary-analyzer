
undefined8 keccak_init(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  ossl_sha3_reset(param_1);
  return 1;
}

