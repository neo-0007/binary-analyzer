
int chacha20_poly1305_dinit
              (long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5,
              undefined8 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ossl_cipher_generic_dinit();
  if (iVar1 != 0) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        return 0;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(param_1);
    }
    iVar2 = chacha20_poly1305_set_ctx_params(param_1,param_6);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}

