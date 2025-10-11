
BIO * BIO_find_type(BIO *b,int bio_type)

{
  uint uVar1;
  
  if (b == (BIO *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_lib.c",0x2bf,"BIO_find_type");
    ERR_set_error(0x20,0xc0102,0);
    b = (BIO *)0x0;
  }
  else {
    do {
      if (b->callback != (_func_603 *)0x0) {
        uVar1 = *(uint *)b->callback;
        if ((bio_type & 0xffU) == 0) {
          if ((bio_type & uVar1) != 0) {
            return b;
          }
        }
        else if (bio_type == uVar1) {
          return b;
        }
      }
      b = *(BIO **)&b->references;
    } while (b != (BIO *)0x0);
  }
  return b;
}

