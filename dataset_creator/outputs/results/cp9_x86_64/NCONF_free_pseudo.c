
void NCONF_free(CONF *conf)

{
  if (conf != (CONF *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004bfeac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*conf->meth->destroy)(conf);
    return;
  }
  return;
}

