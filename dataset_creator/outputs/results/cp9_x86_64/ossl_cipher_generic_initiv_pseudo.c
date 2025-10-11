
undefined8 ossl_cipher_generic_initiv(long param_1,void *param_2,size_t param_3)

{
  if ((*(size_t *)(param_1 + 0x20) == param_3) && (param_3 < 0x11)) {
    *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | 4;
    memcpy((void *)(param_1 + 0x94),param_2,param_3);
    memcpy((void *)(param_1 + 0x74),param_2,param_3);
    return 1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/ciphers/ciphercommon.c",0x28b,
                "ossl_cipher_generic_initiv");
  ERR_set_error(0x39,0x6d,0);
  return 0;
}

