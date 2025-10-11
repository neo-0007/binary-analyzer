
int PKCS7_SIGNER_INFO_sign(PKCS7_SIGNER_INFO *si)

{
  ASN1_INTEGER *pAVar1;
  EVP_PKEY *pEVar2;
  int iVar3;
  char *name;
  EVP_MD *pEVar4;
  EVP_MD_CTX *ctx;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ASN1_ITEM *it;
  long in_FS_OFFSET;
  undefined8 local_58;
  uchar *local_50;
  int local_48 [2];
  long local_40;
  
  pAVar1 = si[1].version;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (uchar *)0x0;
  iVar3 = OBJ_obj2nid(si->digest_alg->algorithm);
  name = OBJ_nid2sn(iVar3);
  pEVar4 = EVP_get_digestbyname(name);
  iVar3 = 0;
  if (pEVar4 != (EVP_MD *)0x0) {
    ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
    if (ctx == (EVP_MD_CTX *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x3a1,"PKCS7_SIGNER_INFO_sign");
      ERR_set_error(0x21,0xc0100,0);
    }
    else {
      pEVar2 = si->pkey;
      uVar5 = ossl_pkcs7_ctx_get0_propq(pAVar1);
      uVar6 = ossl_pkcs7_ctx_get0_libctx(pAVar1);
      uVar7 = EVP_MD_get0_name(pEVar4);
      iVar3 = EVP_DigestSignInit_ex(ctx,&local_58,uVar7,uVar6,uVar5,pEVar2);
      if (0 < iVar3) {
        it = (ASN1_ITEM *)PKCS7_ATTR_SIGN_it();
        iVar3 = ASN1_item_i2d((ASN1_VALUE *)si->auth_attr,&local_50,it);
        if ((local_50 != (uchar *)0x0) &&
           (iVar3 = EVP_DigestSignUpdate(ctx,local_50,(long)iVar3), 0 < iVar3)) {
          CRYPTO_free(local_50);
          local_50 = (uchar *)0x0;
          iVar3 = EVP_DigestSignFinal(ctx,(uchar *)0x0,(size_t *)local_48);
          if ((0 < iVar3) &&
             ((local_50 = (uchar *)CRYPTO_malloc(local_48[0],"../crypto/pkcs7/pk7_doit.c",0x3b5),
              local_50 != (uchar *)0x0 &&
              (iVar3 = EVP_DigestSignFinal(ctx,local_50,(size_t *)local_48), 0 < iVar3)))) {
            EVP_MD_CTX_free(ctx);
            ASN1_STRING_set0(si->enc_digest,local_50,local_48[0]);
            iVar3 = 1;
            goto LAB_00549408;
          }
        }
      }
    }
    CRYPTO_free(local_50);
    EVP_MD_CTX_free(ctx);
    iVar3 = 0;
  }
LAB_00549408:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

