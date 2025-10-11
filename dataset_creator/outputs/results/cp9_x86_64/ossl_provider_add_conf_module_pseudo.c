
void ossl_provider_add_conf_module(void)

{
  CONF_module_add("providers",provider_conf_init,(undefined1 *)0x0);
  return;
}

