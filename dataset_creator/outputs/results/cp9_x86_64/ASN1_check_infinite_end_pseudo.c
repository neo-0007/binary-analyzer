
int ASN1_check_infinite_end(uchar **p,long len)

{
  uchar *puVar1;
  int iVar2;
  
  iVar2 = 1;
  if ((((0 < len) && (iVar2 = 0, len != 1)) && (puVar1 = *p, *puVar1 == '\0')) &&
     (puVar1[1] == '\0')) {
    *p = puVar1 + 2;
    return 1;
  }
  return iVar2;
}

