
undefined4 EVP_MD_get_size(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 8);
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_lib.c",0x313,"EVP_MD_get_size");
  ERR_set_error(6,0x9f,0);
  return 0xffffffff;
}

