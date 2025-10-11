
ASN1_OCTET_STRING * SXNET_get_id_asc(SXNET *sx,char *zone)

{
  ASN1_INTEGER *zone_00;
  ASN1_OCTET_STRING *pAVar1;
  
  zone_00 = s2i_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,zone);
  if (zone_00 == (ASN1_INTEGER *)0x0) {
    ERR_new();
    pAVar1 = (ASN1_OCTET_STRING *)0x0;
    ERR_set_debug("../crypto/x509/v3_sxnet.c",0xce,"SXNET_get_id_asc");
    ERR_set_error(0x22,0x83,0);
  }
  else {
    pAVar1 = SXNET_get_id_INTEGER(sx,zone_00);
    ASN1_INTEGER_free(zone_00);
  }
  return pAVar1;
}

