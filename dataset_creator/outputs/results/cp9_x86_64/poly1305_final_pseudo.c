
undefined8 poly1305_final(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = ossl_prov_is_running();
  if ((int)uVar1 != 0) {
    Poly1305_Final(param_1 + 8,param_2);
    *param_3 = 0x10;
    uVar1 = 1;
  }
  return uVar1;
}

