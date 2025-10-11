
bool OSSL_HTTP_REQ_CTX_set1_req
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,BIO *param_4)

{
  int iVar1;
  bool bVar2;
  
  if (param_4 != (BIO *)0x0) {
    bVar2 = false;
    param_4 = (BIO *)ASN1_item_i2d_mem_bio(param_3,param_4);
    if (param_4 == (BIO *)0x0) goto LAB_005f64fa;
  }
  iVar1 = set1_content(param_1,param_2,param_4);
  bVar2 = iVar1 != 0;
LAB_005f64fa:
  BIO_free(param_4);
  return bVar2;
}

