
undefined4 ossl_x509_algor_new_from_md(undefined8 *param_1,EVP_MD *param_2)

{
  int iVar1;
  X509_ALGOR *alg;
  
  if ((param_2 != (EVP_MD *)0x0) && (iVar1 = EVP_MD_is_a(param_2,&DAT_007c6514), iVar1 == 0)) {
    alg = X509_ALGOR_new();
    *param_1 = alg;
    if (alg == (X509_ALGOR *)0x0) {
      return 0;
    }
    X509_ALGOR_set_md(alg,param_2);
  }
  return 1;
}

