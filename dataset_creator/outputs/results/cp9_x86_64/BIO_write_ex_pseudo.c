
bool BIO_write_ex(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = bio_write_intern();
  return 0 < iVar1 || param_3 == 0 && param_1 != 0;
}

