
undefined8 aes_siv_initkey(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_3 = param_3 >> 1;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x60));
  EVP_CIPHER_free(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (param_3 == 0x18) {
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-192-CBC",0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-192-CTR",0);
    lVar3 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
  }
  else if (param_3 == 0x20) {
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-256-CBC",0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-256-CTR",0);
    lVar3 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
  }
  else {
    if (param_3 != 0x10) {
      return 0;
    }
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-128-CBC",0);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    uVar2 = EVP_CIPHER_fetch(uVar1,"AES-128-CTR",0);
    lVar3 = *(long *)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar2;
  }
  if ((lVar3 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    uVar1 = ossl_siv128_init(param_1 + 0x18,param_2,param_3 & 0xffffffff,lVar3,
                             *(long *)(param_1 + 0x58),uVar1,0);
    return uVar1;
  }
  return 0;
}

