
bool ASN1_TIME_set_string_X509(ASN1_STRING *param_1,uchar *param_2)

{
  int iVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  bool bVar3;
  ASN1_TIME local_88;
  undefined1 local_68 [20];
  int local_54;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  sVar2 = strlen((char *)param_2);
  local_88.length = (int)sVar2;
  local_88.flags = 0x100;
  local_88.type = 0x17;
  local_88.data = param_2;
  iVar1 = ASN1_TIME_check(&local_88);
  if (iVar1 == 0) {
    local_88.type = 0x18;
    iVar1 = ASN1_TIME_check(&local_88);
    if (iVar1 != 0) goto LAB_005a4c34;
    goto LAB_005a4cac;
  }
LAB_005a4c34:
  if (param_1 == (ASN1_STRING *)0x0) {
    bVar3 = true;
  }
  else {
    if (local_88.type == 0x18) {
      iVar1 = ossl_asn1_time_to_tm(local_68,&local_88);
      if (iVar1 == 0) {
LAB_005a4cac:
        bVar3 = false;
        goto LAB_005a4c73;
      }
      if (local_54 - 0x32U < 100) {
        iVar1 = local_88.length + -1;
        local_88.length = local_88.length + -2;
        local_88.data = (uchar *)CRYPTO_zalloc((long)iVar1,"../crypto/asn1/a_time.c",0x1a6);
        if (local_88.data == (uchar *)0x0) {
          ERR_new();
          ERR_set_debug("../crypto/asn1/a_time.c",0x1a8,"ASN1_TIME_set_string_X509");
          ERR_set_error(0xd,0xc0100,0);
          goto LAB_005a4cac;
        }
        memcpy(local_88.data,param_2 + 2,(long)local_88.length);
        local_88.type = 0x17;
      }
    }
    iVar1 = ASN1_STRING_copy(param_1,&local_88);
    bVar3 = iVar1 != 0;
  }
  if (local_88.data != param_2) {
    CRYPTO_free(local_88.data);
  }
LAB_005a4c73:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

