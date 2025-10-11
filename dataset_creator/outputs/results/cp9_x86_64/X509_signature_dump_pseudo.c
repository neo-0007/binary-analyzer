
int X509_signature_dump(BIO *bp,ASN1_STRING *sig,int indent)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar3 = sig->length;
  pbVar5 = sig->data;
  do {
    if (iVar3 <= iVar6) {
      iVar3 = BIO_write(bp,&DAT_0081a1ca,1);
      return (int)(iVar3 == 1);
    }
    if (((uint)(iVar6 * 0x38e38e39) >> 1 | (uint)((iVar6 * 0x38e38e39 & 1U) != 0) << 0x1f) <
        0xe38e38f) {
      if ((iVar6 != 0) && (iVar2 = BIO_write(bp,&DAT_0081a1ca,1), iVar2 < 1)) {
        return 0;
      }
      iVar2 = BIO_indent(bp,indent,indent);
      if (iVar2 < 1) {
        return 0;
      }
    }
    iVar6 = iVar6 + 1;
    bVar1 = *pbVar5;
    pcVar4 = ":";
    if (iVar6 == iVar3) {
      pcVar4 = "";
    }
    pbVar5 = pbVar5 + 1;
    iVar2 = BIO_printf(bp,"%02x%s",(ulong)bVar1,pcVar4);
  } while (0 < iVar2);
  return 0;
}

