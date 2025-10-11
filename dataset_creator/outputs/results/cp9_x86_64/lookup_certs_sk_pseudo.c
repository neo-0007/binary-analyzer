
long lookup_certs_sk(long param_1,X509_NAME *param_2)

{
  int iVar1;
  long lVar2;
  X509 *a;
  X509_NAME *b;
  int iVar3;
  
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 != 0) {
    for (iVar3 = 0; iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x28)), iVar3 < iVar1;
        iVar3 = iVar3 + 1) {
      a = (X509 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x28),iVar3);
      b = X509_get_subject_name(a);
      iVar1 = X509_NAME_cmp(param_2,b);
      if ((iVar1 == 0) && (iVar1 = X509_add_cert(lVar2,a,1), iVar1 == 0)) {
        OPENSSL_sk_pop_free(lVar2,X509_free);
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
        return 0;
      }
    }
  }
  return lVar2;
}

