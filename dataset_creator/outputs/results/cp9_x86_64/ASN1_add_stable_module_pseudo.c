
void ASN1_add_stable_module(void)

{
  CONF_module_add("stbl_section",stbl_module_init,stbl_module_finish);
  return;
}

