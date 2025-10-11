
long d2i_SCT_LIST(undefined8 param_1,long *param_2,long param_3)

{
  ASN1_OCTET_STRING *pAVar1;
  long lVar2;
  long in_FS_OFFSET;
  ASN1_OCTET_STRING *local_40;
  uchar *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (uchar *)*param_2;
  local_40 = (ASN1_STRING *)0x0;
  pAVar1 = d2i_ASN1_OCTET_STRING(&local_40,&local_38,param_3);
  if (pAVar1 == (ASN1_OCTET_STRING *)0x0) {
    lVar2 = 0;
  }
  else {
    local_38 = local_40->data;
    lVar2 = o2i_SCT_LIST(param_1,&local_38,(long)local_40->length);
    if (lVar2 != 0) {
      *param_2 = *param_2 + param_3;
    }
    ASN1_OCTET_STRING_free(local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

