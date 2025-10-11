
int PKCS7_add_recipient_info(PKCS7 *p7,PKCS7_RECIP_INFO *ri)

{
  int iVar1;
  stack_st_PKCS7_RECIP_INFO *psVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    psVar2 = (stack_st_PKCS7_RECIP_INFO *)((p7->d).data)->data;
  }
  else {
    if (iVar1 != 0x18) {
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_lib.c",0x254,"PKCS7_add_recipient_info");
      ERR_set_error(0x21,0x71,0);
      return 0;
    }
    psVar2 = ((p7->d).signed_and_enveloped)->recipientinfo;
  }
  iVar1 = OPENSSL_sk_push(psVar2,ri);
  return (int)(iVar1 != 0);
}

