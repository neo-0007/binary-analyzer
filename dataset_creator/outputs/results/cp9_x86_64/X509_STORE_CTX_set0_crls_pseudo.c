
void X509_STORE_CTX_set0_crls(X509_STORE_CTX *c,stack_st_X509_CRL *sk)

{
  c->untrusted = (stack_st_X509 *)sk;
  return;
}

