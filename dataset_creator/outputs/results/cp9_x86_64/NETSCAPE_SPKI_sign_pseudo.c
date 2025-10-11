
int NETSCAPE_SPKI_sign(NETSCAPE_SPKI *x,EVP_PKEY *pkey,EVP_MD *md)

{
  NETSCAPE_SPKAC *pNVar1;
  NETSCAPE_SPKAC *pNVar2;
  undefined8 uVar3;
  int iVar4;
  
  pNVar1 = x->spkac;
  pNVar2 = x[1].spkac;
  uVar3 = NETSCAPE_SPKAC_it();
  iVar4 = ASN1_item_sign_ex(uVar3,&x->sig_algor,0,pNVar2,pNVar1,0,pkey,md,0,0);
  return iVar4;
}

