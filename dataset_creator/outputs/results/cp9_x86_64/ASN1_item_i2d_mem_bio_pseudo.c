
BIO * ASN1_item_i2d_mem_bio(ASN1_ITEM *param_1,void *param_2)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *out;
  BIO *pBVar2;
  
  if ((param_1 != (ASN1_ITEM *)0x0) && (param_2 != (void *)0x0)) {
    type = BIO_s_mem();
    out = BIO_new(type);
    pBVar2 = out;
    if (out != (BIO *)0x0) {
      iVar1 = ASN1_item_i2d_bio(param_1,out,param_2);
      if (iVar1 < 1) {
        pBVar2 = (BIO *)0x0;
        BIO_free(out);
      }
    }
    return pBVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/asn1/a_i2d_fp.c",0x76,"ASN1_item_i2d_mem_bio");
  ERR_set_error(0xd,0xc0102,0);
  return (BIO *)0x0;
}

