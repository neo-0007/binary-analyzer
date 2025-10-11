
int ossl_cipher_generic_cipher
              (long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
              ulong param_6)

{
  int iVar1;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      iVar1 = 0;
      ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x212,
                    "ossl_cipher_generic_cipher");
      ERR_set_error(0x39,0x6a,0);
    }
    else {
      iVar1 = (**(code **)(*(long *)(param_1 + 0xa8) + 8))(param_1,param_2,param_5,param_6);
      if (iVar1 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x217,
                      "ossl_cipher_generic_cipher");
        ERR_set_error(0x39,0x66,0);
        iVar1 = 0;
      }
      else {
        *param_3 = param_6;
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}

