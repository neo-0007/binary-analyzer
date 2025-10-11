
RSA_PSS_PARAMS * ossl_rsa_pss_params_create(long param_1,long param_2,int param_3)

{
  int iVar1;
  RSA_PSS_PARAMS *a;
  ASN1_INTEGER *pAVar2;
  
  a = RSA_PSS_PARAMS_new();
  if (a != (RSA_PSS_PARAMS *)0x0) {
    if (param_3 != 0x14) {
      pAVar2 = ASN1_INTEGER_new();
      a->saltLength = pAVar2;
      if ((pAVar2 == (ASN1_INTEGER *)0x0) ||
         (iVar1 = ASN1_INTEGER_set(pAVar2,(long)param_3), iVar1 == 0)) goto LAB_005531e0;
    }
    iVar1 = ossl_x509_algor_new_from_md(a,param_1);
    if (iVar1 != 0) {
      if (param_2 == 0) {
        param_2 = param_1;
      }
      iVar1 = ossl_x509_algor_md_to_mgf1(&a->maskGenAlgorithm,param_2);
      if ((iVar1 != 0) && (iVar1 = ossl_x509_algor_new_from_md(a + 1,param_2), iVar1 != 0)) {
        return a;
      }
    }
  }
LAB_005531e0:
  RSA_PSS_PARAMS_free(a);
  return (RSA_PSS_PARAMS *)0x0;
}

