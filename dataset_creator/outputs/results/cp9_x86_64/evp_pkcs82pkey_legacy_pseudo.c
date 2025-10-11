
EVP_PKEY * evp_pkcs82pkey_legacy(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  EVP_PKEY *pkey;
  long in_FS_OFFSET;
  ASN1_OBJECT *local_90;
  char local_88 [88];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = PKCS8_pkey_get0(&local_90,(uchar **)0x0,(int *)0x0,(X509_ALGOR **)0x0,param_1);
  pkey = (EVP_PKEY *)0x0;
  if (iVar2 != 0) {
    pkey = EVP_PKEY_new();
    if (pkey == (EVP_PKEY *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/evp/evp_pkey.c",0x23,"evp_pkcs82pkey_legacy");
      ERR_set_error(6,0xc0100,0);
    }
    else {
      iVar2 = OBJ_obj2nid(local_90);
      iVar2 = EVP_PKEY_set_type(pkey,iVar2);
      if (iVar2 == 0) {
        i2t_ASN1_OBJECT(local_88,0x50,local_90);
        ERR_new();
        ERR_set_debug("../crypto/evp/evp_pkey.c",0x29,"evp_pkcs82pkey_legacy");
        ERR_set_error(6,0x76,"TYPE=%s",local_88);
      }
      else {
        pcVar1 = *(code **)(*(long *)&pkey->references + 0x138);
        if (pcVar1 == (code *)0x0) {
          pcVar1 = *(code **)(*(long *)&pkey->references + 0x40);
          if (pcVar1 == (code *)0x0) {
            ERR_new();
            ERR_set_debug("../crypto/evp/evp_pkey.c",0x37,"evp_pkcs82pkey_legacy");
            ERR_set_error(6,0x90,0);
          }
          else {
            iVar2 = (*pcVar1)(pkey,param_1);
            if (iVar2 != 0) goto LAB_005f4cd2;
            ERR_new();
            ERR_set_debug("../crypto/evp/evp_pkey.c",0x33,"evp_pkcs82pkey_legacy");
            ERR_set_error(6,0x91,0);
          }
        }
        else {
          iVar2 = (*pcVar1)(pkey,param_1,param_2,param_3);
          if (iVar2 != 0) goto LAB_005f4cd2;
        }
      }
      EVP_PKEY_free(pkey);
      pkey = (EVP_PKEY *)0x0;
    }
  }
LAB_005f4cd2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pkey;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

