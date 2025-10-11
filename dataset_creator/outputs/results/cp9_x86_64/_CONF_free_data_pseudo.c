
void _CONF_free_data(CONF *conf)

{
  if (conf == (CONF *)0x0) {
    return;
  }
  CRYPTO_free(conf[1].meth_data);
  if (conf->data != (lhash_st_CONF_VALUE *)0x0) {
    OPENSSL_LH_set_down_load(conf->data,0);
    OPENSSL_LH_doall_arg(conf->data,value_free_hash,conf->data);
    OPENSSL_LH_doall(conf->data,value_free_stack_doall);
    OPENSSL_LH_free(conf->data);
    return;
  }
  return;
}

