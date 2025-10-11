
BIO * PKCS7_dataDecode(PKCS7 *p7,EVP_PKEY *pkey,BIO *in_bio,X509 *pcert)

{
  PKCS7_ENC_CONTENT *pPVar1;
  ASN1_INTEGER *y;
  PKCS7_SIGN_ENVELOPE *pPVar2;
  uchar *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  BIO *bp;
  X509_NAME *b;
  ASN1_INTEGER *x;
  undefined8 *puVar10;
  BIO_METHOD *pBVar11;
  BIO *bp_00;
  EVP_MD *pEVar12;
  long lVar13;
  EVP_MD *parg;
  uchar *key;
  BIO *b_00;
  long lVar14;
  stack_st_X509_ALGOR *psVar15;
  BIO *pBVar16;
  long in_FS_OFFSET;
  uchar *local_e0;
  EVP_CIPHER *local_d8;
  BIO *local_d0;
  EVP_CIPHER *local_c8;
  ASN1_OCTET_STRING *local_b8;
  stack_st_PKCS7_RECIP_INFO *local_a8;
  X509_ALGOR *local_a0;
  int local_8c;
  EVP_CIPHER_CTX *local_88;
  uchar *local_80;
  char local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_8c = 0;
  local_88 = (EVP_CIPHER_CTX *)0x0;
  local_80 = (uchar *)0x0;
  if (p7 == (PKCS7 *)0x0) {
    ERR_new();
    bp = (BIO *)0x0;
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1a9,"PKCS7_dataDecode");
    ERR_set_error(0x21,0x8f,0);
    goto LAB_00548773;
  }
  uVar7 = ossl_pkcs7_get0_ctx();
  uVar8 = ossl_pkcs7_ctx_get0_libctx(uVar7);
  uVar9 = ossl_pkcs7_ctx_get0_propq(uVar7);
  if ((p7->d).ptr == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1b2,"PKCS7_dataDecode");
    ERR_set_error(0x21,0x7a,0);
    bp = (BIO *)0x0;
    goto LAB_00548773;
  }
  iVar4 = OBJ_obj2nid(p7->type);
  p7->state = 0;
  if (iVar4 == 0x17) {
    local_a8 = ((p7->d).enveloped)->recipientinfo;
    pPVar1 = ((p7->d).enveloped)->enc_data;
    local_a0 = pPVar1->algorithm;
    local_b8 = pPVar1->enc_data;
    OBJ_obj2txt(local_78,0x32,local_a0->algorithm,0);
    ERR_set_mark();
    local_c8 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar8,local_78,uVar9);
    local_d8 = local_c8;
    if ((local_c8 == (EVP_CIPHER *)0x0) &&
       (local_d8 = EVP_get_cipherbyname(local_78), local_d8 == (EVP_CIPHER *)0x0)) {
      pBVar16 = (BIO *)0x0;
      b_00 = (BIO *)0x0;
      lVar14 = 0;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1ef,"PKCS7_dataDecode");
      ERR_set_error(0x21,0x6f,0);
      lVar13 = 0;
      local_d8 = (EVP_CIPHER *)0x0;
      local_e0 = (uchar *)0x0;
      bp_00 = (BIO *)0x0;
      goto LAB_00548718;
    }
    ERR_pop_to_mark();
    if (local_b8 == (ASN1_OCTET_STRING *)0x0 && in_bio == (BIO *)0x0) {
LAB_00548d10:
      lVar14 = 0;
      pBVar16 = (BIO *)0x0;
      bp_00 = (BIO *)0x0;
      ERR_new();
      b_00 = (BIO *)0x0;
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1fb,"PKCS7_dataDecode");
      ERR_set_error(0x21,0x7a,0);
      lVar13 = 0;
      local_d8 = (EVP_CIPHER *)0x0;
      local_e0 = (uchar *)0x0;
    }
    else {
      b_00 = (BIO *)0x0;
LAB_0054881d:
      pBVar11 = BIO_f_cipher();
      bp = BIO_new(pBVar11);
      pBVar16 = bp;
      if (bp == (BIO *)0x0) {
        bp_00 = (BIO *)0x0;
        lVar14 = 0;
        ERR_new();
        ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x228,"PKCS7_dataDecode");
        ERR_set_error(0x21,0x80020,0);
        lVar13 = 0;
        local_d8 = (EVP_CIPHER *)0x0;
        local_e0 = (uchar *)0x0;
      }
      else {
        iVar4 = 0;
        if (pcert == (X509 *)0x0) {
          for (; iVar5 = OPENSSL_sk_num(local_a8), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            lVar13 = OPENSSL_sk_value(local_a8,iVar4);
            *(undefined8 *)(lVar13 + 0x28) = uVar7;
            EVP_CIPHER_get_key_length(local_d8);
            iVar5 = pkcs7_decrypt_rinfo(&local_80,&local_8c,lVar13,pkey);
            if (iVar5 < 0) {
              bp_00 = (BIO *)0x0;
              lVar14 = 0;
              lVar13 = (long)local_8c;
              local_d8 = (EVP_CIPHER *)local_80;
              local_e0 = (uchar *)0x0;
              goto LAB_00548718;
            }
            ERR_clear_error();
          }
LAB_00548ee2:
          local_88 = (EVP_CIPHER_CTX *)0x0;
          BIO_ctrl(bp,0x81,0,&local_88);
          iVar4 = EVP_CipherInit_ex(local_88,local_d8,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,0);
          puVar3 = local_80;
          local_d8 = (EVP_CIPHER *)local_80;
          if (((iVar4 < 1) ||
              (iVar4 = EVP_CIPHER_asn1_to_param(local_88,local_a0->parameter), iVar4 < 0)) ||
             (iVar4 = EVP_CIPHER_CTX_get_key_length(local_88), iVar4 < 1)) {
            local_e0 = (uchar *)0x0;
            lVar13 = (long)local_8c;
            lVar14 = 0;
            bp_00 = (BIO *)0x0;
          }
          else {
            lVar14 = (long)iVar4;
            key = (uchar *)CRYPTO_malloc(iVar4,"../crypto/pkcs7/pk7_doit.c",0x265);
            local_e0 = key;
            if ((key == (uchar *)0x0) || (iVar5 = EVP_CIPHER_CTX_rand_key(local_88,key), iVar5 < 1))
            {
              lVar13 = (long)local_8c;
              bp_00 = (BIO *)0x0;
            }
            else {
              if (puVar3 == (uchar *)0x0) {
                local_e0 = (uchar *)0x0;
                lVar13 = lVar14;
                local_d8 = (EVP_CIPHER *)key;
                local_8c = iVar4;
                local_80 = key;
              }
              else {
                lVar13 = (long)local_8c;
              }
              iVar5 = local_8c;
              iVar6 = EVP_CIPHER_CTX_get_key_length(local_88);
              if ((iVar6 != iVar5) &&
                 (iVar5 = EVP_CIPHER_CTX_set_key_length(local_88,iVar5), iVar5 == 0)) {
                CRYPTO_clear_free(local_d8,lVar13,"../crypto/pkcs7/pk7_doit.c",0x278);
                local_d8 = (EVP_CIPHER *)local_e0;
                local_e0 = (uchar *)0x0;
                lVar13 = lVar14;
                local_8c = iVar4;
                local_80 = (uchar *)local_d8;
              }
              ERR_clear_error();
              iVar5 = EVP_CipherInit_ex(local_88,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)local_d8,
                                        (uchar *)0x0,0);
              if (0 < iVar5) {
                CRYPTO_clear_free(local_d8,lVar13,"../crypto/pkcs7/pk7_doit.c",0x283);
                local_80 = (uchar *)0x0;
                CRYPTO_clear_free(local_e0,lVar14,"../crypto/pkcs7/pk7_doit.c");
                if (b_00 != (BIO *)0x0) {
                  BIO_push(b_00,bp);
                  bp = b_00;
                }
                goto LAB_00548b5e;
              }
              bp_00 = (BIO *)0x0;
            }
          }
        }
        else {
          for (; iVar5 = OPENSSL_sk_num(local_a8), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            lVar13 = OPENSSL_sk_value(local_a8,iVar4);
            b = X509_get_issuer_name(pcert);
            iVar5 = X509_NAME_cmp((X509_NAME *)**(undefined8 **)(lVar13 + 8),b);
            if (iVar5 == 0) {
              y = *(ASN1_INTEGER **)(*(long *)(lVar13 + 8) + 8);
              x = (ASN1_INTEGER *)X509_get0_serialNumber(pcert);
              iVar5 = ASN1_INTEGER_cmp(x,y);
              if (iVar5 == 0) {
                *(undefined8 *)(lVar13 + 0x28) = uVar7;
                iVar4 = pkcs7_decrypt_rinfo(&local_80,&local_8c,lVar13,pkey);
                if (iVar4 < 0) {
                  lVar13 = (long)local_8c;
                  lVar14 = 0;
                  bp_00 = (BIO *)0x0;
                  local_e0 = (uchar *)0x0;
                  local_d8 = (EVP_CIPHER *)local_80;
                  goto LAB_00548718;
                }
                ERR_clear_error();
                goto LAB_00548ee2;
              }
            }
          }
          lVar14 = 0;
          bp_00 = (BIO *)0x0;
          ERR_new();
          ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x23e,"PKCS7_dataDecode");
          ERR_set_error(0x21,0x73,0);
          lVar13 = 0;
          local_d8 = (EVP_CIPHER *)0x0;
          local_e0 = (uchar *)0x0;
        }
      }
    }
  }
  else if (iVar4 == 0x18) {
    pPVar2 = (p7->d).signed_and_enveloped;
    local_a8 = pPVar2->recipientinfo;
    psVar15 = pPVar2->md_algs;
    local_b8 = pPVar2->enc_data->enc_data;
    local_a0 = pPVar2->enc_data->algorithm;
    OBJ_obj2txt(local_78,0x32,local_a0->algorithm,0);
    ERR_set_mark();
    local_c8 = (EVP_CIPHER *)EVP_CIPHER_fetch(uVar8,local_78,uVar9);
    local_d8 = local_c8;
    if ((local_c8 != (EVP_CIPHER *)0x0) ||
       (local_d8 = EVP_get_cipherbyname(local_78), local_d8 != (EVP_CIPHER *)0x0)) {
      ERR_pop_to_mark();
      goto LAB_005489f0;
    }
    ERR_clear_last_mark();
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1da,"PKCS7_dataDecode");
    ERR_set_error(0x21,0x6f,0);
LAB_00548de7:
    local_d8 = (EVP_CIPHER *)0x0;
    local_e0 = (uchar *)0x0;
    pBVar16 = (BIO *)0x0;
    bp_00 = (BIO *)0x0;
    b_00 = (BIO *)0x0;
    lVar14 = 0;
    lVar13 = 0;
  }
  else {
    if (iVar4 == 0x16) {
      local_b8 = (ASN1_OCTET_STRING *)PKCS7_get_octet_string(((p7->d).sign)->contents);
      iVar4 = OBJ_obj2nid(p7->type);
      if (((iVar4 != 0x16) || (lVar13 = PKCS7_ctrl(p7,2,0,(char *)0x0), lVar13 == 0)) &&
         (local_b8 == (ASN1_OCTET_STRING *)0x0)) {
        ERR_new();
        ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1c3,"PKCS7_dataDecode");
        ERR_set_error(0x21,0x9b,0);
        local_c8 = (EVP_CIPHER *)0x0;
        goto LAB_00548de7;
      }
      local_a8 = (stack_st_PKCS7_RECIP_INFO *)0x0;
      local_a0 = (X509_ALGOR *)0x0;
      local_d8 = (EVP_CIPHER *)0x0;
      psVar15 = (stack_st_X509_ALGOR *)((p7->d).data)->data;
      local_c8 = (EVP_CIPHER *)0x0;
LAB_005489f0:
      if (local_b8 == (ASN1_OCTET_STRING *)0x0 && in_bio == (BIO *)0x0) goto LAB_00548d10;
      b_00 = (BIO *)0x0;
      if (psVar15 != (stack_st_X509_ALGOR *)0x0) {
        for (iVar4 = 0; iVar5 = OPENSSL_sk_num(psVar15), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          puVar10 = (undefined8 *)OPENSSL_sk_value(psVar15,iVar4);
          pBVar11 = BIO_f_md();
          bp_00 = BIO_new(pBVar11);
          if (bp_00 == (BIO *)0x0) {
            lVar14 = 0;
            ERR_new();
            ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x204,"PKCS7_dataDecode");
            ERR_set_error(0x21,0x80020,0);
            lVar13 = 0;
            local_d8 = (EVP_CIPHER *)0x0;
            local_e0 = (uchar *)0x0;
            pBVar16 = (BIO *)0x0;
            goto LAB_00548718;
          }
          OBJ_obj2txt(local_78,0x32,(ASN1_OBJECT *)*puVar10,0);
          ERR_set_mark();
          pEVar12 = (EVP_MD *)EVP_MD_fetch(uVar8,local_78,uVar9);
          parg = pEVar12;
          if ((pEVar12 == (EVP_MD *)0x0) &&
             (parg = EVP_get_digestbyname(local_78), parg == (EVP_MD *)0x0)) {
            lVar14 = 0;
            ERR_clear_last_mark();
            ERR_new();
            ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x213,"PKCS7_dataDecode");
            ERR_set_error(0x21,0x6d,0);
            lVar13 = 0;
            local_d8 = (EVP_CIPHER *)0x0;
            local_e0 = (uchar *)0x0;
            pBVar16 = (BIO *)0x0;
            goto LAB_00548718;
          }
          ERR_pop_to_mark();
          lVar13 = BIO_ctrl(bp_00,0x6f,0,parg);
          if (lVar13 < 1) {
            lVar14 = 0;
            EVP_MD_free(pEVar12);
            ERR_new();
            ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x21a,"PKCS7_dataDecode");
            ERR_set_error(0x21,0x80020,0);
            lVar13 = 0;
            local_d8 = (EVP_CIPHER *)0x0;
            local_e0 = (uchar *)0x0;
            pBVar16 = (BIO *)0x0;
            goto LAB_00548718;
          }
          EVP_MD_free(pEVar12);
          if (b_00 != (BIO *)0x0) {
            BIO_push(b_00,bp_00);
            bp_00 = b_00;
          }
          b_00 = bp_00;
        }
      }
      if (local_d8 != (EVP_CIPHER *)0x0) goto LAB_0054881d;
      iVar4 = 0;
      bp = b_00;
LAB_00548b5e:
      local_d0 = in_bio;
      if (in_bio == (BIO *)0x0) {
        if (local_b8->length < 1) {
          pBVar11 = BIO_s_mem();
          local_d0 = BIO_new(pBVar11);
          if (local_d0 == (BIO *)0x0) goto LAB_00548cde;
          BIO_ctrl(local_d0,0x82,0,(void *)0x0);
        }
        else {
          local_d0 = BIO_new_mem_buf(local_b8->data,local_b8->length);
          if (local_d0 == (BIO *)0x0) {
LAB_00548cde:
            local_d8 = (EVP_CIPHER *)local_80;
            lVar13 = (long)local_8c;
            lVar14 = (long)iVar4;
            local_e0 = (uchar *)0x0;
            bp_00 = (BIO *)0x0;
            b_00 = bp;
            pBVar16 = (BIO *)0x0;
            goto LAB_00548718;
          }
        }
      }
      BIO_push(bp,local_d0);
      EVP_CIPHER_free(local_c8);
      goto LAB_00548773;
    }
    lVar14 = 0;
    bp_00 = (BIO *)0x0;
    ERR_new();
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x1f5,"PKCS7_dataDecode");
    ERR_set_error(0x21,0x70,0);
    lVar13 = 0;
    local_d8 = (EVP_CIPHER *)0x0;
    local_e0 = (uchar *)0x0;
    local_c8 = (EVP_CIPHER *)0x0;
    b_00 = (BIO *)0x0;
    pBVar16 = (BIO *)0x0;
  }
LAB_00548718:
  EVP_CIPHER_free(local_c8);
  CRYPTO_clear_free(local_d8,lVar13,"../crypto/pkcs7/pk7_doit.c",0x2a3);
  CRYPTO_clear_free(local_e0,lVar14,"../crypto/pkcs7/pk7_doit.c",0x2a4);
  bp = (BIO *)0x0;
  BIO_free_all(b_00);
  BIO_free_all(bp_00);
  BIO_free_all(pBVar16);
  BIO_free_all((BIO *)0x0);
LAB_00548773:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bp;
}

