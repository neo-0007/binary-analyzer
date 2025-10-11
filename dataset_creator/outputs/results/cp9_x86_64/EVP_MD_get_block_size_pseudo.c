
undefined4 EVP_MD_get_block_size(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x48);
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/evp_lib.c",0x30a,"EVP_MD_get_block_size");
  ERR_set_error(6,0x9f,0);
  return 0xffffffff;
}

