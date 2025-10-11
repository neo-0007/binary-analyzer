
long ossl_bio_prov_init_bio_method(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = BIO_meth_new(0x419,"BIO to Core filter");
  if (((((lVar2 == 0) || (iVar1 = BIO_meth_set_write_ex(lVar2,bio_core_write_ex), iVar1 == 0)) ||
       (iVar1 = BIO_meth_set_read_ex(lVar2,bio_core_read_ex), iVar1 == 0)) ||
      ((iVar1 = BIO_meth_set_puts(lVar2,bio_core_puts), iVar1 == 0 ||
       (iVar1 = BIO_meth_set_gets(lVar2,bio_core_gets), iVar1 == 0)))) ||
     ((iVar1 = BIO_meth_set_ctrl(lVar2,bio_core_ctrl), iVar1 == 0 ||
      ((iVar1 = BIO_meth_set_create(lVar2,bio_core_new), iVar1 == 0 ||
       (iVar1 = BIO_meth_set_destroy(lVar2,bio_core_free), lVar3 = lVar2, iVar1 == 0)))))) {
    lVar3 = 0;
    BIO_meth_free(lVar2);
  }
  return lVar3;
}

