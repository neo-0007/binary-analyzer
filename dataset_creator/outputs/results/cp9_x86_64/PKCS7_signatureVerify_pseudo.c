
int PKCS7_signatureVerify(BIO *bio,PKCS7 *p7,PKCS7_SIGNER_INFO *si,X509 *x509)

{
  ASN1_VALUE *val;
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  EVP_MD_CTX *out;
  undefined8 uVar5;
  BIO *bp;
  long lVar6;
  ASN1_OCTET_STRING *pAVar7;
  char *pcVar8;
  EVP_MD *pEVar9;
  ASN1_ITEM *it;
  EVP_MD *type;
  long in_FS_OFFSET;
  uint local_9c;
  EVP_MD_CTX *local_98;
  uchar *local_90;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = ossl_pkcs7_get0_ctx(p7);
  uVar4 = ossl_pkcs7_ctx_get0_libctx(uVar3);
  uVar3 = ossl_pkcs7_ctx_get0_propq(uVar3);
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    ERR_new();
    pEVar9 = (EVP_MD *)0x0;
    iVar1 = 0;
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x40f,"PKCS7_signatureVerify");
    ERR_set_error(0x21,0xc0100,0);
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 == 0x16) || (iVar1 = OBJ_obj2nid(p7->type), iVar1 == 0x18)) {
      iVar2 = OBJ_obj2nid(si->digest_alg->algorithm);
      if (bio != (BIO *)0x0) {
        do {
          bp = BIO_find_type(bio,0x208);
          if (bp == (BIO *)0x0) break;
          BIO_ctrl(bp,0x78,0,&local_98);
          if (local_98 == (EVP_MD_CTX *)0x0) {
            ERR_new();
            iVar1 = 0;
            ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x423,"PKCS7_signatureVerify");
            ERR_set_error(0x21,0xc0103,0);
            pEVar9 = (EVP_MD *)0x0;
            goto LAB_00549e7e;
          }
          uVar5 = EVP_MD_CTX_get0_md(local_98);
          iVar1 = EVP_MD_get_type(uVar5);
          if (iVar1 == iVar2) {
LAB_00549ec0:
            pEVar9 = (EVP_MD *)0x0;
            iVar1 = EVP_MD_CTX_copy_ex(out,local_98);
            if (iVar1 == 0) goto LAB_00549e7e;
            val = (ASN1_VALUE *)si->auth_attr;
            if ((val != (ASN1_VALUE *)0x0) && (iVar1 = OPENSSL_sk_num(val), iVar1 != 0)) {
              local_90 = (uchar *)0x0;
              iVar1 = EVP_DigestFinal_ex(out,local_88,&local_9c);
              if (iVar1 == 0) goto LAB_00549e7e;
              pAVar7 = PKCS7_digest_from_attributes((stack_st_X509_ATTRIBUTE *)val);
              if (pAVar7 == (ASN1_OCTET_STRING *)0x0) {
                ERR_new();
                iVar1 = 0;
                ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x443,"PKCS7_signatureVerify");
                ERR_set_error(0x21,0x6c,0);
                pEVar9 = (EVP_MD *)0x0;
                goto LAB_00549e7e;
              }
              if ((pAVar7->length != local_9c) ||
                 (iVar1 = bcmp(pAVar7->data,local_88,(ulong)local_9c), iVar1 != 0)) {
                ERR_new();
                pEVar9 = (EVP_MD *)0x0;
                iVar1 = -1;
                ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x448,"PKCS7_signatureVerify");
                ERR_set_error(0x21,0x65,0);
                goto LAB_00549e7e;
              }
              ERR_set_mark();
              pcVar8 = OBJ_nid2sn(iVar2);
              pEVar9 = (EVP_MD *)EVP_MD_fetch(uVar4,pcVar8,uVar3);
              type = pEVar9;
              if (pEVar9 == (EVP_MD *)0x0) {
                pcVar8 = OBJ_nid2sn(iVar2);
                type = EVP_get_digestbyname(pcVar8);
                if (type != (EVP_MD *)0x0) goto LAB_0054a0aa;
              }
              else {
LAB_0054a0aa:
                iVar1 = EVP_DigestInit_ex(out,type,(ENGINE *)0x0);
                if (iVar1 != 0) {
                  ERR_pop_to_mark();
                  it = (ASN1_ITEM *)PKCS7_ATTR_VERIFY_it();
                  iVar1 = ASN1_item_i2d(val,&local_90,it);
                  if (iVar1 < 1) {
                    ERR_new();
                    iVar1 = -1;
                    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x45e,"PKCS7_signatureVerify");
                    ERR_set_error(0x21,0x8000d,0);
                  }
                  else {
                    iVar1 = EVP_DigestUpdate(out,local_90,(long)iVar1);
                    if (iVar1 != 0) {
                      CRYPTO_free(local_90);
                      goto LAB_00549ef2;
                    }
                  }
                  goto LAB_00549e7e;
                }
              }
              ERR_clear_last_mark();
              iVar1 = 0;
              goto LAB_00549e7e;
            }
            pEVar9 = (EVP_MD *)0x0;
LAB_00549ef2:
            pAVar7 = si->enc_digest;
            iVar1 = -1;
            lVar6 = X509_get0_pubkey(x509);
            if (lVar6 != 0) {
              iVar1 = 1;
              iVar2 = EVP_VerifyFinal_ex(out,pAVar7->data,pAVar7->length,lVar6,uVar4,uVar3);
              if (iVar2 < 1) {
                ERR_new();
                iVar1 = -1;
                ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x471,"PKCS7_signatureVerify");
                ERR_set_error(0x21,0x69,0);
              }
            }
            goto LAB_00549e7e;
          }
          uVar5 = EVP_MD_CTX_get0_md(local_98);
          iVar1 = EVP_MD_get_pkey_type(uVar5);
          if (iVar1 == iVar2) goto LAB_00549ec0;
          bio = BIO_next(bp);
        } while (bio != (BIO *)0x0);
      }
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x41e,"PKCS7_signatureVerify");
      uVar3 = 0x6c;
    }
    else {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x414,"PKCS7_signatureVerify");
      uVar3 = 0x72;
    }
    iVar1 = 0;
    pEVar9 = (EVP_MD *)0x0;
    ERR_set_error(0x21,uVar3,0);
  }
LAB_00549e7e:
  EVP_MD_CTX_free(out);
  EVP_MD_free(pEVar9);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

