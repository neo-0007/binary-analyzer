
int X509_NAME_set(X509_NAME **xn,X509_NAME *name)

{
  X509_NAME *pXVar1;
  
  if (*xn != name) {
    pXVar1 = X509_NAME_dup(name);
    if (pXVar1 != (X509_NAME *)0x0) {
      X509_NAME_free(*xn);
      *xn = pXVar1;
    }
    return (uint)(pXVar1 != (X509_NAME *)0x0);
  }
  return (int)(name != (X509_NAME *)0x0);
}

