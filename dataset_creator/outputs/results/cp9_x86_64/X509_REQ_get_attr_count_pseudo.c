
int X509_REQ_get_attr_count(X509_REQ *req)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count(req[1].signature);
  return iVar1;
}

