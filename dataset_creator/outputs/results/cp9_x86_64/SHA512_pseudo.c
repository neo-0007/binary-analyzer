
uchar * SHA512(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  
  if (md == (uchar *)0x0) {
    md = m_0;
  }
  iVar1 = EVP_Q_digest(0,"SHA512",0,d,n,md,0);
  if (iVar1 == 0) {
    md = (uchar *)0x0;
  }
  return md;
}

