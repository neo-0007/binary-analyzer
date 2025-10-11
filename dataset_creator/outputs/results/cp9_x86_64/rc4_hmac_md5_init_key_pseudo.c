
bool rc4_hmac_md5_init_key(undefined8 param_1,uchar *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  int len;
  RC4_KEY *key;
  
  key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  len = EVP_CIPHER_CTX_get_key_length(param_1);
  if (0 < len) {
    RC4_set_key(key,len,param_2);
    MD5_Init((MD5_CTX *)(key + 1));
    uVar2 = *(undefined8 *)(key[1].data + 0x12);
    uVar1 = key[1].data[0x14];
    key[1].data[0x44] = 0xffffffff;
    key[1].data[0x45] = 0xffffffff;
    uVar3._0_4_ = key[1].x;
    uVar3._4_4_ = key[1].y;
    uVar4 = *(undefined8 *)key[1].data;
    uVar5 = *(undefined8 *)(key[1].data + 2);
    uVar6 = *(undefined8 *)(key[1].data + 4);
    uVar7 = *(undefined8 *)(key[1].data + 6);
    uVar8 = *(undefined8 *)(key[1].data + 8);
    uVar9 = *(undefined8 *)(key[1].data + 10);
    uVar10 = *(undefined8 *)(key[1].data + 0xc);
    *(undefined8 *)(key[1].data + 0x29) = uVar2;
    uVar11 = *(undefined8 *)(key[1].data + 0xe);
    uVar12 = *(undefined8 *)(key[1].data + 0x10);
    *(undefined8 *)(key[1].data + 0x40) = uVar2;
    key[1].data[0x2b] = uVar1;
    key[1].data[0x42] = uVar1;
    *(undefined8 *)(key[1].data + 0x15) = uVar3;
    *(undefined8 *)(key[1].data + 0x17) = uVar4;
    *(undefined8 *)(key[1].data + 0x19) = uVar5;
    *(undefined8 *)(key[1].data + 0x1b) = uVar6;
    *(undefined8 *)(key[1].data + 0x1d) = uVar7;
    *(undefined8 *)(key[1].data + 0x1f) = uVar8;
    *(undefined8 *)(key[1].data + 0x21) = uVar9;
    *(undefined8 *)(key[1].data + 0x23) = uVar10;
    *(undefined8 *)(key[1].data + 0x25) = uVar11;
    *(undefined8 *)(key[1].data + 0x27) = uVar12;
    *(undefined8 *)(key[1].data + 0x2c) = uVar3;
    *(undefined8 *)(key[1].data + 0x2e) = uVar4;
    *(undefined8 *)(key[1].data + 0x30) = uVar5;
    *(undefined8 *)(key[1].data + 0x32) = uVar6;
    *(undefined8 *)(key[1].data + 0x34) = uVar7;
    *(undefined8 *)(key[1].data + 0x36) = uVar8;
    *(undefined8 *)(key[1].data + 0x38) = uVar9;
    *(undefined8 *)(key[1].data + 0x3a) = uVar10;
    *(undefined8 *)(key[1].data + 0x3c) = uVar11;
    *(undefined8 *)(key[1].data + 0x3e) = uVar12;
  }
  return 0 < len;
}

