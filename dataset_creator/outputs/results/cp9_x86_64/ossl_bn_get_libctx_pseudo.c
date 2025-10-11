
undefined8 ossl_bn_get_libctx(long param_1)

{
  if (param_1 != 0) {
    return *(undefined8 *)(param_1 + 0x40);
  }
  return 0;
}

