
undefined8 aes_ocb_ctrl(undefined8 *param_1,undefined4 param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  switch(param_2) {
  case 0:
    *(undefined8 *)(lVar3 + 0x1f0) = 0;
    uVar1 = EVP_CIPHER_get_iv_length(*param_1);
    *(undefined8 **)(lVar3 + 0x2a8) = param_1 + 5;
    *(undefined4 *)(lVar3 + 0x2e8) = uVar1;
    *(undefined4 *)(lVar3 + 0x2ec) = 0x10;
    *(undefined8 *)(lVar3 + 0x2e0) = 0;
    return 1;
  default:
    uVar4 = 0xffffffff;
    break;
  case 8:
    lVar5 = EVP_CIPHER_CTX_get_cipher_data(param_4);
    uVar4 = CRYPTO_ocb128_copy_ctx(lVar5 + 0x1f8,lVar3 + 0x1f8,lVar5,lVar5 + 0xf8);
    return uVar4;
  case 9:
    if (0xe < param_3 - 1) {
      return 0;
    }
    *(uint *)(lVar3 + 0x2e8) = param_3;
    uVar4 = 1;
    break;
  case 0x10:
    if (*(uint *)(lVar3 + 0x2ec) != param_3) {
      return 0;
    }
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    memcpy(param_4,(void *)(lVar3 + 0x2b0),(long)(int)param_3);
    uVar4 = 1;
    break;
  case 0x11:
    if (param_4 == (undefined4 *)0x0) {
      if (0x10 < param_3) {
        return 0;
      }
      *(uint *)(lVar3 + 0x2ec) = param_3;
      uVar4 = 1;
    }
    else {
      if (*(uint *)(lVar3 + 0x2ec) != param_3) {
        return 0;
      }
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar2 != 0) {
        return 0;
      }
      memcpy((void *)(lVar3 + 0x2b0),param_4,(long)(int)param_3);
      uVar4 = 1;
    }
    break;
  case 0x25:
    *param_4 = *(undefined4 *)(lVar3 + 0x2e8);
    return 1;
  }
  return uVar4;
}

