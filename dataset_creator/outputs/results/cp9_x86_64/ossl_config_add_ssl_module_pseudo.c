
void ossl_config_add_ssl_module(void)

{
  CONF_module_add("ssl_conf",ssl_module_init,ssl_module_free);
  return;
}

