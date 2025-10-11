
int GENERAL_NAME_print(BIO *out,GENERAL_NAME *gen)

{
  ASN1_STRING *pAVar1;
  uint *puVar2;
  int iVar3;
  void *ptr;
  
  iVar3 = gen->type;
  switch(iVar3) {
  case 0:
    break;
  case 1:
    BIO_printf(out,"email:");
    ASN1_STRING_print(out,(ASN1_STRING *)(gen->d).otherName);
    return iVar3;
  case 2:
    BIO_printf(out,"DNS:");
    ASN1_STRING_print(out,(ASN1_STRING *)(gen->d).otherName);
    return 1;
  case 3:
    BIO_printf(out,"X400Name:<unsupported>");
    return 1;
  case 4:
    BIO_printf(out,"DirName:");
    X509_NAME_print_ex(out,(gen->d).directoryName,0,0x82031f);
    return 1;
  case 5:
    BIO_printf(out,"EdiPartyName:<unsupported>");
    return 1;
  case 6:
    BIO_printf(out,"URI:");
    ASN1_STRING_print(out,(ASN1_STRING *)(gen->d).otherName);
    return 1;
  case 7:
    ptr = (void *)ossl_ipaddr_to_asc(((gen->d).rfc822Name)->data,((gen->d).rfc822Name)->length);
    if (ptr != (void *)0x0) {
      BIO_printf(out,"IP Address:%s",ptr);
      CRYPTO_free(ptr);
    }
    return (uint)(ptr != (void *)0x0);
  case 8:
    BIO_printf(out,"Registered ID:");
    i2a_ASN1_OBJECT(out,(gen->d).registeredID);
    return 1;
  default:
    iVar3 = FUN_0060f1c0();
    return iVar3;
  }
  iVar3 = OBJ_obj2nid(((gen->d).otherName)->type_id);
  if (iVar3 == 0x4ba) {
    pAVar1 = ((gen->d).ediPartyName)->partyName;
    if (pAVar1->length == 0x16) {
      puVar2 = (uint *)pAVar1->data;
      BIO_printf(out,"othername:SRVName:%.*s",(ulong)*puVar2,*(undefined8 *)(puVar2 + 2));
      iVar3 = FUN_0060f1c0();
      return iVar3;
    }
  }
  else {
    pAVar1 = ((gen->d).ediPartyName)->partyName;
    if (pAVar1->length == 0xc) {
      if (iVar3 == 0x4b9) {
        BIO_printf(out,"othername:XmppAddr:%.*s",(ulong)*(uint *)pAVar1->data,
                   *(undefined8 *)((long)pAVar1->data + 8));
        iVar3 = FUN_0060f1c0();
        return iVar3;
      }
      if (iVar3 < 0x4ba) {
        if (iVar3 == 0x289) {
          BIO_printf(out,"othername:UPN:%.*s",(ulong)*(uint *)pAVar1->data,
                     *(undefined8 *)((long)pAVar1->data + 8));
          iVar3 = FUN_0060f1c0();
          return iVar3;
        }
        if (iVar3 == 0x4b8) {
          BIO_printf(out,"othername:SmtpUTF8Mailbox:%.*s",(ulong)*(uint *)pAVar1->data,
                     *(undefined8 *)((long)pAVar1->data + 8));
          iVar3 = FUN_0060f1c0();
          return iVar3;
        }
      }
      else if (iVar3 == 0x4bb) {
        BIO_printf(out,"othername:NAIRealm:%.*s",(ulong)*(uint *)pAVar1->data,
                   *(undefined8 *)((long)pAVar1->data + 8));
        iVar3 = FUN_0060f1c0();
        return iVar3;
      }
      BIO_printf(out,"othername:<unsupported>");
      iVar3 = FUN_0060f1c0();
      return iVar3;
    }
  }
  BIO_printf(out,"othername:<unsupported>");
  iVar3 = FUN_0060f1c0();
  return iVar3;
}

