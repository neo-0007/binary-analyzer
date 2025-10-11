
undefined8 * file_attach(undefined8 param_1)

{
  BIO *a;
  undefined8 *puVar1;
  
  a = (BIO *)ossl_bio_new_from_core_bio();
  if (a == (BIO *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar1 = (undefined8 *)
           CRYPTO_zalloc(0x48,"../providers/implementations/storemgmt/file_store.c",0x81);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 2) = 0;
    *puVar1 = param_1;
    puVar1[3] = a;
    return puVar1;
  }
  ERR_new();
  ERR_set_debug("../providers/implementations/storemgmt/file_store.c",0x9e,"file_open_stream");
  ERR_set_error(0x39,0xc0100,0);
  BIO_free(a);
  return (undefined8 *)0x0;
}

