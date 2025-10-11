
int RSA_verify_PKCS1_PSS_mgf1
              (RSA *rsa,uchar *mHash,EVP_MD *Hash,EVP_MD *mgf1Hash,uchar *EM,int sLen)

{
  uchar uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  EVP_MD_CTX *ctx;
  byte *mask;
  size_t cnt;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  long in_FS_OFFSET;
  bool bVar12;
  sbyte local_c0;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    if (mgf1Hash == (EVP_MD *)0x0) {
      mgf1Hash = Hash;
    }
    iVar3 = EVP_MD_get_size(Hash);
    if (-1 < iVar3) {
      iVar5 = iVar3;
      if ((sLen == -1) || (iVar5 = sLen, -4 < sLen)) {
        iVar4 = BN_num_bits(rsa->e);
        uVar2 = iVar4 - 1U & 7;
        iVar4 = RSA_size(rsa);
        local_c0 = (sbyte)uVar2;
        if (((uint)*EM & 0xff << local_c0) == 0) {
          if (uVar2 == 0) {
            EM = EM + 1;
            iVar4 = iVar4 + -1;
          }
          iVar11 = 0;
          if (iVar3 + 1 < iVar4) {
            iVar10 = iVar4 - iVar3;
            if (iVar5 == -3) {
              iVar5 = iVar10 + -2;
              uVar1 = EM[(long)iVar4 + -1];
            }
            else {
              if (iVar10 + -1 <= iVar5) {
                ERR_new();
                uVar9 = 0x5a;
                goto LAB_00432a21;
              }
              uVar1 = EM[(long)iVar4 + -1];
            }
            if (uVar1 == 0xbc) {
              iVar4 = iVar10 + -1;
              mask = (byte *)CRYPTO_malloc(iVar4,"../crypto/rsa/rsa_pss.c",99);
              if (mask == (byte *)0x0) {
                ERR_new();
                ERR_set_debug("../crypto/rsa/rsa_pss.c",0x65,"RSA_verify_PKCS1_PSS_mgf1");
                uVar9 = 0xc0100;
              }
              else {
                cnt = (size_t)iVar3;
                iVar3 = PKCS1_MGF1(mask,(long)iVar4,EM + iVar4,cnt,mgf1Hash);
                if (iVar3 < 0) goto LAB_004328dd;
                uVar6 = 0;
                if (0 < iVar4) {
                  do {
                    mask[uVar6] = mask[uVar6] ^ EM[uVar6];
                    bVar12 = iVar10 - 2 != uVar6;
                    uVar6 = uVar6 + 1;
                  } while (bVar12);
                }
                bVar8 = *mask;
                if (uVar2 != 0) {
                  bVar8 = bVar8 & (byte)(0xff >> (8U - local_c0 & 0x1f));
                  *mask = bVar8;
                }
                if (bVar8 == 0) {
                  if (2 < iVar10) {
                    lVar7 = 1;
                    do {
                      bVar8 = mask[lVar7];
                      if (bVar8 != 0) {
                        iVar3 = (int)lVar7 + 1;
                        goto LAB_0043279b;
                      }
                      lVar7 = lVar7 + 1;
                    } while ((ulong)(iVar10 - 3) + 2 != lVar7);
                  }
                }
                else {
                  iVar3 = 1;
LAB_0043279b:
                  if (bVar8 == 1) {
                    if ((iVar5 != -2) && (iVar4 - iVar3 != iVar5)) {
                      ERR_new();
                      ERR_set_debug("../crypto/rsa/rsa_pss.c",0x74,"RSA_verify_PKCS1_PSS_mgf1");
                      ERR_set_error(4,0x88,"expected: %d retrieved: %d",iVar5,iVar4 - iVar3);
                      goto LAB_004328dd;
                    }
                    iVar5 = EVP_DigestInit_ex(ctx,Hash,(ENGINE *)0x0);
                    if ((((iVar5 != 0) && (iVar5 = EVP_DigestUpdate(ctx,&zeroes,8), iVar5 != 0)) &&
                        (iVar5 = EVP_DigestUpdate(ctx,mHash,cnt), iVar5 != 0)) &&
                       ((iVar4 == iVar3 ||
                        (iVar3 = EVP_DigestUpdate(ctx,mask + iVar3,(long)(iVar4 - iVar3)),
                        iVar3 != 0)))) {
                      iVar3 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
                      if (iVar3 != 0) {
                        iVar3 = bcmp(local_88,EM + iVar4,cnt);
                        if (iVar3 == 0) {
                          iVar11 = 1;
                          goto LAB_004328dd;
                        }
                        ERR_new();
                        ERR_set_debug("../crypto/rsa/rsa_pss.c",0x84,"RSA_verify_PKCS1_PSS_mgf1");
                        uVar9 = 0x68;
                        goto LAB_00432abc;
                      }
                    }
                    iVar11 = 0;
                    goto LAB_004328dd;
                  }
                }
                ERR_new();
                ERR_set_debug("../crypto/rsa/rsa_pss.c",0x70,"RSA_verify_PKCS1_PSS_mgf1");
                uVar9 = 0x87;
              }
LAB_00432abc:
              ERR_set_error(4,uVar9,0);
              goto LAB_004328dd;
            }
            ERR_new();
            ERR_set_debug("../crypto/rsa/rsa_pss.c",0x5e,"RSA_verify_PKCS1_PSS_mgf1");
            uVar9 = 0x86;
          }
          else {
            ERR_new();
            uVar9 = 0x54;
LAB_00432a21:
            ERR_set_debug("../crypto/rsa/rsa_pss.c",uVar9,"RSA_verify_PKCS1_PSS_mgf1");
            uVar9 = 0x6d;
          }
          ERR_set_error(4,uVar9,0);
          mask = (byte *)0x0;
          goto LAB_004328dd;
        }
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pss.c",0x4c,"RSA_verify_PKCS1_PSS_mgf1");
        uVar9 = 0x85;
      }
      else {
        ERR_new();
        ERR_set_debug("../crypto/rsa/rsa_pss.c",0x45,"RSA_verify_PKCS1_PSS_mgf1");
        uVar9 = 0x88;
      }
      iVar11 = 0;
      ERR_set_error(4,uVar9,0);
      mask = (byte *)0x0;
      goto LAB_004328dd;
    }
  }
  mask = (byte *)0x0;
  iVar11 = 0;
LAB_004328dd:
  CRYPTO_free(mask);
  EVP_MD_CTX_free(ctx);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

