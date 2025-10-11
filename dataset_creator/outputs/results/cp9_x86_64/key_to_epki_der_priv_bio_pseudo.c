
int key_to_epki_der_priv_bio
              (BIO *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,code *param_5,
              undefined8 param_6,long param_7)

{
  int iVar1;
  ASN1_OBJECT *a;
  int iVar2;
  PKCS8_PRIV_KEY_INFO *a_00;
  X509_SIG *p8;
  long in_FS_OFFSET;
  int local_4c;
  ASN1_OBJECT *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_4c = -1;
  local_48 = (ASN1_OBJECT *)0x0;
  if (*(int *)(param_7 + 0xc) == 0) {
LAB_00458cd0:
    iVar2 = 0;
  }
  else {
    if (param_5 == (code *)0x0) {
      a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,0,0xffffffff,param_6);
      if (a_00 == (PKCS8_PRIV_KEY_INFO *)0x0) {
        p8 = (X509_SIG *)0x0;
        iVar2 = 0;
      }
      else {
LAB_00458c98:
        p8 = (X509_SIG *)p8info_to_encp8(a_00,param_7);
        iVar2 = 0;
        PKCS8_PRIV_KEY_INFO_free(a_00);
        if (p8 != (X509_SIG *)0x0) {
          iVar2 = i2d_PKCS8_bio(param_1,p8);
        }
      }
    }
    else {
      iVar2 = (*param_5)(param_2,param_3,*(undefined4 *)(param_7 + 8),&local_48,&local_4c);
      a = local_48;
      iVar1 = local_4c;
      if (iVar2 == 0) goto LAB_00458cd0;
      a_00 = (PKCS8_PRIV_KEY_INFO *)key_to_p8info(param_2,param_3,local_48,local_4c,param_6);
      if (a_00 != (PKCS8_PRIV_KEY_INFO *)0x0) goto LAB_00458c98;
      if (iVar1 == 6) {
        p8 = (X509_SIG *)0x0;
        iVar2 = 0;
        ASN1_OBJECT_free(a);
      }
      else {
        p8 = (X509_SIG *)0x0;
        iVar2 = 0;
        if (iVar1 == 0x10) {
          p8 = (X509_SIG *)0x0;
          iVar2 = 0;
          ASN1_STRING_free((ASN1_STRING *)a);
        }
      }
    }
    X509_SIG_free(p8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

