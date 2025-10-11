
undefined8 rc4_hmac_md5_cipher(undefined8 param_1,uchar *param_2,uchar *param_3,size_t param_4)

{
  MD5_CTX *c;
  uint uVar1;
  size_t len;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  RC4_KEY *key;
  uchar *md;
  undefined8 uVar12;
  long in_FS_OFFSET;
  uchar local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  key = (RC4_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  len = *(size_t *)(key[1].data + 0x44);
  if (len == 0xffffffffffffffff) {
    iVar11 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar11 == 0) {
      RC4(key,param_4,param_3,param_2);
      MD5_Update((MD5_CTX *)(key[1].data + 0x2c),param_2,param_4);
    }
    else {
      MD5_Update((MD5_CTX *)(key[1].data + 0x2c),param_3,param_4);
LAB_00524211:
      RC4(key,param_4,param_3,param_2);
    }
  }
  else {
    uVar12 = 0;
    if (len + 0x10 != param_4) goto LAB_005241c2;
    c = (MD5_CTX *)(key[1].data + 0x2c);
    iVar11 = EVP_CIPHER_CTX_is_encrypting(param_1);
    if (iVar11 == 0) {
      RC4(key,len + 0x10,param_3,param_2);
      MD5_Update(c,param_2,len);
      MD5_Final(local_58,c);
      uVar12 = *(undefined8 *)(key[1].data + 0x15);
      uVar2 = *(undefined8 *)(key[1].data + 0x17);
      uVar3 = *(undefined8 *)(key[1].data + 0x19);
      uVar4 = *(undefined8 *)(key[1].data + 0x1b);
      uVar5 = *(undefined8 *)(key[1].data + 0x1d);
      uVar6 = *(undefined8 *)(key[1].data + 0x1f);
      *(undefined8 *)(key[1].data + 0x40) = *(undefined8 *)(key[1].data + 0x29);
      uVar1 = key[1].data[0x2b];
      *(undefined8 *)(key[1].data + 0x2c) = uVar12;
      *(undefined8 *)(key[1].data + 0x2e) = uVar2;
      uVar12 = *(undefined8 *)(key[1].data + 0x21);
      uVar2 = *(undefined8 *)(key[1].data + 0x23);
      *(undefined8 *)(key[1].data + 0x30) = uVar3;
      *(undefined8 *)(key[1].data + 0x32) = uVar4;
      uVar3 = *(undefined8 *)(key[1].data + 0x25);
      uVar4 = *(undefined8 *)(key[1].data + 0x27);
      key[1].data[0x42] = uVar1;
      *(undefined8 *)(key[1].data + 0x34) = uVar5;
      *(undefined8 *)(key[1].data + 0x36) = uVar6;
      *(undefined8 *)(key[1].data + 0x38) = uVar12;
      *(undefined8 *)(key[1].data + 0x3a) = uVar2;
      *(undefined8 *)(key[1].data + 0x3c) = uVar3;
      *(undefined8 *)(key[1].data + 0x3e) = uVar4;
      MD5_Update(c,local_58,0x10);
      MD5_Final(local_58,c);
      iVar11 = CRYPTO_memcmp(param_2 + len,local_58,0x10);
      uVar12 = 0;
      if (iVar11 != 0) goto LAB_005241c2;
    }
    else {
      MD5_Update(c,param_3,len);
      if (len == param_4) goto LAB_00524211;
      if (param_3 != param_2) {
        memcpy(param_2,param_3,len);
      }
      md = param_2 + len;
      MD5_Final(md,c);
      uVar12 = *(undefined8 *)(key[1].data + 0x15);
      uVar2 = *(undefined8 *)(key[1].data + 0x17);
      uVar3 = *(undefined8 *)(key[1].data + 0x19);
      uVar4 = *(undefined8 *)(key[1].data + 0x1b);
      uVar5 = *(undefined8 *)(key[1].data + 0x1d);
      uVar6 = *(undefined8 *)(key[1].data + 0x1f);
      *(undefined8 *)(key[1].data + 0x40) = *(undefined8 *)(key[1].data + 0x29);
      uVar1 = key[1].data[0x2b];
      uVar7 = *(undefined8 *)(key[1].data + 0x21);
      uVar8 = *(undefined8 *)(key[1].data + 0x23);
      uVar9 = *(undefined8 *)(key[1].data + 0x25);
      uVar10 = *(undefined8 *)(key[1].data + 0x27);
      *(undefined8 *)(key[1].data + 0x2c) = uVar12;
      *(undefined8 *)(key[1].data + 0x2e) = uVar2;
      key[1].data[0x42] = uVar1;
      *(undefined8 *)(key[1].data + 0x30) = uVar3;
      *(undefined8 *)(key[1].data + 0x32) = uVar4;
      *(undefined8 *)(key[1].data + 0x34) = uVar5;
      *(undefined8 *)(key[1].data + 0x36) = uVar6;
      *(undefined8 *)(key[1].data + 0x38) = uVar7;
      *(undefined8 *)(key[1].data + 0x3a) = uVar8;
      *(undefined8 *)(key[1].data + 0x3c) = uVar9;
      *(undefined8 *)(key[1].data + 0x3e) = uVar10;
      MD5_Update(c,md,0x10);
      MD5_Final(md,c);
      RC4(key,param_4,param_2,param_2);
    }
  }
  key[1].data[0x44] = 0xffffffff;
  key[1].data[0x45] = 0xffffffff;
  uVar12 = 1;
LAB_005241c2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar12;
}

