
uint ossl_tolower(uint param_1)

{
  if (param_1 - 0x41 < 0x1a) {
    param_1 = param_1 ^ 0x20;
  }
  return param_1;
}

