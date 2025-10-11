
undefined8
ossl_ecx_key_from_pkcs8(PKCS8_PRIV_KEY_INFO *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ASN1_OCTET_STRING *x;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_44;
  uchar *local_40;
  X509_ALGOR *local_38;
  long local_30;
  
  uVar2 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = PKCS8_pkey_get0((ASN1_OBJECT **)0x0,&local_40,&local_44,&local_38,param_1);
  if (iVar1 != 0) {
    x = d2i_ASN1_OCTET_STRING((ASN1_OCTET_STRING **)0x0,&local_40,(long)local_44);
    if (x == (ASN1_OCTET_STRING *)0x0) {
      local_40 = (uchar *)0x0;
      local_44 = 0;
    }
    else {
      local_40 = (uchar *)ASN1_STRING_get0_data(x);
      local_44 = ASN1_STRING_length(x);
    }
    uVar2 = ossl_ecx_key_op(local_38,local_40,local_44,0,1,param_2,param_3);
    ASN1_OCTET_STRING_free(x);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

