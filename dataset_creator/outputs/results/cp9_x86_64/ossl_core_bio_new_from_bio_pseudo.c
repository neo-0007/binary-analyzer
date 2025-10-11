
long ossl_core_bio_new_from_bio(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = core_bio_new();
  if (lVar2 != 0) {
    iVar1 = BIO_up_ref(param_1);
    if (iVar1 != 0) {
      *(undefined8 *)(lVar2 + 0x10) = param_1;
      return lVar2;
    }
  }
  ossl_core_bio_free(lVar2);
  return 0;
}

