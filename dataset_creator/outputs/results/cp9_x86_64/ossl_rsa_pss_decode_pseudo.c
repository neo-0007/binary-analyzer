
RSA_PSS_PARAMS * ossl_rsa_pss_decode(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  RSA_PSS_PARAMS *a;
  X509_ALGOR *pXVar3;
  RSA_PSS_PARAMS *pRVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = RSA_PSS_PARAMS_it();
  a = (RSA_PSS_PARAMS *)ASN1_TYPE_unpack_sequence(uVar2,uVar1);
  pRVar4 = a;
  if ((a != (RSA_PSS_PARAMS *)0x0) && (a->maskGenAlgorithm != (X509_ALGOR *)0x0)) {
    pXVar3 = (X509_ALGOR *)ossl_x509_algor_mgf1_decode();
    a[1].hashAlgorithm = pXVar3;
    if (pXVar3 == (X509_ALGOR *)0x0) {
      pRVar4 = (RSA_PSS_PARAMS *)0x0;
      RSA_PSS_PARAMS_free(a);
    }
  }
  return pRVar4;
}

