
int X509_REQ_sign(X509_REQ *x,EVP_PKEY *pkey,EVP_MD *md)

{
  ASN1_BIT_STRING *pAVar1;
  X509_ALGOR *pXVar2;
  X509_ALGOR *pXVar3;
  undefined8 uVar4;
  int iVar5;
  
  pAVar1 = x[3].signature;
  pXVar2 = x[3].sig_alg;
  pXVar3 = x[2].sig_alg;
  uVar4 = X509_REQ_INFO_it();
  iVar5 = ASN1_item_sign_ex(uVar4,&x[1].references,0,pXVar3,x,0,pkey,md,pXVar2,pAVar1);
  return iVar5;
}

