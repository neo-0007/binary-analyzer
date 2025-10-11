
void * simple_get_asn1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      ASN1_ITEM *param_5)

{
  BIO *in;
  void *pvVar1;
  
  in = (BIO *)OSSL_HTTP_get(param_1,0,0,param_2,param_3,0,0,0x400,0,0,1,0x19000,param_4);
  pvVar1 = ASN1_item_d2i_bio(param_5,in,(void *)0x0);
  BIO_free(in);
  return pvVar1;
}

