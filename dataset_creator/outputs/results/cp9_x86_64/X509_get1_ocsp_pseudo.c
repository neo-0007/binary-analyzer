
stack_st_OPENSSL_STRING * X509_get1_ocsp(X509 *x)

{
  int iVar1;
  AUTHORITY_INFO_ACCESS *a;
  undefined8 *puVar2;
  int iVar3;
  long in_FS_OFFSET;
  AUTHORITY_INFO_ACCESS *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (AUTHORITY_INFO_ACCESS *)0x0;
  a = (AUTHORITY_INFO_ACCESS *)X509_get_ext_d2i(x,0xb1,(int *)0x0,(int *)0x0);
  if (a != (AUTHORITY_INFO_ACCESS *)0x0) {
    iVar3 = 0;
    while( true ) {
      iVar1 = OPENSSL_sk_num(a);
      if (iVar1 <= iVar3) break;
      puVar2 = (undefined8 *)OPENSSL_sk_value(a,iVar3);
      iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*puVar2);
      if ((iVar1 == 0xb2) && (*(int *)puVar2[1] == 6)) {
        iVar1 = append_ia5(&local_38,*(undefined8 *)((int *)puVar2[1] + 2));
        if (iVar1 == 0) break;
      }
      iVar3 = iVar3 + 1;
    }
    AUTHORITY_INFO_ACCESS_free(a);
    a = local_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (stack_st_OPENSSL_STRING *)a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

