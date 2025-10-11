
int PKCS7_add_attrib_smimecap(PKCS7_SIGNER_INFO *si,stack_st_X509_ALGOR *cap)

{
  int iVar1;
  ASN1_STRING *data;
  ASN1_ITEM *it;
  
  data = ASN1_STRING_new();
  if (data != (ASN1_STRING *)0x0) {
    it = (ASN1_ITEM *)X509_ALGORS_it();
    iVar1 = ASN1_item_i2d((ASN1_VALUE *)cap,&data->data,it);
    data->length = iVar1;
    iVar1 = PKCS7_add_signed_attribute(si,0xa7,0x10,data);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/pkcs7/pk7_attr.c",0x1a,"PKCS7_add_attrib_smimecap");
  ERR_set_error(0x21,0xc0100,0);
  return 0;
}

