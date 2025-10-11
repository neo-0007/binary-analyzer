
int ASN1_BIT_STRING_get_bit(ASN1_BIT_STRING *a,int n)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = n + 7;
  if (-1 < n) {
    iVar1 = n;
  }
  uVar2 = 0;
  if (((a != (ASN1_BIT_STRING *)0x0) && (iVar1 >> 3 < a->length)) && (a->data != (uchar *)0x0)) {
    uVar2 = (uint)((1 << (~(byte)n & 7) & (uint)a->data[iVar1 >> 3]) != 0);
  }
  return uVar2;
}

