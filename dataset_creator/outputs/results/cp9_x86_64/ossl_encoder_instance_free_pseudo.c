
void ossl_encoder_instance_free(long *param_1)

{
  long lVar1;
  
  if (param_1 != (long *)0x0) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x40))(param_1[1]);
      lVar1 = *param_1;
    }
    param_1[1] = 0;
    OSSL_ENCODER_free(lVar1);
    *param_1 = 0;
    CRYPTO_free(param_1);
    return;
  }
  return;
}

