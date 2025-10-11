
uchar * SHA256(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  
  if (md == (uchar *)0x0) {
    md = m_2;
  }
  iVar1 = EVP_Q_digest(0,"SHA256",0,d,n,md,0);
  if (iVar1 == 0) {
    md = (uchar *)0x0;
  }
  return md;
}

