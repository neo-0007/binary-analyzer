
void ossl_random_add_conf_module(void)

{
  CONF_module_add("random",random_conf_init,random_conf_deinit);
  return;
}

