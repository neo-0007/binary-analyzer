
byte ossl_property_has_optional(long param_1)

{
  return *(byte *)(param_1 + 4) & 1;
}

