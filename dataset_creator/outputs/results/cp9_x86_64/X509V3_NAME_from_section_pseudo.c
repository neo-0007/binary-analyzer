
int X509V3_NAME_from_section(X509_NAME *nm,stack_st_CONF_VALUE *dn_sk,ulong chtype)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  byte *pbVar5;
  int iVar6;
  byte bVar7;
  byte *field;
  
  if (nm == (X509_NAME *)0x0) {
    return 0;
  }
  iVar6 = 0;
  iVar3 = OPENSSL_sk_num(dn_sk);
  if (0 < iVar3) {
    do {
      lVar4 = OPENSSL_sk_value(dn_sk,iVar6);
      field = *(byte **)(lVar4 + 8);
      bVar7 = *field;
      pbVar5 = field;
      bVar1 = bVar7;
      if (bVar7 == 0) {
        iVar3 = 0;
      }
      else {
        do {
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar5;
          if ((bVar1 < 0x3b) && ((0x400500000000000U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
            if (bVar2 != 0) {
              field = pbVar5;
              bVar7 = bVar2;
            }
            break;
          }
          bVar1 = bVar2;
        } while (bVar2 != 0);
        iVar3 = 0;
        if (bVar7 == 0x2b) {
          field = field + 1;
          iVar3 = -1;
        }
      }
      iVar3 = X509_NAME_add_entry_by_txt
                        (nm,(char *)field,(int)chtype,*(uchar **)(lVar4 + 0x10),-1,-1,iVar3);
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = iVar6 + 1;
      iVar3 = OPENSSL_sk_num(dn_sk);
    } while (iVar6 < iVar3);
  }
  return 1;
}

