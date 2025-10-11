
int OSSL_DECODER_from_data(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  int iVar1;
  BIO *bp;
  long lVar2;
  
  if (((param_2 != (undefined8 *)0x0) && ((void *)*param_2 != (void *)0x0)) &&
     (param_3 != (long *)0x0)) {
    bp = BIO_new_mem_buf((void *)*param_2,(int)*param_3);
    iVar1 = OSSL_DECODER_from_bio(param_1,bp);
    if (iVar1 != 0) {
      lVar2 = BIO_ctrl(bp,3,0,param_2);
      iVar1 = 1;
      *param_3 = lVar2;
    }
    BIO_free(bp);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/encode_decode/decoder_lib.c",0x97,"OSSL_DECODER_from_data");
  ERR_set_error(0x3c,0xc0102,0);
  return 0;
}

