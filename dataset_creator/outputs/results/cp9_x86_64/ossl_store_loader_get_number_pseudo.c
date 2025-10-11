
undefined4 ossl_store_loader_get_number(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  ERR_new();
  ERR_set_debug("../crypto/store/store_meth.c",0x1bc,"ossl_store_loader_get_number");
  ERR_set_error(0x2c,0xc0102,0);
  return 0;
}

