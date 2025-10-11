
long v2i_TLS_FEATURE(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  ASN1_INTEGER *a;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *__nptr;
  long in_FS_OFFSET;
  char *local_48;
  long local_40;
  
  iVar4 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = OPENSSL_sk_new_null();
  lVar6 = lVar2;
  if (lVar2 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_tlsf.c",99,"v2i_TLS_FEATURE");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    while( true ) {
      iVar1 = OPENSSL_sk_num(param_3);
      if (iVar1 <= iVar4) break;
      lVar3 = OPENSSL_sk_value(param_3,iVar4);
      __nptr = *(char **)(lVar3 + 0x10);
      if (__nptr == (char *)0x0) {
        __nptr = *(char **)(lVar3 + 8);
        iVar1 = OPENSSL_strcasecmp(__nptr,"status_request");
        if (iVar1 == 0) goto LAB_00610c11;
LAB_00610b4b:
        iVar1 = OPENSSL_strcasecmp(__nptr,"status_request_v2");
        if (iVar1 == 0) {
          uVar5 = 0x11;
          goto LAB_00610b9b;
        }
        uVar5 = strtoll(__nptr,&local_48,10);
        if (((*local_48 == '\0') && (local_48 != __nptr)) && (uVar5 < 0x10000)) goto LAB_00610b9b;
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_tlsf.c",0x77,"v2i_TLS_FEATURE");
        ERR_set_error(0x22,0x8f,0);
        a = (ASN1_STRING *)0x0;
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar3 + 8),", value=",
                           *(undefined8 *)(lVar3 + 0x10));
LAB_00610c50:
        lVar6 = 0;
        OPENSSL_sk_pop_free(lVar2,ASN1_INTEGER_free);
        ASN1_INTEGER_free(a);
        break;
      }
      iVar1 = OPENSSL_strcasecmp(__nptr,"status_request");
      if (iVar1 != 0) goto LAB_00610b4b;
LAB_00610c11:
      uVar5 = 5;
LAB_00610b9b:
      a = ASN1_INTEGER_new();
      if (a == (ASN1_INTEGER *)0x0) {
LAB_00610c20:
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_tlsf.c",0x80,"v2i_TLS_FEATURE");
        ERR_set_error(0x22,0xc0100,0);
        goto LAB_00610c50;
      }
      iVar1 = ASN1_INTEGER_set(a,uVar5);
      if (iVar1 == 0) goto LAB_00610c20;
      iVar1 = OPENSSL_sk_push(lVar2,a);
      if (iVar1 < 1) goto LAB_00610c20;
      iVar4 = iVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

