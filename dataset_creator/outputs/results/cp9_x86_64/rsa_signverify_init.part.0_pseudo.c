
bool rsa_signverify_init_part_0
               (undefined8 *param_1,RSA *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  
  if (param_2 == (RSA *)0x0) {
    param_2 = (RSA *)param_1[2];
    if (param_2 == (RSA *)0x0) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x18b,"rsa_signverify_init");
      ERR_set_error(0x39,0x72,0);
      return false;
    }
  }
  else {
    iVar1 = ossl_rsa_check_key(*param_1,param_2,param_4);
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = RSA_up_ref(param_2);
    if (iVar1 == 0) {
      return false;
    }
    RSA_free((RSA *)param_1[2]);
    param_1[2] = param_2;
  }
  *(undefined4 *)(param_1 + 3) = param_4;
  param_1[0x16] = 0xfffffffffffffffe;
  iVar1 = RSA_test_flags(param_2,0xf000);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd) = 1;
  }
  else {
    if (iVar1 != 0x1000) {
      ERR_new();
      ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1d9,"rsa_signverify_init");
      ERR_set_error(4,0xb2,0);
      return false;
    }
    *(undefined4 *)(param_1 + 0xd) = 6;
    uVar7 = ossl_rsa_get0_pss_params_30(param_1[2]);
    iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar7);
    if (iVar1 == 0) {
      uVar2 = ossl_rsa_pss_params_30_hashalg(uVar7);
      uVar3 = ossl_rsa_pss_params_30_maskgenhashalg(uVar7);
      iVar1 = ossl_rsa_pss_params_30_saltlen(uVar7);
      lVar8 = ossl_rsa_oaeppss_nid2name(uVar2);
      lVar9 = ossl_rsa_oaeppss_nid2name(uVar3);
      if (lVar8 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1b5,"rsa_signverify_init"
                     );
        ERR_set_error(0x39,0x7a,"PSS restrictions lack hash algorithm");
        return false;
      }
      if (lVar9 == 0) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1ba,"rsa_signverify_init"
                     );
        ERR_set_error(0x39,0x7a,"PSS restrictions lack MGF1 hash algorithm");
        return false;
      }
      uVar10 = OPENSSL_strlcpy((long)param_1 + 0x34,lVar8,0x32);
      if (0x31 < uVar10) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1c2,"rsa_signverify_init"
                     );
        ERR_set_error(0x39,0x7a,"hash algorithm name too long");
        return false;
      }
      uVar10 = OPENSSL_strlcpy((long)param_1 + 0x7c,lVar9,0x32);
      if (0x31 < uVar10) {
        ERR_new();
        ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0x1c9,"rsa_signverify_init"
                     );
        ERR_set_error(0x39,0x7a,"MGF1 hash algorithm name too long");
        return false;
      }
      *(int *)(param_1 + 0x16) = iVar1;
      iVar4 = rsa_setup_mgf1_md(param_1,lVar9,param_1[1]);
      if (iVar4 == 0) {
        return false;
      }
      iVar4 = rsa_setup_md(param_1,lVar8,param_1[1]);
      if (iVar4 == 0) {
        return false;
      }
      if (*(int *)(param_1 + 0xd) == 6) {
        iVar4 = RSA_size((RSA *)param_1[2]);
        iVar5 = EVP_MD_get_size(param_1[4]);
        iVar4 = iVar4 - iVar5;
        uVar6 = RSA_bits(param_1[2]);
        if ((uVar6 & 7) == 1) {
          iVar4 = iVar4 + -1;
        }
        if ((iVar1 < 0) || (iVar4 < iVar1)) {
          ERR_new();
          ERR_set_debug("../providers/implementations/signature/rsa_sig.c",0xa5,
                        "rsa_check_parameters");
          ERR_set_error(0x39,0x70,0);
          return false;
        }
        *(int *)((long)param_1 + 0xb4) = iVar1;
      }
    }
  }
  iVar1 = rsa_set_ctx_params(param_1,param_3);
  return iVar1 != 0;
}

