
int X509_CRL_sign(X509_CRL *x,EVP_PKEY *pkey,EVP_MD *md)

{
  X509_CRL_INFO *pXVar1;
  void *pvVar2;
  undefined8 uVar3;
  int iVar4;
  
  pXVar1 = x[2].crl;
  x->sha1_hash[8] = '\x01';
  x->sha1_hash[9] = '\0';
  x->sha1_hash[10] = '\0';
  x->sha1_hash[0xb] = '\0';
  pvVar2 = x[1].meth_data;
  uVar3 = X509_CRL_INFO_it();
  iVar4 = ASN1_item_sign_ex(uVar3,&x->sig_alg,x->sha1_hash + 0x10,&x->meth,x,0,pkey,md,pvVar2,pXVar1
                           );
  return iVar4;
}

