
undefined8 aes_xts_ctrl(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 8) {
    lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    if (*(long *)(lVar1 + 0x1f0) != 0) {
      if (*(long *)(lVar1 + 0x1f0) != lVar1) {
        return 0;
      }
      *(long *)(lVar3 + 0x1f0) = lVar3;
    }
    if (*(long *)(lVar1 + 0x1f8) == 0) {
      uVar2 = 1;
    }
    else {
      if (*(long *)(lVar1 + 0x1f8) != lVar1 + 0xf8) {
        return 0;
      }
      *(long *)(lVar3 + 0x1f8) = lVar3 + 0xf8;
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
    if (param_2 == 0) {
      *(undefined8 *)(lVar1 + 0x1f0) = 0;
      uVar2 = 1;
      *(undefined8 *)(lVar1 + 0x1f8) = 0;
    }
  }
  return uVar2;
}

