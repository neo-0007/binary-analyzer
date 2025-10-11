
ASN1_OCTET_STRING *
PKCS12_item_i2d_encrypt_ex
          (undefined8 param_1,ASN1_ITEM *param_2,undefined8 param_3,undefined4 param_4,
          ASN1_VALUE *param_5,int param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ASN1_OCTET_STRING *a;
  long lVar2;
  ASN1_OCTET_STRING *pAVar3;
  long in_FS_OFFSET;
  uchar *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (uchar *)0x0;
  a = ASN1_OCTET_STRING_new();
  if (a == (ASN1_OCTET_STRING *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/pkcs12/p12_decr.c",0xb5,"PKCS12_item_i2d_encrypt_ex");
    ERR_set_error(0x23,0xc0100,0);
  }
  else {
    iVar1 = ASN1_item_i2d(param_5,&local_48,param_2);
    if (local_48 == (uchar *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_decr.c",0xba,"PKCS12_item_i2d_encrypt_ex");
      ERR_set_error(0x23,0x66,0);
    }
    else {
      lVar2 = PKCS12_pbe_crypt_ex(param_1,param_3,param_4,local_48,iVar1,&a->data,a,1,param_7,
                                  param_8);
      if (lVar2 != 0) {
        if (param_6 != 0) {
          OPENSSL_cleanse(local_48,(long)iVar1);
        }
        CRYPTO_free(local_48);
        pAVar3 = a;
        goto LAB_00546834;
      }
      ERR_new();
      ERR_set_debug("../crypto/pkcs12/p12_decr.c",0xbf,"PKCS12_item_i2d_encrypt_ex");
      ERR_set_error(0x23,0x67,0);
      CRYPTO_free(local_48);
    }
  }
  pAVar3 = (ASN1_OCTET_STRING *)0x0;
  ASN1_OCTET_STRING_free(a);
LAB_00546834:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pAVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

