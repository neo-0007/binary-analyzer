
undefined2 * BIO_ADDR_new(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)CRYPTO_zalloc(0x70,"../crypto/bio/bio_addr.c",0x36);
  if (puVar1 == (undefined2 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bio_addr.c",0x39,"BIO_ADDR_new");
    ERR_set_error(0x20,0xc0100,0);
  }
  else {
    *puVar1 = 0;
  }
  return puVar1;
}

