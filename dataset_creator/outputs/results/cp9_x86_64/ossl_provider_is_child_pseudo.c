
byte ossl_provider_is_child(long param_1)

{
  return *(byte *)(param_1 + 200) & 1;
}

