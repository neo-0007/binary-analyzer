
int rsa_sig_print(BIO *param_1,undefined8 *param_2,ASN1_STRING *param_3,int param_4)

{
  int iVar1;
  RSA_PSS_PARAMS *a;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
  if (iVar1 == 0x390) {
    a = (RSA_PSS_PARAMS *)ossl_rsa_pss_decode(param_2);
    iVar1 = rsa_pss_param_print(param_1,0,a,param_4);
    RSA_PSS_PARAMS_free(a);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = BIO_puts(param_1,"\n");
    if (iVar1 < 1) {
      return 0;
    }
  }
  if (param_3 != (ASN1_STRING *)0x0) {
    iVar1 = X509_signature_dump(param_1,param_3,param_4);
    return iVar1;
  }
  return 1;
}

