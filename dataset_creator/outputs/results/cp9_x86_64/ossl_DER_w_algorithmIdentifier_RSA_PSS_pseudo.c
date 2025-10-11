
bool ossl_DER_w_algorithmIdentifier_RSA_PSS
               (undefined8 param_1,undefined4 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (param_3 == 0) {
    iVar1 = ossl_DER_w_begin_sequence();
    if (iVar1 == 0) {
      return false;
    }
    puVar2 = ossl_der_oid_rsaEncryption;
  }
  else {
    if (param_3 != 0x1000) {
      return false;
    }
    iVar1 = ossl_DER_w_begin_sequence();
    if (iVar1 == 0) {
      return false;
    }
    iVar1 = ossl_rsa_pss_params_30_is_unrestricted(param_4);
    if ((iVar1 == 0) &&
       (iVar1 = ossl_DER_w_RSASSA_PSS_params(param_1,0xffffffff,param_4), iVar1 == 0)) {
      return false;
    }
    puVar2 = ossl_der_oid_id_RSASSA_PSS;
  }
  iVar1 = ossl_DER_w_precompiled(param_1,0xffffffff,puVar2,0xb);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = ossl_DER_w_end_sequence(param_1,param_2);
  return iVar1 != 0;
}

