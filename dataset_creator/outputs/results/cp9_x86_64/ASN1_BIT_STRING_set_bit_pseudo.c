
int ASN1_BIT_STRING_set_bit(ASN1_BIT_STRING *a,int n,int value)

{
  int iVar1;
  long lVar2;
  uchar *puVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  byte bVar7;
  
  iVar6 = n + 7;
  if (-1 < n) {
    iVar6 = n;
  }
  iVar6 = iVar6 >> 3;
  bVar5 = (byte)(1 << (~(byte)n & 7));
  bVar7 = 0;
  if (value != 0) {
    bVar7 = bVar5;
  }
  if (a == (ASN1_BIT_STRING *)0x0) {
    return 0;
  }
  a->flags = a->flags & 0xfffffffffffffff0;
  if ((a->length <= iVar6) || (puVar3 = a->data, puVar3 == (uchar *)0x0)) {
    if (value == 0) {
      return 1;
    }
    iVar1 = iVar6 + 1;
    puVar3 = (uchar *)CRYPTO_clear_realloc
                                (a->data,(long)a->length,(long)iVar1,"../crypto/asn1/a_bitstr.c",
                                 0xa5);
    if (puVar3 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/asn1/a_bitstr.c",0xa7,"ASN1_BIT_STRING_set_bit");
      ERR_set_error(0xd,0xc0100,0);
      return 0;
    }
    iVar4 = iVar1 - a->length;
    if (0 < iVar4) {
      memset(puVar3 + a->length,0,(long)iVar4);
    }
    a->data = puVar3;
    a->length = iVar1;
  }
  puVar3[iVar6] = ~bVar5 & puVar3[iVar6] | bVar7;
  iVar6 = a->length;
  if (0 < iVar6) {
    lVar2 = (long)(int)(iVar6 - 1U);
    do {
      if (a->data[lVar2] != '\0') {
        return 1;
      }
      a->length = (int)lVar2;
      lVar2 = lVar2 + -1;
    } while (((long)iVar6 + -2) - (ulong)(iVar6 - 1U) != lVar2);
  }
  return 1;
}

