
undefined8 padlock_cfb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  uVar4 = EVP_CIPHER_CTX_get_num(param_1);
  uVar11 = (ulong)(int)uVar4;
  pbVar13 = param_2;
  if (uVar11 != 0) {
    lVar9 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar11) {
      return 0;
    }
    iVar5 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar5 == 0) {
      if (param_4 == 0) {
LAB_00438a30:
        EVP_CIPHER_CTX_set_num(param_1,uVar4 & 0xf);
        return 1;
      }
      do {
        pbVar1 = (byte *)(lVar9 + uVar11);
        bVar10 = *param_3;
        pbVar13 = param_2 + 1;
        uVar11 = uVar11 + 1;
        param_3 = param_3 + 1;
        param_4 = param_4 - 1;
        *param_2 = *pbVar1 ^ bVar10;
        *(byte *)(lVar9 + -1 + uVar11) = bVar10;
        if (0xf < uVar11) break;
        param_2 = pbVar13;
      } while (param_4 != 0);
    }
    else {
      if (param_4 == 0) goto LAB_00438a30;
      do {
        pbVar13 = param_2 + 1;
        bVar10 = *param_3 ^ *(byte *)(lVar9 + uVar11);
        param_3 = param_3 + 1;
        *param_2 = bVar10;
        param_4 = param_4 - 1;
        *(byte *)(lVar9 + uVar11) = bVar10;
        uVar11 = uVar11 + 1;
        if (0xf < uVar11) break;
        param_2 = pbVar13;
      } while (param_4 != 0);
    }
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar11 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar12 = (undefined8 *)((ulong)(-iVar3 & 0xf) + lVar6);
  puVar7 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar2 = puVar7[1];
  *puVar12 = *puVar7;
  puVar12[1] = uVar2;
  uVar11 = param_4 & 0xfffffffffffffff0;
  if (uVar11 != 0) {
    iVar3 = padlock_cfb_encrypt(pbVar13,param_3,puVar12,uVar11);
    if (iVar3 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar11;
    if (param_4 == 0) goto LAB_004388bd;
  }
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  if ((*(byte *)((long)puVar12 + 0x11) & 2) == 0) {
    padlock_reload_key();
    padlock_aes_block(puVar12,puVar12,puVar12);
    padlock_reload_key();
    uVar8 = 0;
    do {
      bVar10 = param_3[uVar8 + uVar11] ^ *(byte *)((long)puVar12 + uVar8);
      pbVar13[uVar8 + uVar11] = bVar10;
      *(byte *)((long)puVar12 + uVar8) = bVar10;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
  else {
    *(byte *)((long)puVar12 + 0x11) = *(byte *)((long)puVar12 + 0x11) & 0xfd;
    padlock_reload_key();
    padlock_aes_block(puVar12,puVar12,puVar12);
    *(byte *)((long)puVar12 + 0x11) = *(byte *)((long)puVar12 + 0x11) | 2;
    padlock_reload_key();
    uVar8 = 0;
    do {
      bVar10 = param_3[uVar8 + uVar11];
      pbVar13[uVar8 + uVar11] = *(byte *)((long)puVar12 + uVar8) ^ bVar10;
      *(byte *)((long)puVar12 + uVar8) = bVar10;
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_4);
  }
LAB_004388bd:
  puVar7 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar2 = puVar12[1];
  *puVar7 = *puVar12;
  puVar7[1] = uVar2;
  return 1;
}

