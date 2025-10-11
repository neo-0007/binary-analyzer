
X509_REQ * d2i_X509_REQ_bio(BIO *bp,X509_REQ **req)

{
  undefined8 uVar1;
  X509_REQ *pXVar2;
  X509_ALGOR *pXVar3;
  
  if (req == (X509_REQ **)0x0) {
    pXVar2 = (X509_REQ *)0x0;
    pXVar3 = (X509_ALGOR *)0x0;
  }
  else {
    pXVar2 = *req;
    pXVar3 = (X509_ALGOR *)0x0;
    if (pXVar2 != (X509_REQ *)0x0) {
      pXVar3 = pXVar2[3].sig_alg;
      pXVar2 = (X509_REQ *)pXVar2[3].signature;
    }
  }
  uVar1 = X509_REQ_it();
  pXVar2 = (X509_REQ *)ASN1_item_d2i_bio_ex(uVar1,bp,req,pXVar3,pXVar2);
  return pXVar2;
}

