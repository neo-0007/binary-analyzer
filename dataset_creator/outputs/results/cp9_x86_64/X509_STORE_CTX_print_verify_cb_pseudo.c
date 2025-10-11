
int X509_STORE_CTX_print_verify_cb(int param_1,X509_STORE_CTX *param_2)

{
  uint uVar1;
  uint uVar2;
  BIO_METHOD *type;
  BIO *bio;
  char *pcVar3;
  X509_STORE_CTX *pXVar4;
  undefined8 uVar5;
  X509 *pXVar6;
  long lVar7;
  void *ptr;
  char *pcVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 auVar11 [16];
  
  if (param_1 != 0) {
    return param_1;
  }
  if (param_2 == (X509_STORE_CTX *)0x0) {
    return 0;
  }
  uVar1 = X509_STORE_CTX_get_error(param_2);
  type = BIO_s_mem();
  bio = BIO_new(type);
  pcVar3 = X509_verify_cert_error_string((long)(int)uVar1);
  uVar2 = X509_STORE_CTX_get_error_depth(param_2);
  pXVar4 = X509_STORE_CTX_get0_parent_ctx(param_2);
  pcVar8 = "CRL path validation";
  if (pXVar4 == (X509_STORE_CTX *)0x0) {
    pcVar8 = "Certificate verification";
  }
  BIO_printf(bio,"%s at depth = %d error = %d (%s)\n",pcVar8,(ulong)uVar2,(ulong)uVar1,pcVar3);
  uVar5 = X509_STORE_CTX_get0_store(param_2);
  uVar5 = X509_STORE_get0_param(uVar5);
  if (uVar1 == 0x3f) {
    lVar7 = X509_VERIFY_PARAM_get0_email(uVar5);
    if (lVar7 != 0) {
      BIO_printf(bio,"Expected email address = %s\n",lVar7);
    }
LAB_00585f60:
    BIO_printf(bio,"Failure for:\n");
    pXVar6 = X509_STORE_CTX_get_current_cert(param_2);
    ossl_x509_print_ex_brief(bio,pXVar6,0x100);
LAB_00585ef8:
    if ((uVar1 != 2) &&
       ((0x33 < uVar1 - 0x13 || ((0x8000000004003U >> ((ulong)(uVar1 - 0x13) & 0x3f) & 1) == 0))))
    goto LAB_00585e84;
  }
  else {
    if (uVar1 == 0x40) {
      ptr = (void *)X509_VERIFY_PARAM_get1_ip_asc(uVar5);
      if (ptr != (void *)0x0) {
        BIO_printf(bio,"Expected IP address = %s\n",ptr);
      }
      CRYPTO_free(ptr);
      goto LAB_00585f60;
    }
    if (uVar1 == 0x3e) {
      BIO_printf(bio,"Expected hostname(s) = ");
      iVar10 = 0;
      while( true ) {
        iVar10 = iVar10 + 1;
        auVar11 = X509_VERIFY_PARAM_get0_host(uVar5);
        if (auVar11._0_8_ == 0) break;
        puVar9 = &DAT_007f7194;
        if (iVar10 == 1) {
          puVar9 = &DAT_008343a2;
        }
        BIO_printf(bio,"%s%s",puVar9,auVar11._0_8_);
      }
      BIO_printf(bio,"\n",auVar11._8_8_,0);
      goto LAB_00585f60;
    }
    BIO_printf(bio,"Failure for:\n");
    pXVar6 = X509_STORE_CTX_get_current_cert(param_2);
    ossl_x509_print_ex_brief(bio,pXVar6,0x100);
    if ((uVar1 != 0x1b) && (uVar1 != 0x12)) goto LAB_00585ef8;
  }
  BIO_printf(bio,"Non-trusted certs:\n");
  uVar5 = X509_STORE_CTX_get0_untrusted(param_2);
  print_certs_isra_0(bio,uVar5);
  BIO_printf(bio,"Certs in trust store:\n");
  lVar7 = X509_STORE_CTX_get0_store(param_2);
  if (lVar7 == 0) {
    BIO_printf(bio,"    (no trusted store)\n");
  }
  else {
    uVar5 = X509_STORE_get1_all_certs(lVar7);
    print_certs_isra_0(bio,uVar5);
    OPENSSL_sk_pop_free(uVar5,X509_free);
  }
LAB_00585e84:
  ERR_new();
  ERR_set_debug("../crypto/x509/t_x509.c",0x20b,"X509_STORE_CTX_print_verify_cb");
  ERR_set_error(0xb,0x8b,0);
  ERR_add_error_mem_bio(&DAT_0081a1ca,bio);
  BIO_free(bio);
  return 0;
}

