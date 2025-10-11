
void * ASN1_d2i_fp(xnew *xnew,undefined1 *d2i,FILE *in,void **x)

{
  BIO_METHOD *type;
  BIO *bp;
  void *pvVar1;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    pvVar1 = (void *)0x0;
    ERR_set_debug("../crypto/asn1/a_d2i_fp.c",0x1c,__func___2);
    ERR_set_error(0xd,0x80007,0);
  }
  else {
    BIO_ctrl(bp,0x6a,0,in);
    pvVar1 = ASN1_d2i_bio(xnew,d2i,bp,x);
    BIO_free(bp);
  }
  return pvVar1;
}

