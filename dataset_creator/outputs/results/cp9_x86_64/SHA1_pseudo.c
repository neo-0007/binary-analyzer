
uchar * SHA1(uchar *d,size_t n,uchar *md)

{
  int iVar1;
  
  if (md == (uchar *)0x0) {
    md = m_4;
  }
  iVar1 = EVP_Q_digest(0,&DAT_007c6514,0,d,n,md,0);
  if (iVar1 == 0) {
    md = (uchar *)0x0;
  }
  return md;
}

