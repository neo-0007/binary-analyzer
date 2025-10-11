
undefined4 ecx_spki_pub_to_der(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    lVar2 = CRYPTO_memdup(param_1 + 0x11,*(undefined8 *)(param_1 + 0x58),
                          "../providers/implementations/encode_decode/encode_key2any.c",0x2fc);
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x2fe,
                    "ecx_spki_pub_to_der");
      ERR_set_error(0x39,0xc0100,0);
      uVar1 = 0;
    }
    else {
      *param_2 = lVar2;
      uVar1 = *(undefined4 *)(param_1 + 0x58);
    }
    return uVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/encode_decode/encode_key2any.c",0x2f8,
                "ecx_spki_pub_to_der");
  ERR_set_error(0x39,0xc0102,0);
  return 0;
}

