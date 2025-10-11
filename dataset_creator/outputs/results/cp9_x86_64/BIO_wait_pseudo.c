
int BIO_wait(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_2 != 0) {
    iVar1 = bio_wait_part_0();
    if (iVar1 < 1) {
      ERR_new();
      ERR_set_debug("../crypto/bio/bio_lib.c",0x379,"BIO_wait");
      ERR_set_error(0x20,(iVar1 == 0) + 'h',0);
      return iVar1;
    }
  }
  return iVar1;
}

