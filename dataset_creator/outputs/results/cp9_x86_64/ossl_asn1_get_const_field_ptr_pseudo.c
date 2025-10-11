
long ossl_asn1_get_const_field_ptr(long *param_1,long param_2)

{
  return *(long *)(param_2 + 0x10) + *param_1;
}

