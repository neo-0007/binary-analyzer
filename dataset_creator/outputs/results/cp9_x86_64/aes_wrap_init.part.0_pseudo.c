
undefined8
aes_wrap_init_part_0
          (undefined8 *param_1,uchar *param_2,long param_3,long param_4,undefined8 param_5,
          undefined8 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  *(byte *)((long)param_1 + 0x3c) = bVar1 & 0xfd | ((byte)param_7 & 1) * '\x02';
  if ((bVar1 & 1) == 0) {
    if (param_7 == 0) {
      pcVar3 = CRYPTO_128_unwrap;
    }
    else {
      pcVar3 = CRYPTO_128_wrap;
    }
  }
  else if (param_7 == 0) {
    pcVar3 = CRYPTO_128_unwrap_pad;
  }
  else {
    pcVar3 = CRYPTO_128_wrap_pad;
  }
  param_1[0x37] = pcVar3;
  if ((param_4 != 0) && (iVar2 = ossl_cipher_generic_initiv(param_1,param_4,param_5), iVar2 == 0)) {
    return 0;
  }
  if (param_2 == (uchar *)0x0) goto LAB_0044427e;
  if (param_1[3] != param_3) {
    ERR_new();
    ERR_set_debug("../providers/implementations/ciphers/cipher_aes_wrp.c",0x65,"aes_wrap_init");
    ERR_set_error(0x39,0x69,0);
    return 0;
  }
  bVar1 = *(byte *)((long)param_1 + 0x3c);
  if ((bVar1 & 0x20) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_004442ac:
      AES_set_encrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0x18));
      *param_1 = AES_encrypt;
      goto LAB_0044427e;
    }
  }
  else if ((bVar1 & 2) == 0) goto LAB_004442ac;
  AES_set_decrypt_key(param_2,(int)param_3 * 8,(AES_KEY *)(param_1 + 0x18));
  *param_1 = AES_decrypt;
LAB_0044427e:
  uVar4 = aes_wrap_set_ctx_params(param_1,param_6);
  return uVar4;
}

