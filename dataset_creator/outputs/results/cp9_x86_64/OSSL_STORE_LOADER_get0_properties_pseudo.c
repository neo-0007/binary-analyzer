
undefined8 OSSL_STORE_LOADER_get0_properties(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x70);
  }
  ERR_new();
  ERR_set_debug("../crypto/store/store_meth.c",0x1b2,"OSSL_STORE_LOADER_get0_properties");
  ERR_set_error(0x2c,0xc0102,0);
  return 0;
}

