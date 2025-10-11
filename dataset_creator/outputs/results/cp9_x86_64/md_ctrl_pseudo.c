
long md_ctrl(BIO *param_1,int param_2,long param_3,EVP_MD *param_4)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  BIO *bp;
  long lVar2;
  undefined8 uVar3;
  EVP_MD_CTX *out;
  EVP_MD *type;
  
  ctx = (EVP_MD_CTX *)BIO_get_data();
  bp = BIO_next(param_1);
  if (param_2 == 0x6f) {
    iVar1 = EVP_DigestInit_ex(ctx,param_4,(ENGINE *)0x0);
    lVar2 = (long)iVar1;
    if (0 < lVar2) {
      BIO_set_init(param_1,1);
    }
  }
  else if (param_2 < 0x70) {
    if (param_2 == 0xc) {
      out = (EVP_MD_CTX *)BIO_get_data(param_4);
      iVar1 = EVP_MD_CTX_copy_ex(out,ctx);
      if (iVar1 == 0) {
        return 0;
      }
      BIO_set_init(param_1,1);
      lVar2 = 1;
    }
    else {
      if (param_2 != 0x65) {
        if (param_2 == 1) {
          iVar1 = BIO_get_init(param_1);
          if (iVar1 == 0) {
            return 0;
          }
          type = (EVP_MD *)EVP_MD_CTX_get0_md(ctx);
          iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if ((long)iVar1 < 1) {
            return (long)iVar1;
          }
          param_2 = 1;
        }
LAB_005f32e0:
        lVar2 = BIO_ctrl(bp,param_2,param_3,param_4);
        return lVar2;
      }
      BIO_clear_flags(param_1,0xf);
      lVar2 = BIO_ctrl(bp,0x65,param_3,param_4);
      BIO_copy_next_retry(param_1);
    }
  }
  else {
    if (param_2 == 0x78) {
      *(EVP_MD_CTX **)param_4 = ctx;
      BIO_set_init(param_1,1);
      return 1;
    }
    if (param_2 == 0x94) {
      iVar1 = BIO_get_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      BIO_set_data(param_1,param_4);
      lVar2 = 1;
    }
    else {
      if (param_2 != 0x70) goto LAB_005f32e0;
      iVar1 = BIO_get_init(param_1);
      if (iVar1 == 0) {
        return 0;
      }
      uVar3 = EVP_MD_CTX_get0_md(ctx);
      param_4->type = (int)uVar3;
      param_4->pkey_type = (int)((ulong)uVar3 >> 0x20);
      lVar2 = 1;
    }
  }
  return lVar2;
}

