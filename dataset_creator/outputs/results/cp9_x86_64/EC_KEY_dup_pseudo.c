
EC_KEY * EC_KEY_dup(EC_KEY *src)

{
  EC_KEY *pEVar1;
  
  pEVar1 = (EC_KEY *)ossl_ec_key_dup(src,0x87);
  return pEVar1;
}

