
int X509_NAME_cmp(X509_NAME *a,X509_NAME *b)

{
  int iVar1;
  int iVar2;
  
  if (b == (X509_NAME *)0x0) {
    return (int)(a != (X509_NAME *)0x0);
  }
  if (a == (X509_NAME *)0x0) {
LAB_0058ba88:
    iVar2 = -1;
  }
  else {
    if ((((a->canon_enc != (uchar *)0x0) && (a->modified == 0)) ||
        (iVar2 = i2d_X509_NAME(a,(uchar **)0x0), -1 < iVar2)) &&
       (((b->canon_enc != (uchar *)0x0 && (b->modified == 0)) ||
        (iVar2 = i2d_X509_NAME(b,(uchar **)0x0), -1 < iVar2)))) {
      iVar2 = a->canon_enclen;
      iVar1 = iVar2 - b->canon_enclen;
      if (iVar2 == 0 && iVar1 == 0) {
        return 0;
      }
      if ((a->canon_enc != (uchar *)0x0) && (b->canon_enc != (uchar *)0x0)) {
        if (iVar1 == 0) {
          iVar1 = bcmp(a->canon_enc,b->canon_enc,(long)iVar2);
        }
        if (-1 < iVar1) {
          return (uint)(0 < iVar1);
        }
        goto LAB_0058ba88;
      }
    }
    iVar2 = -2;
  }
  return iVar2;
}

