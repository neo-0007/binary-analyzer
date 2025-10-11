
undefined8 ecd_item_sign25519(void)

{
  ASN1_OBJECT *pAVar1;
  X509_ALGOR *in_RCX;
  X509_ALGOR *in_R8;
  
  pAVar1 = OBJ_nid2obj(0x43f);
  X509_ALGOR_set0(in_RCX,pAVar1,-1,(void *)0x0);
  if (in_R8 != (X509_ALGOR *)0x0) {
    pAVar1 = OBJ_nid2obj(0x43f);
    X509_ALGOR_set0(in_R8,pAVar1,-1,(void *)0x0);
  }
  return 3;
}

