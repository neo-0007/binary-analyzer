
undefined8 * BIO_CONNECT_new(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x38,"../crypto/bio/bss_conn.c",0xf3);
  if (puVar1 == (undefined8 *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/bio/bss_conn.c",0xf4,"BIO_CONNECT_new");
    ERR_set_error(0x20,0xc0100,0);
  }
  else {
    *puVar1 = 0x10000000001;
  }
  return puVar1;
}

