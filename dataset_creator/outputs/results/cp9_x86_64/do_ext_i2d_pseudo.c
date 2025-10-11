
X509_EXTENSION * do_ext_i2d(long param_1,int param_2,int param_3,ASN1_VALUE *param_4)

{
  uchar *puVar1;
  int num;
  ASN1_ITEM *it;
  ASN1_OCTET_STRING *data;
  X509_EXTENSION *pXVar2;
  long in_FS_OFFSET;
  uchar *local_50;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (uchar *)0x0;
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    num = (**(code **)(param_1 + 0x28))(param_4,0);
    if ((0 < num) &&
       (local_50 = (uchar *)CRYPTO_malloc(num,"../crypto/x509/v3_conf.c",0x9f),
       local_50 != (uchar *)0x0)) {
      local_48 = local_50;
      (**(code **)(param_1 + 0x28))(param_4,&local_48);
      goto LAB_0061d4f5;
    }
    data = (ASN1_STRING *)0x0;
  }
  else {
    it = (ASN1_ITEM *)(**(code **)(param_1 + 8))();
    num = ASN1_item_i2d(param_4,&local_50,it);
    if (-1 < num) {
LAB_0061d4f5:
      data = ASN1_OCTET_STRING_new();
      puVar1 = local_50;
      if (data != (ASN1_OCTET_STRING *)0x0) {
        local_50 = (uchar *)0x0;
        data->data = puVar1;
        data->length = num;
        pXVar2 = X509_EXTENSION_create_by_NID((X509_EXTENSION **)0x0,param_2,param_3,data);
        if (pXVar2 != (X509_EXTENSION *)0x0) {
          ASN1_OCTET_STRING_free(data);
          goto LAB_0061d537;
        }
        goto LAB_0061d569;
      }
    }
    data = (ASN1_STRING *)0x0;
  }
LAB_0061d569:
  ERR_new();
  pXVar2 = (X509_EXTENSION *)0x0;
  ERR_set_debug("../crypto/x509/v3_conf.c",0xb2,"do_ext_i2d");
  ERR_set_error(0x22,0xc0100,0);
  CRYPTO_free(local_50);
  ASN1_OCTET_STRING_free(data);
LAB_0061d537:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pXVar2;
}

