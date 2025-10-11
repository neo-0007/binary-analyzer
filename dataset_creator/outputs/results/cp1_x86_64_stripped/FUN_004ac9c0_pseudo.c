
int FUN_004ac9c0(void)

{
  int iVar1;
  
  iVar1 = FUN_00422340(&DAT_00940fc4,FUN_004ac990);
  if ((iVar1 == 0) || (DAT_00940fc0 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_meth.c",0x1c,"BIO_get_new_index");
    FUN_0051f8f0(0x20,0xc0100,0);
    iVar1 = -1;
  }
  else {
    LOCK();
    UNLOCK();
    iVar1 = DAT_0093bda0 + 1;
    DAT_0093bda0 = DAT_0093bda0 + 1;
  }
  return iVar1;
}

