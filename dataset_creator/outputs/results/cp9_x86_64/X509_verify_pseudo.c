
int X509_verify(X509 *a,EVP_PKEY *r)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ASIdentifiers_st *pAVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar4 = X509_ALGOR_cmp((X509_ALGOR *)&a->altname,(X509_ALGOR *)&a->name);
  iVar5 = 0;
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(a[1].sha1_hash + 8);
    uVar2 = *(undefined8 *)a[1].sha1_hash;
    pAVar3 = a[1].rfc3779_asid;
    uVar6 = X509_CINF_it();
    iVar5 = ASN1_item_verify_ex(uVar6,&a->altname,&a->rfc3779_addr,a,pAVar3,r,uVar2,uVar1);
  }
  return iVar5;
}

