
int key_to_pki_pem_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  int iVar1;
  PKCS8_PRIV_KEY_INFO *x;
  long in_FS_OFFSET;
  int local_3c;
  ASN1_OBJECT *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = -1;
  local_38 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
    if ((param_5 == (code *)0x0) ||
       (iVar1 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_38,&local_3c),
       iVar1 != 0)) {
      x = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,local_38,local_3c,param_6);
      if (x == (PKCS8_PRIV_KEY_INFO *)0x0) {
        if (local_3c == 6) {
          ASN1_OBJECT_free(local_38);
          iVar1 = 0;
        }
        else {
          if (local_3c == 0x10) {
            ASN1_STRING_free((ASN1_STRING *)local_38);
          }
          iVar1 = 0;
        }
      }
      else {
        iVar1 = PEM_write_bio_PKCS8_PRIV_KEY_INFO(param_1,x);
      }
      PKCS8_PRIV_KEY_INFO_free(x);
    }
  }
  else {
    iVar1 = key_to_epki_pem_priv_bio(param_1,param_2,param_3);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

