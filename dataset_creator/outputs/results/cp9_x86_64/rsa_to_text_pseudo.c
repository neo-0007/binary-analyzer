
uint rsa_to_text(BIO *param_1,long param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  char *pcVar16;
  long in_FS_OFFSET;
  bool bVar17;
  uint local_70;
  char *local_68;
  undefined8 local_58;
  BIGNUM *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_50 = (BIGNUM *)0x0;
  local_48 = 0;
  uVar10 = ossl_rsa_get0_pss_params_30(param_2);
  if ((param_1 == (BIO *)0x0) || (param_2 == 0)) {
    ERR_new();
    uVar3 = 0;
    lVar13 = 0;
    lVar12 = 0;
    lVar11 = 0;
    ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x290,"rsa_to_text"
                 );
    ERR_set_error(0x39,0xc0102,0);
  }
  else {
    lVar11 = OPENSSL_sk_new_null();
    lVar12 = OPENSSL_sk_new_null();
    lVar13 = OPENSSL_sk_new_null();
    if ((lVar11 == 0 || lVar12 == 0) || (lVar13 == 0)) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../providers/implementations/encode_decode/encode_key2text.c",0x299,
                    "rsa_to_text");
      ERR_set_error(0x39,0xc0100,0);
    }
    else {
      local_70 = param_3 & 1;
      if ((param_3 & 1) == 0) {
        bVar17 = (param_3 & 2) == 0;
        local_68 = "Exponent:";
        if (bVar17) {
          local_68 = (char *)0x0;
        }
        pcVar16 = "Modulus:";
        if (bVar17) {
          pcVar16 = (char *)0x0;
        }
        pcVar14 = "RSA key";
        if (!bVar17) {
          pcVar14 = "Public-Key";
        }
        RSA_get0_key(param_2,&local_50,&local_48,&local_58);
        ossl_rsa_get0_all_params(param_2,lVar11,lVar12,lVar13);
        OPENSSL_sk_num(lVar11);
        uVar1 = BN_num_bits(local_50);
        uVar3 = 0;
        iVar2 = BIO_printf(param_1,"%s: (%d bit)\n",pcVar14,(ulong)uVar1);
        if (iVar2 < 1) goto LAB_00460220;
      }
      else {
        RSA_get0_key(param_2,&local_50,&local_48,&local_58);
        ossl_rsa_get0_all_params(param_2,lVar11,lVar12,lVar13);
        uVar1 = OPENSSL_sk_num(lVar11);
        uVar4 = BN_num_bits(local_50);
        uVar3 = 0;
        iVar2 = BIO_printf(param_1,"%s: (%d bit, %d primes)\n","Private-Key",(ulong)uVar4,
                           (ulong)uVar1);
        if (iVar2 < 1) goto LAB_00460220;
        pcVar16 = "modulus:";
        local_68 = "publicExponent:";
      }
      uVar3 = print_labeled_bignum(param_1,pcVar16,local_50);
      if ((uVar3 != 0) && (uVar3 = print_labeled_bignum(param_1,local_68,local_48), uVar3 != 0)) {
        if (local_70 == 0) {
LAB_00460384:
          if ((param_3 & 0x80) != 0) {
            iVar2 = RSA_test_flags(param_2,0xf000);
            if (iVar2 == 0) {
              uVar3 = 1;
              iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar10);
              if (iVar2 == 0) {
                iVar2 = BIO_printf(param_1,"(INVALID PSS PARAMETERS)\n");
                uVar3 = (uint)(0 < iVar2);
              }
              goto LAB_00460220;
            }
            if (iVar2 == 0x1000) {
              iVar2 = ossl_rsa_pss_params_30_is_unrestricted(uVar10);
              if (iVar2 == 0) {
                iVar2 = ossl_rsa_pss_params_30_hashalg(uVar10);
                iVar5 = ossl_rsa_pss_params_30_maskgenalg(uVar10);
                iVar6 = ossl_rsa_pss_params_30_maskgenhashalg(uVar10);
                iVar7 = ossl_rsa_pss_params_30_saltlen(uVar10);
                iVar8 = ossl_rsa_pss_params_30_trailerfield(uVar10);
                iVar9 = BIO_printf(param_1,"PSS parameter restrictions:\n");
                uVar3 = 0;
                if (0 < iVar9) {
                  pcVar16 = "";
                  if (iVar2 == 0x40) {
                    pcVar16 = " (default)";
                  }
                  uVar10 = ossl_rsa_oaeppss_nid2name(iVar2);
                  iVar2 = BIO_printf(param_1,"  Hash Algorithm: %s%s\n",uVar10,pcVar16);
                  if (0 < iVar2) {
                    if ((iVar5 != 0x38f) || (pcVar16 = " (default)", iVar6 != 0x40)) {
                      pcVar16 = "";
                    }
                    uVar10 = ossl_rsa_oaeppss_nid2name(iVar6);
                    uVar15 = ossl_rsa_mgf_nid2name(iVar5);
                    iVar2 = BIO_printf(param_1,"  Mask Algorithm: %s with %s%s\n",uVar15,uVar10,
                                       pcVar16);
                    if (0 < iVar2) {
                      pcVar16 = "";
                      if (iVar7 == 0x14) {
                        pcVar16 = " (default)";
                      }
                      iVar2 = BIO_printf(param_1,"  Minimum Salt Length: %d%s\n",iVar7,pcVar16);
                      if (0 < iVar2) {
                        pcVar16 = "";
                        if (iVar8 == 1) {
                          pcVar16 = " (default)";
                        }
                        iVar2 = BIO_printf(param_1,"  Trailer Field: 0x%x%s\n",iVar8,pcVar16);
                        uVar3 = (uint)(0 < iVar2);
                      }
                    }
                  }
                }
              }
              else {
                iVar2 = BIO_printf(param_1,"No PSS parameter restrictions\n");
                uVar3 = (uint)(0 < iVar2);
              }
              goto LAB_00460220;
            }
          }
          uVar3 = 1;
        }
        else {
          uVar3 = print_labeled_bignum(param_1,"privateExponent:",local_58);
          if (uVar3 != 0) {
            uVar15 = OPENSSL_sk_value(lVar11,0);
            uVar3 = print_labeled_bignum(param_1,"prime1:",uVar15);
            if (uVar3 != 0) {
              uVar15 = OPENSSL_sk_value(lVar11,1);
              uVar3 = print_labeled_bignum(param_1,"prime2:",uVar15);
              if (uVar3 != 0) {
                uVar15 = OPENSSL_sk_value(lVar12,0);
                uVar3 = print_labeled_bignum(param_1,"exponent1:",uVar15);
                if (uVar3 != 0) {
                  uVar15 = OPENSSL_sk_value(lVar12,1);
                  uVar3 = print_labeled_bignum(param_1,"exponent2:",uVar15);
                  if (uVar3 != 0) {
                    uVar15 = OPENSSL_sk_value(lVar13,0);
                    uVar3 = print_labeled_bignum(param_1,"coefficient:",uVar15);
                    if (uVar3 != 0) {
                      uVar1 = 2;
                      do {
                        iVar2 = OPENSSL_sk_num(lVar11);
                        if (iVar2 <= (int)uVar1) goto LAB_00460384;
                        uVar4 = uVar1 + 1;
                        iVar2 = BIO_printf(param_1,"prime%d:",(ulong)uVar4);
                        if (iVar2 < 1) {
LAB_0046076e:
                          uVar3 = 0;
                          break;
                        }
                        uVar15 = OPENSSL_sk_value(lVar11,uVar1);
                        uVar3 = print_labeled_bignum(param_1,0,uVar15);
                        if (uVar3 == 0) break;
                        iVar2 = BIO_printf(param_1,"exponent%d:",(ulong)uVar4);
                        if (iVar2 < 1) goto LAB_0046076e;
                        uVar15 = OPENSSL_sk_value(lVar12,uVar1);
                        uVar3 = print_labeled_bignum(param_1,0,uVar15);
                        if (uVar3 == 0) break;
                        iVar2 = BIO_printf(param_1,"coefficient%d:",(ulong)uVar4);
                        if (iVar2 < 1) goto LAB_0046076e;
                        uVar15 = OPENSSL_sk_value(lVar13,uVar1 - 1);
                        uVar3 = print_labeled_bignum(param_1,0,uVar15);
                        uVar1 = uVar4;
                      } while (uVar3 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_00460220:
  OPENSSL_sk_free(lVar11);
  OPENSSL_sk_free(lVar12);
  OPENSSL_sk_free(lVar13);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar3;
}

