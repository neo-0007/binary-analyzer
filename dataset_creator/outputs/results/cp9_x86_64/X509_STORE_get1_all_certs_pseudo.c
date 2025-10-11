
long X509_STORE_get1_all_certs(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_1 == 0) {
    ERR_new();
    lVar3 = 0;
    ERR_set_debug("../crypto/x509/x509_lu.c",0x22e,"X509_STORE_get1_all_certs");
    ERR_set_error(0xb,0xc0102,0);
  }
  else {
    lVar3 = OPENSSL_sk_new_null();
    if (lVar3 != 0) {
      iVar1 = X509_STORE_lock(param_1);
      if (iVar1 == 0) {
LAB_0058d248:
        OPENSSL_sk_pop_free(lVar3,X509_free);
        return 0;
      }
      iVar1 = 0;
      uVar4 = X509_STORE_get0_objects(param_1);
      while( true ) {
        iVar2 = OPENSSL_sk_num(uVar4);
        if (iVar2 <= iVar1) break;
        uVar5 = OPENSSL_sk_value(uVar4,iVar1);
        lVar6 = X509_OBJECT_get0_X509(uVar5);
        if (lVar6 != 0) {
          iVar2 = X509_add_cert(lVar3,lVar6,1);
          if (iVar2 == 0) {
            X509_STORE_unlock(param_1);
            goto LAB_0058d248;
          }
        }
        iVar1 = iVar1 + 1;
      }
      X509_STORE_unlock(param_1);
    }
  }
  return lVar3;
}

