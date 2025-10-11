
bool dh_param_decode(EVP_PKEY *param_1,uchar **param_2,int param_3)

{
  int *piVar1;
  DH *key;
  
  if (*(undefined1 **)&param_1->references == ossl_dhx_asn1_meth) {
    key = (DH *)d2i_DHxparams();
  }
  else {
    key = d2i_DHparams((DH **)0x0,param_2,(long)param_3);
  }
  if (key != (DH *)0x0) {
    piVar1 = *(int **)&param_1->references;
    key[1].method_mont_p = (BN_MONT_CTX *)((long)&(key[1].method_mont_p)->ri + 1);
    EVP_PKEY_assign(param_1,*piVar1,key);
  }
  return key != (DH *)0x0;
}

