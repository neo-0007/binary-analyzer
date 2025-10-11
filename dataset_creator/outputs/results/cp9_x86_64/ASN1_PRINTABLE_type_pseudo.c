
int ASN1_PRINTABLE_type(uchar *s,int max)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  int local_3c;
  
  if (s == (uchar *)0x0) {
    return 0x13;
  }
  if (max < 0) {
    sVar5 = strlen((char *)s);
    local_3c = (int)sVar5 + -1;
    if ((int)sVar5 < 1) {
      return 0x13;
    }
  }
  else {
    local_3c = max + -1;
    if (max == 0) {
      return 0x13;
    }
  }
  bVar2 = false;
  bVar3 = false;
  pbVar6 = s;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar4 = ossl_ctype_check(bVar1,0x800);
    if (iVar4 == 0) {
      bVar3 = true;
    }
    if ((bVar1 & 0x80) != 0) {
      bVar2 = true;
    }
  } while (0 < (1 - (int)pbVar6) + (int)s + local_3c);
  if (!bVar2) {
    if (!bVar3) {
      return 0x13;
    }
    return 0x16;
  }
  return 0x14;
}

