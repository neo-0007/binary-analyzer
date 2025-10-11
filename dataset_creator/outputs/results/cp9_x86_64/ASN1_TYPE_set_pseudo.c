
void ASN1_TYPE_set(ASN1_TYPE *a,int type,void *value)

{
  ASN1_TYPE *local_20 [2];
  
  if (((a->type & 0xfffffffbU) != 1) && ((a->value).ptr != (char *)0x0)) {
    local_20[0] = a;
    ossl_asn1_primitive_free(local_20,0,0);
    a = local_20[0];
  }
  a->type = type;
  if (type != 1) {
    (a->value).ptr = (char *)value;
    return;
  }
  (a->value).boolean = -(uint)(value != (void *)0x0) & 0xff;
  return;
}

