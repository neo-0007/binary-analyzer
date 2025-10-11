
undefined4 ossl_ffc_named_group_get_keylength(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}

