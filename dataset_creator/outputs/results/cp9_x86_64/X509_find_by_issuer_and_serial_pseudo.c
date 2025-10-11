
X509 * X509_find_by_issuer_and_serial(stack_st_X509 *sk,X509_NAME *name,ASN1_INTEGER *serial)

{
  int iVar1;
  X509 *a;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1b8 [392];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (sk != (stack_st_X509 *)0x0) {
    auStack_1b8._8_8_ = *(undefined8 *)serial;
    auStack_1b8._16_8_ = serial->data;
    auStack_1b8._24_8_ = serial->flags;
    iVar2 = 0;
    auStack_1b8._48_8_ = name;
    while( true ) {
      iVar1 = OPENSSL_sk_num(sk);
      if (iVar1 <= iVar2) break;
      a = (X509 *)OPENSSL_sk_value(sk,iVar2);
      iVar1 = X509_issuer_and_serial_cmp(a,(X509 *)auStack_1b8);
      if (iVar1 == 0) goto LAB_0058bdde;
      iVar2 = iVar2 + 1;
    }
  }
  a = (X509 *)0x0;
LAB_0058bdde:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return a;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

