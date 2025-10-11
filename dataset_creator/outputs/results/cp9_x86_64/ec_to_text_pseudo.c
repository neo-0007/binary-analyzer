
uint ec_to_text(BIO *param_1,EC_KEY *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  point_conversion_form_t pVar4;
  EC_GROUP *group;
  BIGNUM *pBVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  BN_CTX *ctx;
  uchar *puVar9;
  long lVar10;
  BIGNUM *pBVar11;
  BIGNUM *pBVar12;
  long lVar13;
  EC_POINT *pEVar14;
  long lVar15;
  long in_FS_OFFSET;
  char *local_88;
  long local_80;
  long local_58;
  void *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (void *)0x0;
  if ((param_1 == (BIO *)0x0) || (param_2 == (EC_KEY *)0x0)) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x1f5,"ec_to_text")
    ;
    ERR_set_error(0x39,0xc0102,0);
    goto LAB_00460d23;
  }
  group = EC_KEY_get0_group(param_2);
  if (group == (EC_GROUP *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x1fa,"ec_to_text")
    ;
    ERR_set_error(0x39,0x9e,0);
    goto LAB_00460d23;
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      local_88 = (char *)0x0;
      local_80 = 0;
      if ((param_3 & 4) != 0) {
        local_88 = "EC-Parameters";
      }
      lVar6 = 0;
LAB_00460be1:
      uVar1 = EC_GROUP_order_bits(group);
      iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",local_88,(ulong)uVar1);
      uVar1 = 0;
      if ((((0 < iVar2) &&
           ((local_58 == 0 ||
            (uVar1 = print_labeled_buf(param_1,"priv:",local_58,lVar6), uVar1 != 0)))) &&
          ((local_50 == (void *)0x0 ||
           (uVar1 = print_labeled_buf(param_1,&DAT_007d9934,local_50,local_80), uVar1 != 0)))) &&
         (uVar1 = param_3 & 4, (param_3 & 4) != 0)) {
        uVar7 = ossl_ec_key_get_libctx(param_2);
        uVar3 = EC_GROUP_get_asn1_flag(group);
        uVar3 = uVar3 & 1;
        if (uVar3 == 0) {
          ctx = (BN_CTX *)BN_CTX_new_ex(uVar7);
          uVar1 = 0;
          if (ctx != (BN_CTX *)0x0) {
            BN_CTX_start(ctx);
            iVar2 = EC_GROUP_get_field_type(group);
            lVar13 = EC_GROUP_get0_order(group);
            if (lVar13 != 0) {
              puVar9 = EC_GROUP_get0_seed(group);
              local_88 = (char *)0x0;
              if (puVar9 != (uchar *)0x0) {
                local_88 = (char *)EC_GROUP_get_seed_len(group);
              }
              lVar10 = EC_GROUP_get0_cofactor(group);
              pcVar8 = OBJ_nid2sn(iVar2);
              iVar2 = BIO_printf(param_1,"Field Type: %s\n",pcVar8);
              if (0 < iVar2) {
                pBVar5 = BN_CTX_get(ctx);
                pBVar11 = BN_CTX_get(ctx);
                pBVar12 = BN_CTX_get(ctx);
                if ((pBVar12 != (BIGNUM *)0x0) &&
                   (iVar2 = EC_GROUP_get_curve(group,pBVar5,pBVar11,pBVar12,ctx), iVar2 != 0)) {
                  iVar2 = EC_GROUP_get_field_type(group);
                  pcVar8 = "Prime:";
                  if (iVar2 == 0x197) {
                    iVar2 = EC_GROUP_get_basis_type(group);
                    if (iVar2 != 0) {
                      pcVar8 = OBJ_nid2sn(iVar2);
                      iVar2 = BIO_printf(param_1,"Basis Type: %s\n",pcVar8);
                      if (0 < iVar2) {
                        pcVar8 = "Polynomial:";
                        goto LAB_00460f1b;
                      }
                    }
                  }
                  else {
LAB_00460f1b:
                    iVar2 = print_labeled_bignum(param_1,pcVar8,pBVar5);
                    if (((iVar2 != 0) &&
                        (iVar2 = print_labeled_bignum(param_1,"A:   ",pBVar11), iVar2 != 0)) &&
                       (iVar2 = print_labeled_bignum(param_1,"B:   ",pBVar12), iVar2 != 0)) {
                      local_48 = 0;
                      pVar4 = EC_GROUP_get_point_conversion_form(group);
                      pEVar14 = EC_GROUP_get0_generator(group);
                      if (pEVar14 != (EC_POINT *)0x0) {
                        if (pVar4 == POINT_CONVERSION_UNCOMPRESSED) {
                          pcVar8 = "Generator (uncompressed):";
                        }
                        else if (pVar4 == POINT_CONVERSION_HYBRID) {
                          pcVar8 = "Generator (hybrid):";
                        }
                        else {
                          if (pVar4 != POINT_CONVERSION_COMPRESSED) goto LAB_00460f30;
                          pcVar8 = "Generator (compressed):";
                        }
                        lVar15 = EC_POINT_point2buf(group,pEVar14,pVar4,&local_48,ctx);
                        if (lVar15 != 0) {
                          iVar2 = print_labeled_buf(param_1,pcVar8,local_48,lVar15);
                          CRYPTO_clear_free(local_48,lVar15,
                                            "../providers/implementations/encode_decode/encode_key2text.c"
                                            ,0x1a7);
                          if ((((iVar2 != 0) &&
                               (iVar2 = print_labeled_bignum(param_1,"Order: ",lVar13), iVar2 != 0))
                              && ((lVar10 == 0 ||
                                  (iVar2 = print_labeled_bignum(param_1,"Cofactor: ",lVar10),
                                  iVar2 != 0)))) && (uVar3 = 1, puVar9 != (uchar *)0x0)) {
                            iVar2 = print_labeled_buf(param_1,"Seed:",puVar9,local_88);
                            uVar3 = (uint)(iVar2 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00460f30:
            BN_CTX_end(ctx);
            BN_CTX_free(ctx);
            uVar1 = uVar3;
          }
        }
        else {
          uVar1 = EC_GROUP_get_curve_name(group);
          if (uVar1 != 0) {
            pcVar8 = OBJ_nid2sn(uVar1);
            iVar2 = BIO_printf(param_1,"%s: %s\n","ASN1 OID",pcVar8);
            if (iVar2 < 1) {
              uVar1 = 0;
            }
            else {
              lVar13 = EC_curve_nid2nist(uVar1);
              uVar1 = uVar3;
              if (lVar13 != 0) {
                iVar2 = BIO_printf(param_1,"%s: %s\n","NIST CURVE",lVar13);
                uVar1 = (uint)(0 < iVar2);
              }
            }
          }
        }
      }
    }
    else {
      lVar6 = 0;
      local_88 = "Public-Key";
LAB_00460ca7:
      pEVar14 = EC_KEY_get0_public_key(param_2);
      if (pEVar14 == (EC_POINT *)0x0) {
        ERR_new();
        uVar1 = 0;
        ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x214,
                      "ec_to_text");
        ERR_set_error(0x39,0xdc,0);
      }
      else {
        uVar1 = 0;
        pVar4 = EC_KEY_get_conv_form(param_2);
        local_80 = EC_KEY_key2buf(param_2,pVar4,&local_50,0);
        if (local_80 != 0) goto LAB_00460be1;
      }
    }
  }
  else {
    pBVar5 = EC_KEY_get0_private_key(param_2);
    if (pBVar5 == (BIGNUM *)0x0) {
      ERR_new();
      uVar1 = 0;
      lVar6 = 0;
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x209,
                    "ec_to_text");
      ERR_set_error(0x39,0xdd,0);
    }
    else {
      lVar6 = EC_KEY_priv2buf(param_2,&local_58);
      uVar1 = 0;
      if (lVar6 != 0) {
        local_88 = "Private-Key";
        if ((param_3 & 2) != 0) goto LAB_00460ca7;
        local_80 = 0;
        goto LAB_00460be1;
      }
    }
  }
  CRYPTO_clear_free(local_58,lVar6,"../providers/implementations/encode_decode/encode_key2text.c",
                    0x229);
  CRYPTO_free(local_50);
LAB_00460d23:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

