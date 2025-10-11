
undefined8 padlock_ofb_cipher(undefined8 param_1,byte *param_2,byte *param_3,ulong param_4)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  
  lVar6 = EVP_CIPHER_CTX_get_cipher_data();
  iVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  uVar5 = EVP_CIPHER_CTX_get_num(param_1);
  uVar10 = (ulong)(int)uVar5;
  if (uVar10 != 0) {
    lVar9 = EVP_CIPHER_CTX_iv_noconst(param_1);
    if (0xf < uVar10) {
      return 0;
    }
    pbVar12 = param_2;
    if (param_4 == 0) {
      EVP_CIPHER_CTX_set_num(param_1,uVar5 & 0xf);
      return 1;
    }
    do {
      bVar2 = *param_3;
      param_2 = pbVar12 + 1;
      pbVar1 = (byte *)(lVar9 + uVar10);
      uVar10 = uVar10 + 1;
      param_3 = param_3 + 1;
      *pbVar12 = bVar2 ^ *pbVar1;
      param_4 = param_4 - 1;
      if (0xf < uVar10) break;
      pbVar12 = param_2;
    } while (param_4 != 0);
    EVP_CIPHER_CTX_set_num(param_1,(uint)uVar10 & 0xf);
  }
  if (param_4 == 0) {
    return 1;
  }
  puVar11 = (undefined8 *)((ulong)(-iVar4 & 0xf) + lVar6);
  puVar7 = (undefined8 *)EVP_CIPHER_CTX_iv(param_1);
  uVar3 = puVar7[1];
  *puVar11 = *puVar7;
  puVar11[1] = uVar3;
  uVar10 = param_4 & 0xfffffffffffffff0;
  if (uVar10 != 0) {
    iVar4 = padlock_ofb_encrypt(param_2,param_3,puVar11,uVar10);
    if (iVar4 == 0) {
      return 0;
    }
    param_4 = param_4 - uVar10;
    if (param_4 == 0) goto LAB_00438b17;
  }
  EVP_CIPHER_CTX_set_num(param_1,param_4 & 0xffffffff);
  padlock_reload_key();
  padlock_aes_block(puVar11,puVar11,puVar11);
  padlock_reload_key();
  uVar8 = 0;
  do {
    param_2[uVar8 + uVar10] = param_3[uVar8 + uVar10] ^ *(byte *)((long)puVar11 + uVar8);
    uVar8 = uVar8 + 1;
  } while (uVar8 != param_4);
LAB_00438b17:
  puVar7 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
  uVar3 = puVar11[1];
  *puVar7 = *puVar11;
  puVar7[1] = uVar3;
  return 1;
}

