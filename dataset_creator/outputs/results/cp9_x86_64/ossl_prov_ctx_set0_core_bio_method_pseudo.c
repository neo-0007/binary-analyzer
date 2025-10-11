
void ossl_prov_ctx_set0_core_bio_method(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  return;
}

