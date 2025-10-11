
undefined8
ASN1_item_d2i_fp_ex(undefined8 param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0;
    ERR_set_debug("../crypto/asn1/a_d2i_fp.c",0x5c,"ASN1_item_d2i_fp_ex");
    ERR_set_error(0xd,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,param_2);
    uVar1 = ASN1_item_d2i_bio_ex(param_1,bp,param_3,param_4,param_5);
    BIO_free(bp);
  }
  return uVar1;
}

