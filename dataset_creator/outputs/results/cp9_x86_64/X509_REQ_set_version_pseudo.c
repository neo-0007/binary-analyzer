
int X509_REQ_set_version(X509_REQ *x,long version)

{
  int iVar1;
  
  if (x != (X509_REQ *)0x0) {
    *(undefined4 *)&x->signature = 1;
    iVar1 = ASN1_INTEGER_set(*(undefined8 *)&x->references);
    return iVar1;
  }
  return 0;
}

