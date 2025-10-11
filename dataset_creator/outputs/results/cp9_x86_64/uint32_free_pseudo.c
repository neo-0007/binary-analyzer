
void uint32_free(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  *param_1 = 0;
  return;
}

