
int padlock_cbc_cipher(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  iVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar1 = puVar4[1];
  puVar5 = (undefined8 *)((ulong)(-iVar2 & 0xf) + lVar3);
  *puVar5 = *puVar4;
  puVar5[1] = uVar1;
  iVar2 = padlock_cbc_encrypt(param_2,param_3,puVar5,param_4);
  if (iVar2 != 0) {
    puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar1 = puVar5[1];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
  }
  return iVar2;
}

