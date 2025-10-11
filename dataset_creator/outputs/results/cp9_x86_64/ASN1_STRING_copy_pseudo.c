
int ASN1_STRING_copy(ASN1_STRING *dst,ASN1_STRING *str)

{
  uchar *data;
  int iVar1;
  ulong uVar2;
  
  if (str == (ASN1_STRING *)0x0) {
    return 0;
  }
  iVar1 = str->length;
  data = str->data;
  dst->type = str->type;
  iVar1 = ASN1_STRING_set(dst,data,iVar1);
  if (iVar1 != 0) {
    uVar2 = (ulong)((uint)dst->flags & 0x80);
    dst->flags = uVar2;
    dst->flags = str->flags & 0xffffffffffffff7fU | uVar2;
    return 1;
  }
  return 0;
}

