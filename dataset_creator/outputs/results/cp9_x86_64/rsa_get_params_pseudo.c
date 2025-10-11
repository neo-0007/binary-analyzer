
bool rsa_get_params(RSA *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = ossl_rsa_get0_pss_params_30();
  iVar1 = RSA_test_flags(param_1,0xf000);
  lVar5 = RSA_get0_n(param_1);
  lVar6 = OSSL_PARAM_locate(param_2,"bits");
  if (lVar6 == 0) {
    lVar6 = OSSL_PARAM_locate(param_2,"security-bits");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_00472594;
    }
    lVar6 = OSSL_PARAM_locate(param_2,"max-size");
    if (lVar6 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      goto LAB_004725c5;
    }
  }
  else {
    if (lVar5 == 0) {
      return false;
    }
    uVar2 = RSA_bits(param_1);
    iVar3 = OSSL_PARAM_set_int(lVar6,uVar2);
    if (iVar3 == 0) {
      return false;
    }
    lVar6 = OSSL_PARAM_locate(param_2,"security-bits");
    if (lVar6 == 0) {
      lVar6 = OSSL_PARAM_locate(param_2,"max-size");
    }
    else {
LAB_00472594:
      uVar2 = RSA_security_bits(param_1);
      iVar3 = OSSL_PARAM_set_int(lVar6,uVar2);
      if (iVar3 == 0) {
        return false;
      }
      lVar6 = OSSL_PARAM_locate(param_2,"max-size");
    }
    if (lVar6 != 0) {
LAB_004725c5:
      iVar3 = RSA_size(param_1);
      iVar3 = OSSL_PARAM_set_int(lVar6,iVar3);
      if (iVar3 == 0) {
        return false;
      }
    }
  }
  lVar5 = OSSL_PARAM_locate(param_2,"default-digest");
  if (lVar5 == 0) {
LAB_00472616:
    lVar5 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    if (lVar5 == 0) {
      if (iVar1 != 0x1000) goto LAB_0047263e;
    }
    else {
      if (iVar1 != 0x1000) goto LAB_0047263e;
LAB_004726f7:
      iVar1 = ossl_rsa_pss_params_30_is_unrestricted(uVar4);
      if (iVar1 == 0) {
        uVar2 = ossl_rsa_pss_params_30_hashalg(uVar4);
        lVar6 = ossl_rsa_oaeppss_nid2name(uVar2);
        if (lVar6 == 0) {
          return false;
        }
        iVar1 = OSSL_PARAM_set_utf8_string(lVar5,lVar6);
        if (iVar1 == 0) {
          return false;
        }
      }
    }
  }
  else {
    if ((iVar1 != 0x1000) || (iVar3 = ossl_rsa_pss_params_30_is_unrestricted(uVar4), iVar3 != 0)) {
      iVar3 = OSSL_PARAM_set_utf8_string(lVar5,"SHA256");
      if (iVar3 == 0) {
        return false;
      }
      goto LAB_00472616;
    }
    lVar5 = OSSL_PARAM_locate(param_2,"mandatory-digest");
    if (lVar5 != 0) goto LAB_004726f7;
  }
  iVar1 = ossl_rsa_pss_params_30_todata(uVar4,0,param_2);
  if (iVar1 == 0) {
    return false;
  }
LAB_0047263e:
  iVar1 = ossl_rsa_todata(param_1,0,param_2,1);
  return iVar1 != 0;
}

