
bool dsa_get_params(DSA *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = OSSL_PARAM_locate(param_2,"bits");
  if (lVar3 != 0) {
    uVar1 = DSA_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"security-bits");
  if (lVar3 != 0) {
    uVar1 = DSA_security_bits(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,uVar1);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"max-size");
  if (lVar3 != 0) {
    iVar2 = DSA_size(param_1);
    iVar2 = OSSL_PARAM_set_int(lVar3,iVar2);
    if (iVar2 == 0) {
      return false;
    }
  }
  lVar3 = OSSL_PARAM_locate(param_2,"default-digest");
  if ((lVar3 != 0) && (iVar2 = OSSL_PARAM_set_utf8_string(lVar3,"SHA256"), iVar2 == 0)) {
    return false;
  }
  uVar4 = ossl_dsa_get0_params(param_1);
  iVar2 = ossl_ffc_params_todata(uVar4,0,param_2);
  if (iVar2 == 0) {
    return false;
  }
  iVar2 = dsa_key_todata(param_1,0,param_2,1);
  return iVar2 != 0;
}

