
int ASN1_BIT_STRING_check(ASN1_BIT_STRING *a,uchar *flags,int flags_len)

{
  ulong uVar1;
  byte bVar2;
  
  if (((a != (ASN1_BIT_STRING *)0x0) && (a->data != (uchar *)0x0)) && (0 < a->length)) {
    uVar1 = 0;
    while( true ) {
      bVar2 = 0xff;
      if ((int)uVar1 < flags_len) {
        bVar2 = ~flags[uVar1];
      }
      bVar2 = bVar2 & a->data[uVar1];
      if (uVar1 == a->length - 1) break;
      uVar1 = uVar1 + 1;
      if (bVar2 != 0) {
        return 0;
      }
    }
    return (int)(bVar2 == 0);
  }
  return 1;
}

