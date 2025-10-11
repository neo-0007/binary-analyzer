
void engine_cleanup_cb_free(undefined8 *param_1)

{
  (*(code *)*param_1)();
  CRYPTO_free(param_1);
  return;
}

