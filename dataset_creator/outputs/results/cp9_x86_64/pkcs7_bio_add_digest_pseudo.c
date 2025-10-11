
undefined8 pkcs7_bio_add_digest(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  BIO_METHOD *type;
  BIO *bp;
  undefined8 uVar1;
  undefined8 uVar2;
  EVP_MD *pEVar3;
  long lVar4;
  BIO *pBVar5;
  EVP_MD *parg;
  long in_FS_OFFSET;
  char acStack_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = BIO_f_md();
  bp = BIO_new(type);
  if (bp == (BIO *)0x0) {
    ERR_new();
    uVar1 = 0x42;
LAB_00547859:
    ERR_set_debug("../crypto/pkcs7/pk7_doit.c",uVar1,"pkcs7_bio_add_digest");
    ERR_set_error(0x21,0x80020,0);
  }
  else {
    OBJ_obj2txt(acStack_68,0x32,(ASN1_OBJECT *)*param_2,0);
    ERR_set_mark();
    uVar1 = ossl_pkcs7_ctx_get0_propq(param_3);
    uVar2 = ossl_pkcs7_ctx_get0_libctx(param_3);
    pEVar3 = (EVP_MD *)EVP_MD_fetch(uVar2,acStack_68,uVar1);
    parg = pEVar3;
    if (pEVar3 == (EVP_MD *)0x0) {
      parg = EVP_get_digestbyname(acStack_68);
      if (parg != (EVP_MD *)0x0) goto LAB_00547789;
      ERR_clear_last_mark();
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x52,"pkcs7_bio_add_digest");
      ERR_set_error(0x21,0x6d,0);
    }
    else {
LAB_00547789:
      ERR_pop_to_mark();
      lVar4 = BIO_ctrl(bp,0x6f,0,parg);
      if (0 < lVar4) {
        EVP_MD_free(pEVar3);
        if ((BIO *)*param_1 == (BIO *)0x0) {
          *param_1 = bp;
          uVar1 = 1;
          goto LAB_005477ce;
        }
        pBVar5 = BIO_push((BIO *)*param_1,bp);
        uVar1 = 1;
        if (pBVar5 != (BIO *)0x0) goto LAB_005477ce;
        ERR_new();
        uVar1 = 0x60;
        goto LAB_00547859;
      }
      ERR_new();
      ERR_set_debug("../crypto/pkcs7/pk7_doit.c",0x58,"pkcs7_bio_add_digest");
      ERR_set_error(0x21,0x80020,0);
      EVP_MD_free(pEVar3);
    }
  }
  BIO_free(bp);
  uVar1 = 0;
LAB_005477ce:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

