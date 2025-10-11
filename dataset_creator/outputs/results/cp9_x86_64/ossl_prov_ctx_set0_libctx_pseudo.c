
void ossl_prov_ctx_set0_libctx(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 8) = param_2;
  }
  return;
}

