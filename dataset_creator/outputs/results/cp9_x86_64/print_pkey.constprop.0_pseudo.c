
uint print_pkey_constprop_0(int *param_1,BIO *param_2,int param_3,undefined4 param_4,code *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  BIO_METHOD *type;
  BIO *b;
  long larg;
  long lVar6;
  
  lVar6 = (long)param_3;
  larg = 0;
  bVar1 = false;
  if (0 < lVar6) {
    lVar5 = BIO_ctrl(param_2,0x51,0,(void *)0x0);
    larg = 0;
    if (-1 < lVar5) {
      larg = lVar5;
    }
    lVar5 = BIO_ctrl(param_2,0x50,lVar6,(void *)0x0);
    if (lVar5 < 1) {
      type = (BIO_METHOD *)BIO_f_prefix();
      b = BIO_new(type);
      param_2 = BIO_push(b,param_2);
      if (param_2 == (BIO *)0x0) {
        return 0;
      }
      lVar6 = BIO_ctrl(param_2,0x50,lVar6,(void *)0x0);
      if (lVar6 < 1) {
        BIO_ctrl(param_2,0x50,larg,(void *)0x0);
        BIO_pop(param_2);
        BIO_free(param_2);
        return 0;
      }
      bVar1 = true;
    }
    else {
      lVar6 = BIO_ctrl(param_2,0x50,lVar6,(void *)0x0);
      bVar1 = false;
      if (lVar6 < 1) {
        BIO_ctrl(param_2,0x50,larg,(void *)0x0);
        return 0;
      }
    }
  }
  uVar4 = OSSL_ENCODER_CTX_new_for_pkey(param_1,param_4,"TEXT",0,0);
  iVar2 = OSSL_ENCODER_CTX_get_num_encoders(uVar4);
  if (iVar2 == 0) {
    OSSL_ENCODER_CTX_free(uVar4);
  }
  else {
    uVar3 = OSSL_ENCODER_to_bio(uVar4);
    OSSL_ENCODER_CTX_free(uVar4);
    if (uVar3 != 0xfffffffe) goto LAB_0052f512;
  }
  if (param_5 == (code *)0x0) {
    uVar3 = BIO_indent(param_2,0,0x80);
    if (uVar3 != 0) {
      OBJ_nid2ln(*param_1);
      iVar2 = BIO_printf(param_2,"%s algorithm \"%s\" unsupported\n","Public Key");
      uVar3 = (uint)(0 < iVar2);
    }
  }
  else {
    uVar3 = (*param_5)(param_2,param_1,0);
  }
LAB_0052f512:
  BIO_ctrl(param_2,0x50,larg,(void *)0x0);
  if (bVar1) {
    BIO_pop(param_2);
    BIO_free(param_2);
  }
  return uVar3;
}

