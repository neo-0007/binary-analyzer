
undefined8 si_cb(int param_1,long *param_2)

{
  if (param_1 != 3) {
    return 1;
  }
  EVP_PKEY_free(*(EVP_PKEY **)(*param_2 + 0x38));
  return 1;
}

