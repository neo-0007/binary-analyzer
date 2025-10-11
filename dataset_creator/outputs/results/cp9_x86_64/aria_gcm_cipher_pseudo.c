
ulong aria_gcm_cipher(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *a;
  undefined8 uVar4;
  ulong uVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar3 + 0x118) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar3 + 0x2ec) < 0) {
    if (*(int *)(lVar3 + 0x11c) == 0) {
      return 0xffffffff;
    }
    if (param_3 != (void *)0x0) {
      if (param_2 == (void *)0x0) {
        iVar2 = CRYPTO_gcm128_aad(lVar3 + 0x120,param_3,param_4);
      }
      else {
        iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
        if (iVar2 == 0) {
          iVar2 = CRYPTO_gcm128_decrypt(lVar3 + 0x120,param_3,param_2,param_4);
        }
        else {
          iVar2 = CRYPTO_gcm128_encrypt();
        }
      }
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar2 != 0) {
      uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_gcm128_tag(lVar3 + 0x120,uVar4,0x10);
      *(undefined4 *)(lVar3 + 0x2e4) = 0x10;
      *(undefined4 *)(lVar3 + 0x11c) = 0;
      return 0;
    }
    iVar2 = *(int *)(lVar3 + 0x2e4);
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
    uVar5 = CRYPTO_gcm128_finish(lVar3 + 0x120,uVar4,(long)iVar2);
    if ((int)uVar5 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(lVar3 + 0x11c) = 0;
    return uVar5;
  }
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (param_3 != param_2) {
    return 0xffffffff;
  }
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
  iVar2 = EVP_CIPHER_CTX_ctrl(param_1,(-(uint)(iVar2 == 0) & 5) + 0x13,8,param_2);
  if (0 < iVar2) {
    iVar2 = *(int *)(lVar3 + 0x2ec);
    lVar1 = lVar3 + 0x120;
    uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar2 = CRYPTO_gcm128_aad(lVar1,uVar4,(long)iVar2);
    if (iVar2 == 0) {
      param_2 = (void *)((long)param_2 + 8);
      param_4 = param_4 - 0x18;
      iVar2 = EVP_CIPHER_CTX_is_encrypting(param_1);
      if (iVar2 == 0) {
        iVar2 = CRYPTO_gcm128_decrypt();
        if (iVar2 == 0) {
          uVar4 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_gcm128_tag(lVar1,uVar4,0x10);
          a = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
          iVar2 = CRYPTO_memcmp(a,(void *)((long)param_3 + 8 + param_4),0x10);
          uVar5 = param_4 & 0xffffffff;
          if (iVar2 == 0) goto LAB_0051f10d;
          OPENSSL_cleanse(param_2,param_4);
        }
      }
      else {
        iVar2 = CRYPTO_gcm128_encrypt(lVar1,(long)param_3 + 8,param_2,param_4);
        if (iVar2 == 0) {
          CRYPTO_gcm128_tag(lVar1,(long)param_2 + param_4,0x10);
          uVar5 = (ulong)((int)param_4 + 0x18);
          goto LAB_0051f10d;
        }
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_0051f10d:
  *(undefined4 *)(lVar3 + 0x11c) = 0;
  *(undefined4 *)(lVar3 + 0x2ec) = 0xffffffff;
  return uVar5;
}

