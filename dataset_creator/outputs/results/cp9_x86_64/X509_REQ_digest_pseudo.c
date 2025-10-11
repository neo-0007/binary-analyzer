
int X509_REQ_digest(X509_REQ *data,EVP_MD *type,uchar *md,uint *len)

{
  ASN1_BIT_STRING *pAVar1;
  X509_ALGOR *pXVar2;
  undefined8 uVar3;
  int iVar4;
  
  pAVar1 = data[3].signature;
  pXVar2 = data[3].sig_alg;
  uVar3 = X509_REQ_it();
  iVar4 = ossl_asn1_item_digest_ex(uVar3,type,data,md,len,pXVar2,pAVar1);
  return iVar4;
}

