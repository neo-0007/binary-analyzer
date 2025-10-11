
int PKCS7_dataFinal(PKCS7 *p7,BIO *bio)

{
  int iVar1;
  undefined8 uVar2;
  EVP_MD_CTX *out;
  ASN1_TYPE *pAVar3;
  PKCS7_SIGNER_INFO *si;
  void *ptr;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  BIO *bp;
  int iVar7;
  stack_st_PKCS7_SIGNER_INFO *psVar8;
  long in_FS_OFFSET;
  ASN1_STRING *local_b0;
  EVP_MD_CTX *local_98;
  uint local_90;
  undefined4 uStack_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2eb,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x8f,0);
    iVar1 = 0;
    goto LAB_00549822;
  }
  uVar2 = ossl_pkcs7_get0_ctx();
  if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2f2,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x7a,0);
    iVar1 = 0;
    goto LAB_00549822;
  }
  out = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (out == (EVP_MD_CTX *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2f8,"PKCS7_dataFinal");
    ERR_set_error(0x21,0xc0100,0);
    iVar1 = 0;
    goto LAB_00549822;
  }
  iVar1 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  switch(iVar1) {
  case 0x15:
    local_b0 = (p7->d).data;
    goto LAB_005497e2;
  case 0x16:
    psVar8 = ((p7->d).sign)->signer_info;
    local_b0 = (ASN1_STRING *)PKCS7_get_octet_string(((p7->d).sign)->contents);
    iVar1 = OBJ_obj2nid(((p7->d).sign)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(local_b0);
      local_b0 = (ASN1_STRING *)0x0;
      (((p7->d).sign)->contents->d).ptr = (char *)0x0;
    }
    break;
  case 0x17:
    local_b0 = ((p7->d).enveloped)->enc_data->enc_data;
    if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
      local_b0 = ASN1_OCTET_STRING_new();
      if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
        ERR_new();
        uVar2 = 0x316;
LAB_00549c69:
        ERR_set_debug("../crypto/pkcs7/pk7_doit.c",uVar2,"PKCS7_dataFinal");
        ERR_set_error(0x21,0xc0100,0);
        iVar1 = 0;
        goto LAB_00549812;
      }
      ((p7->d).enveloped)->enc_data->enc_data = local_b0;
    }
    iVar1 = OBJ_obj2nid(p7->type);
    if ((iVar1 != 0x16) || (lVar6 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar6 == 0)) goto LAB_005497fd;
    goto LAB_0054980c;
  case 0x18:
    psVar8 = ((p7->d).signed_and_enveloped)->signer_info;
    local_b0 = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (local_b0 == (ASN1_STRING *)0x0) {
      local_b0 = ASN1_OCTET_STRING_new();
      if (local_b0 == (ASN1_OCTET_STRING *)0x0) {
        ERR_new();
        uVar2 = 0x30a;
        goto LAB_00549c69;
      }
      ((p7->d).signed_and_enveloped)->enc_data->enc_data = local_b0;
    }
    break;
  case 0x19:
    local_b0 = (ASN1_STRING *)PKCS7_get_octet_string(((p7->d).data)->flags);
    iVar1 = OBJ_obj2nid(((p7->d).digest)->contents->type);
    if ((iVar1 == 0x15) && (p7->detached != 0)) {
      ASN1_OCTET_STRING_free(local_b0);
      local_b0 = (ASN1_STRING *)0x0;
      (((p7->d).digest)->contents->d).ptr = (char *)0x0;
    }
    iVar1 = OBJ_obj2nid(((p7->d).digest)->md->algorithm);
    lVar6 = PKCS7_find_digest(&local_98,bio,iVar1);
    if (lVar6 != 0) {
      iVar1 = EVP_DigestFinal_ex(local_98,local_88,&local_90);
      if ((iVar1 != 0) &&
         (iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)((p7->d).sign)->crl,local_88,local_90),
         iVar1 != 0)) goto LAB_005497e2;
    }
    goto LAB_005497d0;
  default:
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x332,"PKCS7_dataFinal");
    ERR_set_error(0x21,0x70,0);
    iVar1 = 0;
    goto LAB_00549812;
  }
  iVar7 = 0;
  if (psVar8 != (stack_st_PKCS7_SIGNER_INFO *)0x0) {
    for (; iVar1 = OPENSSL_sk_num(psVar8), iVar7 < iVar1; iVar7 = iVar7 + 1) {
      si = (PKCS7_SIGNER_INFO *)OPENSSL_sk_value(psVar8,iVar7);
      if (si->pkey != (EVP_PKEY *)0x0) {
        iVar1 = OBJ_obj2nid(si->digest_alg->algorithm);
        lVar6 = PKCS7_find_digest(&local_98,bio,iVar1);
        if ((lVar6 == 0) || (iVar1 = EVP_MD_CTX_copy_ex(out,local_98), iVar1 == 0))
        goto LAB_005497d0;
        iVar1 = OPENSSL_sk_num(si->auth_attr);
        if (0 < iVar1) {
          pAVar3 = PKCS7_get_signed_attribute(si,0x34);
          if ((pAVar3 == (ASN1_TYPE *)0x0) &&
             (iVar1 = PKCS7_add0_attrib_signing_time(si,(ASN1_TIME *)0x0), iVar1 == 0)) {
            ERR_new();
            uVar2 = 0x2c8;
          }
          else {
            iVar1 = EVP_DigestFinal_ex(out,local_88,&local_90);
            if (iVar1 == 0) {
              ERR_new();
              ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x2cf,"do_pkcs7_signed_attrib");
              ERR_set_error(0x21,0x80006,0);
              iVar1 = 0;
              goto LAB_00549812;
            }
            iVar1 = PKCS7_add1_attrib_digest(si,local_88,local_90);
            if (iVar1 != 0) {
              iVar1 = PKCS7_SIGNER_INFO_sign(si);
              if (iVar1 != 0) goto LAB_00549658;
              goto LAB_00549812;
            }
            ERR_new();
            uVar2 = 0x2d3;
          }
          iVar1 = 0;
          ERR_set_debug("../crypto/pkcs7/pk7_doit.c",uVar2,"do_pkcs7_signed_attrib");
          ERR_set_error(0x21,0xc0100,0);
          goto LAB_00549812;
        }
        local_90 = EVP_PKEY_get_size(si->pkey);
        ptr = CRYPTO_malloc(local_90,"../crypto/pkcs7/pk7_doit.c",0x358);
        if (ptr == (void *)0x0) goto LAB_005497d0;
        uVar4 = ossl_pkcs7_ctx_get0_propq(uVar2);
        uVar5 = ossl_pkcs7_ctx_get0_libctx(uVar2);
        iVar1 = EVP_SignFinal_ex(out,ptr,&local_90,si->pkey,uVar5,uVar4);
        if (iVar1 == 0) {
          CRYPTO_free(ptr);
          ERR_new();
          ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x360,"PKCS7_dataFinal");
          ERR_set_error(0x21,0x80006,0);
          goto LAB_005497d0;
        }
        ASN1_STRING_set0(si->enc_digest,ptr,local_90);
      }
LAB_00549658:
    }
  }
LAB_005497e2:
  iVar1 = OBJ_obj2nid(p7->type);
  if ((iVar1 == 0x16) && (lVar6 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar6 != 0)) {
LAB_0054980c:
    iVar1 = 1;
  }
  else {
    if (local_b0 != (ASN1_STRING *)0x0) {
LAB_005497fd:
      if ((local_b0->flags & 0x10) == 0) {
        bp = BIO_find_type(bio,0x401);
        if (bp == (BIO *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x37e,"PKCS7_dataFinal");
          ERR_set_error(0x21,0x6b,0);
          goto LAB_005497d0;
        }
        lVar6 = BIO_ctrl(bp,3,0,&local_90);
        BIO_set_flags(bp,0x200);
        BIO_ctrl(bp,0x82,0,(void *)0x0);
        ASN1_STRING_set0(local_b0,(void *)CONCAT44(uStack_8c,local_90),(int)lVar6);
      }
      goto LAB_0054980c;
    }
LAB_005497d0:
    iVar1 = 0;
  }
LAB_00549812:
  EVP_MD_CTX_free(out);
LAB_00549822:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

