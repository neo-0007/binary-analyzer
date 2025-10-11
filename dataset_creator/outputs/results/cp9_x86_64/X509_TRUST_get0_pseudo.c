
X509_TRUST * X509_TRUST_get0(int idx)

{
  X509_TRUST *pXVar1;
  
  if (idx < 0) {
    return (X509_TRUST *)0x0;
  }
  if (idx < 8) {
    return (X509_TRUST *)(trstandard + (long)idx * 0x28);
  }
  pXVar1 = (X509_TRUST *)OPENSSL_sk_value(trtable,idx + -8);
  return pXVar1;
}

