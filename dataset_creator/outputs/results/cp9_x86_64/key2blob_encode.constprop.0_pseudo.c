
int key2blob_encode_constprop_0(undefined8 param_1,EC_KEY *param_2,undefined8 param_3)

{
  uchar *data;
  int len;
  int iVar1;
  BIO *b;
  long in_FS_OFFSET;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)0x0;
  len = i2o_ECPublicKey(param_2,&local_38);
  data = local_38;
  iVar1 = 0;
  if (((0 < len) && (iVar1 = 0, local_38 != (uchar *)0x0)) &&
     (b = (BIO *)ossl_bio_new_from_core_bio(param_1,param_3), iVar1 = 0, b != (BIO *)0x0)) {
    iVar1 = BIO_write(b,data,len);
    BIO_free(b);
  }
  CRYPTO_free(local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

