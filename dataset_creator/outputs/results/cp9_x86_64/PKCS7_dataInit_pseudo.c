
BIO * PKCS7_dataInit(PKCS7 *p7,BIO *bio)

{
  PKCS7_ENC_CONTENT *pPVar1;
  PKCS7_SIGN_ENVELOPE *pPVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BIO_METHOD *pBVar10;
  BIO *bp;
  ASN1_OBJECT *pAVar11;
  EVP_CIPHER *pEVar12;
  long lVar13;
  long lVar14;
  EVP_PKEY_CTX *ctx;
  uchar *out;
  ASN1_TYPE *type;
  stack_st_X509_ALGOR *psVar15;
  EVP_CIPHER *cipher;
  BIO *pBVar16;
  long in_FS_OFFSET;
  BIO *local_f8;
  uchar *local_e8;
  X509_ALGOR *local_d8;
  stack_st_PKCS7_RECIP_INFO *local_d0;
  int *local_c8;
  BIO *local_b0;
  EVP_CIPHER_CTX *local_a8;
  int local_a0 [2];
  uchar local_98 [16];
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (BIO *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0xe8,"PKCS7_dataInit");
    ERR_set_error(0x21,0x8f,0);
    local_f8 = (BIO *)0x0;
    goto LAB_00548313;
  }
  uVar6 = ossl_pkcs7_get0_ctx();
  uVar7 = ossl_pkcs7_ctx_get0_libctx(uVar6);
  uVar8 = ossl_pkcs7_ctx_get0_propq(uVar6);
  if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0xfa,"PKCS7_dataInit");
    ERR_set_error(0x21,0x7a,0);
    local_f8 = (BIO *)0x0;
    goto LAB_00548313;
  }
  iVar3 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  switch(iVar3) {
  case 0x15:
    local_c8 = (int *)0x0;
    psVar15 = (stack_st_X509_ALGOR *)0x0;
    cipher = (EVP_CIPHER *)0x0;
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    local_e8 = (uchar *)0x0;
    break;
  case 0x16:
    cipher = (EVP_CIPHER *)0x0;
    psVar15 = ((p7->d).sign)->md_algs;
    local_c8 = (int *)PKCS7_get_octet_string(((p7->d).sign)->contents);
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    local_e8 = (uchar *)0x0;
    break;
  case 0x17:
    local_c8 = (int *)0x0;
    psVar15 = (stack_st_X509_ALGOR *)0x0;
    local_e8 = (uchar *)0x0;
    local_d0 = ((p7->d).enveloped)->recipientinfo;
    pPVar1 = ((p7->d).enveloped)->enc_data;
    cipher = pPVar1->cipher;
    local_d8 = pPVar1->algorithm;
    if (cipher != (EVP_CIPHER *)0x0) break;
    ERR_new();
    uVar6 = 0x115;
LAB_0054826e:
    bp = (BIO *)0x0;
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",uVar6,"PKCS7_dataInit");
    ERR_set_error(0x21,0x74,0);
    pEVar12 = (EVP_CIPHER *)0x0;
    pBVar16 = (BIO *)0x0;
    goto LAB_005482f8;
  case 0x18:
    local_c8 = (int *)0x0;
    pPVar2 = (p7->d).signed_and_enveloped;
    local_e8 = (uchar *)0x0;
    local_d0 = pPVar2->recipientinfo;
    psVar15 = pPVar2->md_algs;
    cipher = pPVar2->enc_data->cipher;
    local_d8 = pPVar2->enc_data->algorithm;
    if (cipher == (EVP_CIPHER *)0x0) {
      ERR_new();
      uVar6 = 0x10c;
      goto LAB_0054826e;
    }
    break;
  case 0x19:
    psVar15 = (stack_st_X509_ALGOR *)0x0;
    cipher = (EVP_CIPHER *)0x0;
    local_e8 = ((p7->d).data)->data;
    local_c8 = (int *)PKCS7_get_octet_string(((p7->d).data)->flags);
    local_d8 = (X509_ALGOR *)0x0;
    local_d0 = (stack_st_PKCS7_RECIP_INFO *)0x0;
    break;
  default:
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x120,"PKCS7_dataInit");
    ERR_set_error(0x21,0x70,0);
    pEVar12 = (EVP_CIPHER *)0x0;
    pBVar16 = (BIO *)0x0;
    goto LAB_005482f8;
  }
  for (iVar3 = 0; iVar4 = OPENSSL_sk_num(psVar15), iVar3 < iVar4; iVar3 = iVar3 + 1) {
    uVar9 = OPENSSL_sk_value(psVar15,iVar3);
    iVar4 = pkcs7_bio_add_digest(&local_b0,uVar9,uVar6);
    if (iVar4 == 0) goto LAB_00548340;
  }
  if ((local_e8 == (uchar *)0x0) ||
     (iVar3 = pkcs7_bio_add_digest(&local_b0,local_e8,uVar6), iVar3 != 0)) {
    bp = local_b0;
    if (cipher == (EVP_CIPHER *)0x0) {
LAB_005483a0:
      local_b0 = bp;
      local_f8 = bio;
      if (bio != (BIO *)0x0) {
LAB_005483b0:
        pBVar16 = local_b0;
        if (local_b0 != (BIO *)0x0) {
          BIO_push(local_b0,local_f8);
          local_f8 = pBVar16;
        }
        goto LAB_00548313;
      }
      iVar3 = OBJ_obj2nid(p7->type);
      if ((iVar3 == 0x16) && (lVar13 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar13 != 0)) {
        pBVar10 = BIO_s_null();
        local_f8 = BIO_new(pBVar10);
LAB_005485a9:
        if (local_f8 != (BIO *)0x0) goto LAB_005483b0;
      }
      else {
        if ((local_c8 != (int *)0x0) && (0 < *local_c8)) {
          local_f8 = BIO_new_mem_buf(*(void **)(local_c8 + 2),*local_c8);
          goto LAB_005485a9;
        }
        pBVar10 = BIO_s_mem();
        local_f8 = BIO_new(pBVar10);
        if (local_f8 != (BIO *)0x0) {
          BIO_ctrl(local_f8,0x82,0,(void *)0x0);
          goto LAB_005483b0;
        }
      }
      pEVar12 = (EVP_CIPHER *)0x0;
      bp = (BIO *)0x0;
      pBVar16 = local_b0;
    }
    else {
      pBVar10 = BIO_f_cipher();
      bp = BIO_new(pBVar10);
      if (bp == (BIO *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x132,"PKCS7_dataInit");
        ERR_set_error(0x21,0x80020,0);
        pEVar12 = (EVP_CIPHER *)0x0;
        pBVar16 = local_b0;
      }
      else {
        BIO_ctrl(bp,0x81,0,&local_a8);
        iVar3 = EVP_CIPHER_get_key_length(cipher);
        iVar4 = EVP_CIPHER_get_iv_length(cipher);
        iVar5 = EVP_CIPHER_get_type(cipher);
        pAVar11 = OBJ_nid2obj(iVar5);
        local_d8->algorithm = pAVar11;
        if ((iVar4 < 1) || (iVar5 = RAND_bytes_ex(uVar7,local_98,(long)iVar4), 0 < iVar5)) {
          ERR_set_mark();
          uVar6 = EVP_CIPHER_get0_name(cipher);
          pEVar12 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar7,uVar6,uVar8);
          ERR_pop_to_mark();
          if (pEVar12 != (EVP_CIPHER *)0x0) {
            cipher = pEVar12;
          }
          iVar5 = EVP_CipherInit_ex(local_a8,cipher,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,1);
          pBVar16 = local_b0;
          if (iVar5 < 1) goto LAB_005482f8;
          EVP_CIPHER_free(pEVar12);
          iVar5 = EVP_CIPHER_CTX_rand_key(local_a8,local_88);
          if ((0 < iVar5) &&
             (iVar5 = EVP_CipherInit_ex(local_a8,(EVP_CIPHER *)0x0,(ENGINE *)0x0,local_88,local_98,1
                                       ), 0 < iVar5)) {
            if (0 < iVar4) {
              type = local_d8->parameter;
              if (type == (ASN1_TYPE *)0x0) {
                type = ASN1_TYPE_new();
                local_d8->parameter = type;
                if (type == (ASN1_TYPE *)0x0) goto LAB_005482f0;
              }
              iVar4 = EVP_CIPHER_param_to_asn1(local_a8,type);
              if (iVar4 < 0) goto LAB_005482f0;
            }
            for (iVar4 = 0; iVar5 = OPENSSL_sk_num(local_d0), iVar4 < iVar5; iVar4 = iVar4 + 1) {
              lVar13 = OPENSSL_sk_value(local_d0,iVar4);
              uVar6 = *(undefined8 *)(lVar13 + 0x28);
              lVar14 = X509_get0_pubkey(*(undefined8 *)(lVar13 + 0x20));
              if (lVar14 == 0) goto LAB_005482f0;
              uVar7 = ossl_pkcs7_ctx_get0_propq(uVar6);
              uVar6 = ossl_pkcs7_ctx_get0_libctx(uVar6);
              ctx = (EVP_PKEY_CTX *)EVP_PKEY_CTX_new_from_pkey(uVar6,lVar14,uVar7);
              if (ctx == (EVP_PKEY_CTX *)0x0) goto LAB_005482f0;
              iVar5 = EVP_PKEY_encrypt_init(ctx);
              if (iVar5 < 1) {
LAB_00548350:
                EVP_PKEY_CTX_free(ctx);
                CRYPTO_free((void *)0x0);
                pEVar12 = (EVP_CIPHER *)0x0;
                pBVar16 = local_b0;
                goto LAB_005482f8;
              }
              iVar5 = EVP_PKEY_encrypt(ctx,(uchar *)0x0,(size_t *)local_a0,local_88,(long)iVar3);
              if (iVar5 < 1) goto LAB_00548350;
              out = (uchar *)CRYPTO_malloc(local_a0[0],"../crypto/pkcs7/pk7_doit.c",0x85);
              if (out == (uchar *)0x0) {
                ERR_new();
                ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x88,"pkcs7_encode_rinfo");
                ERR_set_error(0x21,0xc0100,0);
                EVP_PKEY_CTX_free(ctx);
                CRYPTO_free((void *)0x0);
                pEVar12 = (EVP_CIPHER *)0x0;
                pBVar16 = local_b0;
                goto LAB_005482f8;
              }
              iVar5 = EVP_PKEY_encrypt(ctx,out,(size_t *)local_a0,local_88,(long)iVar3);
              if (iVar5 < 1) {
                EVP_PKEY_CTX_free(ctx);
                CRYPTO_free(out);
                pEVar12 = (EVP_CIPHER *)0x0;
                pBVar16 = local_b0;
                goto LAB_005482f8;
              }
              ASN1_STRING_set0(*(ASN1_STRING **)(lVar13 + 0x18),out,local_a0[0]);
              EVP_PKEY_CTX_free(ctx);
              CRYPTO_free((void *)0x0);
            }
            OPENSSL_cleanse(local_88,(long)iVar3);
            if (local_b0 != (BIO *)0x0) {
              BIO_push(local_b0,bp);
              bp = local_b0;
            }
            goto LAB_005483a0;
          }
        }
LAB_005482f0:
        pEVar12 = (EVP_CIPHER *)0x0;
        pBVar16 = local_b0;
      }
    }
  }
  else {
LAB_00548340:
    pEVar12 = (EVP_CIPHER *)0x0;
    bp = (BIO *)0x0;
    pBVar16 = local_b0;
  }
LAB_005482f8:
  EVP_CIPHER_free(pEVar12);
  BIO_free_all(pBVar16);
  BIO_free_all(bp);
  local_f8 = (BIO *)0x0;
LAB_00548313:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_f8;
}

