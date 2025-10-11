
bool ossl_rsa_is_foreign(RSA *param_1)

{
  RSA_METHOD *pRVar1;
  RSA_METHOD *pRVar2;
  
  if (param_1->n != (BIGNUM *)0x0) {
    return true;
  }
  pRVar1 = RSA_get_method(param_1);
  pRVar2 = (RSA_METHOD *)RSA_PKCS1_OpenSSL();
  return pRVar1 != pRVar2;
}

