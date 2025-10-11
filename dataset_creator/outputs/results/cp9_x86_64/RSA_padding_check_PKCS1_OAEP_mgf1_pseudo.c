
uint RSA_padding_check_PKCS1_OAEP_mgf1
               (long param_1,uint param_2,long param_3,uint param_4,int param_5,void *param_6,
               int param_7,EVP_MD *param_8,EVP_MD *param_9)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int num;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uchar *mask;
  void *pvVar10;
  ulong uVar11;
  uint uVar12;
  byte *pbVar13;
  size_t sVar14;
  byte *pbVar15;
  byte *pbVar16;
  size_t len;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  long seedlen;
  long in_FS_OFFSET;
  bool bVar21;
  byte *local_120;
  uint local_118;
  byte *local_110;
  EVP_MD *local_100;
  byte local_c8;
  byte abStack_c7 [63];
  uchar local_88 [72];
  long local_40;
  
  local_100 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == (EVP_MD *)0x0) {
    local_100 = EVP_sha1();
  }
  if (param_9 == (EVP_MD *)0x0) {
    param_9 = local_100;
  }
  iVar2 = EVP_MD_get_size(local_100);
  if (((int)param_2 < 1) || ((int)param_4 < 1)) {
    uVar5 = 0xffffffff;
    goto LAB_00559392;
  }
  if ((param_5 < (int)param_4) || (iVar3 = iVar2 + 1, param_5 < iVar3 * 2)) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_oaep.c",200,"RSA_padding_check_PKCS1_OAEP_mgf1");
    ERR_set_error(4,0x79,0);
    uVar5 = 0xffffffff;
    goto LAB_00559392;
  }
  iVar4 = param_5 - iVar2;
  num = iVar4 + -1;
  seedlen = (long)num;
  mask = (uchar *)CRYPTO_malloc(num,"../crypto/rsa/rsa_oaep.c",0xcd);
  if (mask == (uchar *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_oaep.c",0xcf,"RSA_padding_check_PKCS1_OAEP_mgf1");
    ERR_set_error(4,0xc0100,0);
LAB_00559675:
    local_120 = (byte *)0x0;
    uVar5 = 0xffffffff;
    uVar6 = 0xffffffff;
    local_118 = 0;
  }
  else {
    pvVar10 = CRYPTO_malloc(param_5,"../crypto/rsa/rsa_oaep.c",0xd3);
    if (pvVar10 == (void *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_oaep.c",0xd5,"RSA_padding_check_PKCS1_OAEP_mgf1");
      ERR_set_error(4,0xc0100,0);
      goto LAB_00559675;
    }
    pbVar15 = (byte *)((long)pvVar10 + (long)param_5);
    pbVar16 = (byte *)((int)param_4 + param_3);
    pbVar13 = pbVar15;
    do {
      pbVar13 = pbVar13 + -1;
      uVar5 = param_4 - 1 & ~param_4;
      uVar6 = ((int)uVar5 >> 0x1f) + 1;
      pbVar16 = pbVar16 + -(ulong)uVar6;
      param_4 = param_4 - uVar6;
      bVar17 = ~(byte)((int)uVar5 >> 0x1f) & *pbVar16;
      *pbVar13 = bVar17;
    } while ((int)pbVar15 - (int)pbVar13 < param_5);
    len = (size_t)iVar2;
    uVar11 = ~(ulong)(param_5 - 1);
    if (param_5 < 1) {
      uVar11 = 0xffffffffffffffff;
    }
    local_120 = pbVar15 + uVar11;
    uVar5 = bVar17 - 1 & ~(uint)bVar17;
    local_118 = (int)uVar5 >> 0x1f;
    lVar20 = -(ulong)(param_5 - 1);
    if (param_5 < 1) {
      lVar20 = 0;
    }
    iVar7 = PKCS1_MGF1(&local_c8,len,pbVar15 + lVar20 + len,seedlen,param_9);
    if (iVar7 == 0) {
      if (0 < iVar2) {
        pbVar16 = &local_c8;
        pbVar13 = local_120;
        do {
          pbVar13 = pbVar13 + 1;
          *pbVar16 = *pbVar16 ^ *pbVar13;
          pbVar16 = pbVar16 + 1;
        } while (abStack_c7 + (iVar2 - 1) != pbVar16);
      }
      iVar7 = PKCS1_MGF1(mask,seedlen,&local_c8,len,param_9);
      if (iVar7 != 0) goto LAB_0055933c;
      uVar11 = 0;
      if (0 < num) {
        do {
          mask[uVar11] = mask[uVar11] ^ (pbVar15 + lVar20 + len)[uVar11];
          bVar21 = iVar4 - 2 != uVar11;
          uVar11 = uVar11 + 1;
        } while (bVar21);
      }
      iVar7 = EVP_Digest(param_6,(long)param_7,local_88,(uint *)0x0,local_100,(ENGINE *)0x0);
      if (iVar7 == 0) goto LAB_0055933c;
      uVar6 = CRYPTO_memcmp(mask,local_88,len);
      uVar5 = (int)(~uVar6 & uVar6 - 1 & uVar5) >> 0x1f;
      if (iVar2 < num) {
        uVar12 = 0;
        uVar6 = 0;
        sVar14 = len;
        do {
          bVar17 = mask[sVar14];
          uVar8 = bVar17 ^ 1;
          uVar18 = (int)(~uVar8 & uVar8 - 1) >> 0x1f;
          uVar8 = ~uVar12 & uVar18;
          uVar12 = uVar12 | uVar18;
          uVar18 = (uint)sVar14;
          sVar14 = sVar14 + 1;
          uVar6 = uVar8 & uVar18 | ~uVar8 & uVar6;
          uVar5 = uVar5 & ((int)(~(uint)bVar17 & bVar17 - 1) >> 0x1f | uVar12);
        } while ((int)sVar14 < num);
        uVar6 = num - (uVar6 + 1);
        local_118 = ~((int)((param_2 - uVar6 ^ uVar6 | param_2 ^ uVar6) ^ param_2) >> 0x1f) &
                    uVar12 & uVar5;
        uVar5 = ~local_118;
        uVar12 = local_118 & 1;
      }
      else {
        uVar5 = 0xffffffff;
        local_118 = 0;
        uVar6 = iVar4 - 2;
        uVar12 = 0;
      }
      uVar8 = (num - iVar2) - 1;
      uVar18 = (int)((uVar8 - param_2 ^ param_2 | param_2 ^ uVar8) ^ uVar8) >> 0x1f;
      uVar18 = uVar18 & uVar8 | ~uVar18 & param_2;
      if (1 < (int)uVar8) {
        uVar19 = 1;
        do {
          uVar9 = uVar19 & uVar8 - uVar6;
          bVar17 = (char)(~(byte)(uVar9 >> 0x18) & (byte)(uVar9 - 1 >> 0x18)) >> 7;
          if (iVar3 < (int)(num - uVar19)) {
            pbVar13 = mask + iVar3;
            do {
              pbVar15 = pbVar13 + 1;
              *pbVar13 = pbVar13[(int)uVar19] & ~bVar17 | bVar17 & *pbVar13;
              pbVar13 = pbVar15;
            } while (mask + (ulong)((-2 - iVar2) + (num - uVar19)) + len + 2 != pbVar15);
          }
          uVar9 = uVar19 * 2;
          iVar4 = uVar19 * -2;
          uVar19 = uVar9;
        } while (uVar8 != uVar9 && SBORROW4(uVar8,uVar9) == (int)(uVar8 + iVar4) < 0);
      }
      if (0 < (int)uVar18) {
        uVar11 = 0;
        iVar2 = -uVar6;
        do {
          bVar17 = (byte)(uVar6 >> 0x18);
          bVar1 = (byte)(uVar11 >> 0x18);
          bVar17 = (char)((bVar17 ^ bVar1 | (byte)((uint)iVar2 >> 0x18) ^ bVar17) ^ bVar1) >> 7 &
                   (byte)local_118;
          *(byte *)(param_1 + uVar11) =
               ~bVar17 & *(byte *)(param_1 + uVar11) | bVar17 & mask[uVar11 + len + 1];
          uVar11 = uVar11 + 1;
          iVar2 = iVar2 + 1;
        } while (uVar11 != uVar18);
      }
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_oaep.c",0x13a,"RSA_padding_check_PKCS1_OAEP_mgf1");
      ERR_set_error(4,0x79,0);
      err_clear_last_constant_time(uVar12);
    }
    else {
LAB_0055933c:
      uVar6 = 0xffffffff;
      uVar5 = ~local_118;
    }
  }
  local_110 = &local_c8;
  OPENSSL_cleanse(local_110,0x40);
  CRYPTO_clear_free(mask,seedlen,"../crypto/rsa/rsa_oaep.c",0x13f);
  CRYPTO_clear_free(local_120,(long)param_5,"../crypto/rsa/rsa_oaep.c",0x140);
  uVar5 = local_118 & uVar6 | uVar5;
LAB_00559392:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar5;
}

