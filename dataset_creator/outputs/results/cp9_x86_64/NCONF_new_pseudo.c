
CONF * NCONF_new(CONF_METHOD *meth)

{
  CONF *pCVar1;
  
  pCVar1 = (CONF *)NCONF_new_ex(0,meth);
  return pCVar1;
}

