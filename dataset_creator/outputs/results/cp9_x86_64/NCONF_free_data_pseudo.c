
void NCONF_free_data(CONF *conf)

{
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bfecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*conf->meth->destroy_data)(conf);
    return;
  }
  return;
}

