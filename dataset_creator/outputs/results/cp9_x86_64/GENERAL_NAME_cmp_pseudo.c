
int GENERAL_NAME_cmp(GENERAL_NAME *a,GENERAL_NAME *b)

{
  EDIPARTYNAME *pEVar1;
  EDIPARTYNAME *pEVar2;
  int iVar3;
  ASN1_STRING *b_00;
  ASN1_STRING *pAVar4;
  
  if (((a != (GENERAL_NAME *)0x0) && (b != (GENERAL_NAME *)0x0)) && (a->type == b->type)) {
    switch(a->type) {
    case 0:
      iVar3 = OTHERNAME_cmp((a->d).otherName,(b->d).otherName);
      return iVar3;
    case 1:
    case 2:
    case 3:
    case 6:
      b_00 = (ASN1_STRING *)(b->d).otherName;
      pAVar4 = (ASN1_STRING *)(a->d).otherName;
LAB_0060b588:
      iVar3 = ASN1_STRING_cmp(pAVar4,b_00);
      return iVar3;
    case 4:
      iVar3 = X509_NAME_cmp((a->d).directoryName,(b->d).directoryName);
      return iVar3;
    case 5:
      pEVar1 = (a->d).ediPartyName;
      pEVar2 = (b->d).ediPartyName;
      if ((pEVar1 != (EDIPARTYNAME *)0x0) && (pEVar2 != (EDIPARTYNAME *)0x0)) {
        pAVar4 = pEVar2->nameAssigner;
        if (pEVar1->nameAssigner == (ASN1_STRING *)0x0) {
          if (pAVar4 != (ASN1_STRING *)0x0) {
            return -1;
          }
        }
        else {
          if (pAVar4 == (ASN1_STRING *)0x0) {
            return 1;
          }
          iVar3 = ASN1_STRING_cmp(pEVar1->nameAssigner,pAVar4);
          if (iVar3 != 0) {
            return iVar3;
          }
        }
        pAVar4 = pEVar1->partyName;
        if ((pAVar4 != (ASN1_STRING *)0x0) && (b_00 = pEVar2->partyName, b_00 != (ASN1_STRING *)0x0)
           ) goto LAB_0060b588;
      }
      break;
    case 7:
      iVar3 = ASN1_OCTET_STRING_cmp((ASN1_STRING *)(a->d).otherName,(ASN1_STRING *)(b->d).otherName)
      ;
      return iVar3;
    case 8:
      iVar3 = OBJ_cmp((a->d).registeredID,(b->d).registeredID);
      return iVar3;
    default:
      return -1;
    }
  }
  return -1;
}

