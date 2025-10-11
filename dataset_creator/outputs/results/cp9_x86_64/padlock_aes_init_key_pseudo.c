
undefined8 padlock_aes_init_key(undefined8 param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  int bits;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  
  bVar12 = 0;
  iVar1 = EVP_CIPHER_CTX_get_key_length();
  uVar5 = EVP_CIPHER_CTX_get0_cipher(param_1);
  iVar2 = EVP_CIPHER_get_mode(uVar5);
  uVar5 = 0;
  if (param_2 != (uchar *)0x0) {
    lVar6 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    iVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar11 = (undefined8 *)(lVar6 + (ulong)(-iVar3 & 0xf));
    *puVar11 = 0;
    *(undefined8 *)((long)puVar11 + 0x10c) = 0;
    puVar10 = (undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8);
    for (uVar8 = (ulong)(((int)puVar11 -
                         (int)(undefined8 *)((ulong)(puVar11 + 1) & 0xfffffffffffffff8)) + 0x114U >>
                        3); uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + (ulong)bVar12 * -2 + 1;
    }
    if (1 < (long)iVar2 - 4U) {
      iVar3 = EVP_CIPHER_CTX_is_encrypting(param_1);
      *(byte *)((long)puVar11 + 0x11) =
           *(byte *)((long)puVar11 + 0x11) & 0xfd | (iVar3 == 0) * '\x02';
    }
    bits = iVar1 * 8;
    iVar7 = bits + -0x80;
    iVar3 = bits + -0x41;
    if (-1 < iVar7) {
      iVar3 = iVar7;
    }
    iVar4 = bits + -0x61;
    if (-1 < iVar7) {
      iVar4 = iVar7;
    }
    *(ushort *)(puVar11 + 2) =
         (ushort)((iVar3 >> 6 & 3U) << 10) | (short)(iVar4 >> 5) + 10U & 0xf |
         *(ushort *)(puVar11 + 2) & 0xf3f0;
    if ((bits - 0xc0U & 0xffffffb8) == 0) {
      if (((long)iVar2 - 1U < 2) && (param_4 == 0)) {
        AES_set_decrypt_key(param_2,bits,(AES_KEY *)(puVar11 + 4));
      }
      else {
        AES_set_encrypt_key(param_2,bits,(AES_KEY *)(puVar11 + 4));
      }
      cVar9 = '\x01';
    }
    else {
      if (iVar1 != 0x10) {
        return 0;
      }
      uVar5 = *(undefined8 *)(param_2 + 8);
      cVar9 = '\0';
      puVar11[4] = *(undefined8 *)param_2;
      puVar11[5] = uVar5;
    }
    *(byte *)(puVar11 + 2) = *(byte *)(puVar11 + 2) & 0x7f | cVar9 << 7;
    padlock_reload_key();
    uVar5 = 1;
  }
  return uVar5;
}

