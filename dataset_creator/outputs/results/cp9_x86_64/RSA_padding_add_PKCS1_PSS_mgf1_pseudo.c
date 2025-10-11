
int RSA_padding_add_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *EM,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,int sLen)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  ulong uVar6;
  undefined8 uVar7;
  size_t cnt;
  void *local_68;
  byte *local_60;
  int local_48;
  
  if (mgf1Hash == (EVP_MD *)0x0) {
    mgf1Hash = Hash;
  }
  iVar2 = EVP_MD_get_size(Hash);
  if (iVar2 < 0) {
    cnt = (size_t)sLen;
    ctx = (EVP_MD_CTX *)0x0;
    iVar3 = 0;
    local_68 = (void *)0x0;
    goto LAB_00432d1b;
  }
  iVar3 = iVar2;
  if (sLen == -1) {
LAB_00432c2e:
    sLen = iVar3;
    iVar3 = BN_num_bits(rsa->e);
    uVar4 = iVar3 - 1U & 7;
    local_48 = RSA_size(rsa);
    local_60 = EM;
    if (uVar4 == 0) {
      local_48 = local_48 + -1;
      local_60 = EM + 1;
      *EM = '\0';
    }
    if (iVar2 + 1 < local_48) {
      iVar5 = local_48 - iVar2;
      if (sLen == -3) {
        sLen = iVar5 + -2;
      }
      else if (iVar5 + -1 <= sLen) {
        cnt = (size_t)sLen;
        iVar3 = 0;
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pss.c",199,"RSA_padding_add_PKCS1_PSS_mgf1");
        ERR_set_error(4,0x6e,0);
        ctx = (EVP_MD_CTX *)0x0;
        local_68 = (void *)0x0;
        goto LAB_00432d1b;
      }
      cnt = (size_t)sLen;
      if (sLen < 1) {
        local_68 = (void *)0x0;
      }
      else {
        local_68 = CRYPTO_malloc(sLen,"../crypto/rsa/rsa_pss.c",0xcb);
        if (local_68 == (void *)0x0) {
          ERR_new();
          iVar3 = 0;
          ERR_set_debug("../crypto/rsa/rsa_pss.c",0xcd,"RSA_padding_add_PKCS1_PSS_mgf1");
          ERR_set_error(4,0xc0100,0);
          ctx = (EVP_MD_CTX *)0x0;
          goto LAB_00432d1b;
        }
        iVar3 = RAND_bytes_ex(rsa->version,local_68,cnt,0);
        if (iVar3 < 1) {
          ctx = (EVP_MD_CTX *)0x0;
          iVar3 = 0;
          goto LAB_00432d1b;
        }
      }
      ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
      iVar3 = 0;
      if (((ctx != (EVP_MD_CTX *)0x0) &&
          (iVar3 = EVP_DigestInit_ex(ctx,Hash,(ENGINE *)0x0), iVar3 != 0)) &&
         (iVar3 = EVP_DigestUpdate(ctx,&zeroes,8), iVar3 != 0)) {
        iVar3 = EVP_DigestUpdate(ctx,mHash,(long)iVar2);
        if ((iVar3 != 0) &&
           ((sLen == 0 || (iVar3 = EVP_DigestUpdate(ctx,local_68,cnt), iVar3 != 0)))) {
          iVar3 = EVP_DigestFinal_ex(ctx,local_60 + (iVar5 + -1),(uint *)0x0);
          if (iVar3 != 0) {
            iVar3 = 0;
            iVar5 = PKCS1_MGF1(local_60,(long)(iVar5 + -1),local_60 + (iVar5 + -1),(long)iVar2,
                               mgf1Hash);
            if (iVar5 == 0) {
              pbVar1 = local_60 + (long)((local_48 - sLen) - iVar2) + -2;
              *pbVar1 = *pbVar1 ^ 1;
              if (0 < sLen) {
                uVar6 = 1;
                do {
                  pbVar1[uVar6] = pbVar1[uVar6] ^ *(byte *)((long)local_68 + (uVar6 - 1));
                  uVar6 = uVar6 + 1;
                } while (uVar6 != sLen + 1);
              }
              if (uVar4 != 0) {
                *local_60 = *local_60 & (byte)(0xff >> (8U - (char)uVar4 & 0x1f));
              }
              iVar3 = 1;
              local_60[(long)local_48 + -1] = 0xbc;
            }
          }
        }
      }
      goto LAB_00432d1b;
    }
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pss.c",0xc1,"RSA_padding_add_PKCS1_PSS_mgf1");
    uVar7 = 0x6e;
  }
  else {
    if (sLen == -2) {
      iVar3 = -3;
      goto LAB_00432c2e;
    }
    iVar3 = sLen;
    if (-4 < sLen) goto LAB_00432c2e;
    ERR_new();
    ERR_set_debug("../crypto/rsa/rsa_pss.c",0xb6,"RSA_padding_add_PKCS1_PSS_mgf1");
    uVar7 = 0x88;
  }
  cnt = (size_t)sLen;
  iVar3 = 0;
  ERR_set_error(4,uVar7,0);
  ctx = (EVP_MD_CTX *)0x0;
  local_68 = (void *)0x0;
LAB_00432d1b:
  EVP_MD_CTX_free(ctx);
  CRYPTO_clear_free(local_68,cnt,"../crypto/rsa/rsa_pss.c",0xfc);
  return iVar3;
}

