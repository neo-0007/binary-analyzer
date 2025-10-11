
int ASN1_TYPE_get_octetstring(ASN1_TYPE *a,uchar *data,int max_len)

{
  int iVar1;
  void *__src;
  
  if ((a->type == 4) && ((a->value).ptr != (char *)0x0)) {
    __src = (void *)ASN1_STRING_get0_data();
    iVar1 = ASN1_STRING_length((a->value).asn1_string);
    if (iVar1 <= max_len) {
      max_len = iVar1;
    }
    if ((0 < max_len) && (data != (uchar *)0x0)) {
      memcpy(data,__src,(long)max_len);
      return iVar1;
    }
  }
  else {
    ERR_new();
    ERR_set_debug("../crypto/asn1/evp_asn1.c",0x28,"ASN1_TYPE_get_octetstring");
    iVar1 = -1;
    ERR_set_error(0xd,0x6d,0);
  }
  return iVar1;
}

