
void X509_get_signature_type(long param_1)

{
  int type;
  
  type = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  EVP_PKEY_type(type);
  return;
}

