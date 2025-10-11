
void ossl_config_modules_free(void)

{
  CONF_modules_finish();
  CONF_modules_unload(1);
  return;
}

