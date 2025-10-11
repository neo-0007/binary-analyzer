
uint key2msblob_encode_constprop_0
               (undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,code *param_5
               )

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  EVP_PKEY *pk;
  BIO *out;
  
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      return param_3 & 2;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  pk = EVP_PKEY_new();
  if (((pk == (EVP_PKEY *)0x0) || (iVar2 = (*param_5)(pk,param_2), iVar2 == 0)) ||
     (out = (BIO *)ossl_bio_new_from_core_bio(*param_1,param_4), out == (BIO *)0x0)) {
    uVar3 = 0;
  }
  else {
    if (bVar1) {
      uVar3 = i2b_PublicKey_bio(out,pk);
    }
    else {
      uVar3 = i2b_PrivateKey_bio(out,pk);
    }
    BIO_free(out);
  }
  EVP_PKEY_free(pk);
  return uVar3;
}

