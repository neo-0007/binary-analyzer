
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

EC_KEY * EC_KEY_new(void)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ossl_ec_key_new_method_int(0,0,0);
  return pEVar1;
}

