
IPAddressFamily * make_IPAddressFamily(undefined8 param_1,ushort param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  IPAddressFamily *pIVar3;
  IPAddressFamily *a;
  ASN1_OCTET_STRING *str;
  IPAddressChoice *pIVar4;
  int iVar5;
  long in_FS_OFFSET;
  ushort local_33;
  undefined1 local_31;
  long local_30;
  
  local_33 = param_2 << 8 | param_2 >> 8;
  iVar2 = 2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (undefined4 *)0x0) {
    iVar2 = 3;
    local_31 = (undefined1)*param_3;
  }
  for (iVar5 = 0; iVar1 = OPENSSL_sk_num(param_1), iVar5 < iVar1; iVar5 = iVar5 + 1) {
    pIVar3 = (IPAddressFamily *)OPENSSL_sk_value(param_1,iVar5);
    if ((pIVar3->addressFamily->length == iVar2) &&
       (iVar1 = bcmp(pIVar3->addressFamily->data,&local_33,(long)iVar2), iVar1 == 0))
    goto LAB_00605109;
  }
  a = IPAddressFamily_new();
  if (a != (IPAddressFamily *)0x0) {
    if (a->ipAddressChoice == (IPAddressChoice *)0x0) {
      pIVar4 = IPAddressChoice_new();
      a->ipAddressChoice = pIVar4;
      if (pIVar4 == (IPAddressChoice *)0x0) goto LAB_0060516d;
    }
    str = a->addressFamily;
    if (str == (ASN1_OCTET_STRING *)0x0) {
      str = ASN1_OCTET_STRING_new();
      a->addressFamily = str;
      if (str == (ASN1_OCTET_STRING *)0x0) goto LAB_0060516d;
    }
    iVar2 = ASN1_OCTET_STRING_set(str,&local_33,iVar2);
    if ((iVar2 != 0) && (iVar2 = OPENSSL_sk_push(param_1,a), pIVar3 = a, iVar2 != 0))
    goto LAB_00605109;
  }
LAB_0060516d:
  pIVar3 = (IPAddressFamily *)0x0;
  IPAddressFamily_free(a);
LAB_00605109:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pIVar3;
}

