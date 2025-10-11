
int _CONF_new_data(CONF *conf)

{
  lhash_st_CONF_VALUE *plVar1;
  
  if (conf == (CONF *)0x0) {
    return 0;
  }
  if (conf->data != (lhash_st_CONF_VALUE *)0x0) {
    return 1;
  }
  plVar1 = (lhash_st_CONF_VALUE *)OPENSSL_LH_new(conf_value_hash,conf_value_cmp);
  conf->data = plVar1;
  return (int)(plVar1 != (lhash_st_CONF_VALUE *)0x0);
}

