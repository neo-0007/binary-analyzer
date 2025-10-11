
bool prefix_create(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x10,"../crypto/bio/bf_prefix.c",0x36);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0x100000000;
    BIO_set_data(param_1);
    BIO_set_init(param_1,1);
  }
  return puVar1 != (undefined8 *)0x0;
}

