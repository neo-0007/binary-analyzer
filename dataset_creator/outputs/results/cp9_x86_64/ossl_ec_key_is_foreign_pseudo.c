
bool ossl_ec_key_is_foreign(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    return true;
  }
  lVar1 = EC_KEY_get_method();
  lVar2 = EC_KEY_OpenSSL();
  return lVar1 != lVar2;
}

