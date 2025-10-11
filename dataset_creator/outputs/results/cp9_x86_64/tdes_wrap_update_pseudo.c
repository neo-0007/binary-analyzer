
undefined4
tdes_wrap_update(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4,
                undefined8 param_5,ulong param_6)

{
  int iVar1;
  
  *param_3 = 0;
  if (param_6 != 0) {
    if (param_4 < param_6) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_tdes_wrap.c",0x9f,
                    "tdes_wrap_update");
      ERR_set_error(0x39,0x6a,0);
      return 0;
    }
    iVar1 = tdes_wrap_cipher();
    if (iVar1 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/ciphers/cipher_tdes_wrap.c",0xa4,
                    "tdes_wrap_update");
      ERR_set_error(0x39,0x66,0);
      return 0;
    }
  }
  return 1;
}

