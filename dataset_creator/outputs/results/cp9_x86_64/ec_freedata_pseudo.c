
void ec_freedata(EC_KEY *key)

{
  EC_KEY_free(key);
  return;
}

