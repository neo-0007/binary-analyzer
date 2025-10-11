
bool BIO_read_ex(void)

{
  int iVar1;
  
  iVar1 = bio_read_intern();
  return 0 < iVar1;
}

