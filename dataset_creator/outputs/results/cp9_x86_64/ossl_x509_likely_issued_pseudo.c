
int ossl_x509_likely_issued(X509 *param_1,X509 *param_2)

{
  int iVar1;
  X509_NAME *b;
  X509_NAME *a;
  undefined8 uVar2;
  
  b = X509_get_issuer_name(param_2);
  a = X509_get_subject_name(param_1);
  iVar1 = X509_NAME_cmp(a,b);
  if (iVar1 != 0) {
    return 0x1d;
  }
  iVar1 = ossl_x509v3_cache_extensions(param_1);
  if ((iVar1 != 0) && (iVar1 = ossl_x509v3_cache_extensions(param_2), iVar1 != 0)) {
    iVar1 = X509_check_akid(param_1,(AUTHORITY_KEYID *)param_2[1].ex_pathlen);
    if (iVar1 != 0) {
      return iVar1;
    }
    uVar2 = X509_get0_pubkey(param_1);
    iVar1 = check_sig_alg_match(uVar2,param_2);
    return iVar1;
  }
  return 1;
}

