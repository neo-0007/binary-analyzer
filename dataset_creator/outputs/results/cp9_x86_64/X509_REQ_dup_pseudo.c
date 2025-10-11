
X509_REQ * X509_REQ_dup(X509_REQ *req)

{
  ASN1_ITEM *it;
  X509_REQ *pXVar1;
  
  it = (ASN1_ITEM *)X509_REQ_it();
  pXVar1 = (X509_REQ *)ASN1_item_dup(it,req);
  return pXVar1;
}

