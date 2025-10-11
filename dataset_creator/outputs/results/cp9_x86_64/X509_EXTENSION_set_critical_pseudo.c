
int X509_EXTENSION_set_critical(X509_EXTENSION *ex,int crit)

{
  if (ex != (X509_EXTENSION *)0x0) {
    ex->critical = (ASN1_BOOLEAN)CONCAT71((uint7)(uint3)(-(uint)(crit == 0) >> 8),0xff);
    return 1;
  }
  return 0;
}

