
int X509_sign(X509 *x,EVP_PKEY *pkey,EVP_MD *md)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(x[1].sha1_hash + 8);
  *(undefined4 *)&x->crldp = 1;
  uVar2 = *(undefined8 *)x[1].sha1_hash;
  uVar3 = X509_CINF_it();
  iVar4 = ASN1_item_sign_ex(uVar3,&x->name,&x->altname,&x->rfc3779_addr,x,0,pkey,md,uVar2,uVar1);
  return iVar4;
}

