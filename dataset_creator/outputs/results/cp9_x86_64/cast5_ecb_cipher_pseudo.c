
undefined8 cast5_ecb_cipher(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uchar *in;
  uchar *out;
  int enc;
  long lVar1;
  CAST_KEY *key;
  ulong uVar2;
  ulong uVar3;
  
  lVar1 = EVP_CIPHER_CTX_get0_cipher();
  uVar3 = (ulong)*(int *)(lVar1 + 4);
  if (uVar3 <= param_4) {
    uVar2 = 0;
    do {
      enc = EVP_CIPHER_CTX_is_encrypting(param_1);
      key = (CAST_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      out = (uchar *)(param_2 + uVar2);
      in = (uchar *)(param_3 + uVar2);
      uVar2 = uVar2 + uVar3;
      CAST_ecb_encrypt(in,out,key,enc);
    } while (uVar2 <= param_4 - uVar3);
  }
  return 1;
}

