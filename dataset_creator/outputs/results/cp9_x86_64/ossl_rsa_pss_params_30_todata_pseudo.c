
bool ossl_rsa_pss_params_30_todata(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  
  iVar1 = ossl_rsa_pss_params_30_is_unrestricted();
  if (iVar1 != 0) {
    return true;
  }
  bVar11 = false;
  iVar1 = ossl_rsa_pss_params_30_hashalg(param_1);
  iVar2 = ossl_rsa_pss_params_30_maskgenalg(param_1);
  iVar3 = ossl_rsa_pss_params_30_maskgenhashalg(param_1);
  uVar4 = ossl_rsa_pss_params_30_saltlen(param_1);
  iVar5 = ossl_rsa_pss_params_30_hashalg(0);
  iVar6 = ossl_rsa_pss_params_30_maskgenalg(0);
  iVar7 = ossl_rsa_pss_params_30_maskgenhashalg(0);
  lVar10 = 0;
  if (iVar1 != iVar5) {
    lVar10 = ossl_rsa_oaeppss_nid2name(iVar1);
  }
  if (iVar2 == iVar6) {
    lVar9 = 0;
  }
  else {
    lVar9 = ossl_rsa_oaeppss_nid2name(iVar2);
  }
  if (iVar3 == iVar7) {
    lVar8 = 0;
  }
  else {
    lVar8 = ossl_rsa_oaeppss_nid2name();
  }
  if ((((lVar10 == 0) ||
       (iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"digest"), iVar1 != 0)) &&
      ((lVar9 == 0 ||
       (iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,&DAT_007daa60,lVar9), iVar1 != 0)))
      ) && ((lVar8 == 0 ||
            (iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"mgf1-digest",lVar8),
            iVar1 != 0)))) {
    iVar1 = ossl_param_build_set_int(param_2,param_3,"saltlen",uVar4);
    bVar11 = iVar1 != 0;
  }
  return bVar11;
}

