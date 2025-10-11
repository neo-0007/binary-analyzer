
undefined8 i2r_issuer_sign_tool(undefined8 param_1,long *param_2,BIO *param_3,ulong param_4)

{
  long lVar1;
  
  if (param_2 == (long *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_ist.c",99,"i2r_issuer_sign_tool");
    ERR_set_error(0x22,0x80106,0);
    return 0;
  }
  param_4 = param_4 & 0xffffffff;
  if (*param_2 == 0) {
    if (param_2[1] != 0) goto LAB_0061e7d8;
    if (param_2[2] == 0) {
      if (param_2[3] == 0) {
        return 1;
      }
      goto LAB_0061e860;
    }
LAB_0061e81c:
    BIO_printf(param_3,"%*ssignToolCert: ",param_4,&DAT_008343a2);
    BIO_write(param_3,*(void **)((int *)param_2[2] + 2),*(int *)param_2[2]);
LAB_0061e845:
    lVar1 = param_2[3];
  }
  else {
    BIO_printf(param_3,"%*ssignTool    : ",param_4,&DAT_008343a2);
    BIO_write(param_3,*(void **)((int *)*param_2 + 2),*(int *)*param_2);
    if (param_2[1] != 0) {
      BIO_write(param_3,&DAT_0081a1ca,1);
LAB_0061e7d8:
      BIO_printf(param_3,"%*scATool      : ",param_4,&DAT_008343a2);
      BIO_write(param_3,*(void **)((int *)param_2[1] + 2),*(int *)param_2[1]);
      if (param_2[2] != 0) {
LAB_0061e808:
        BIO_write(param_3,&DAT_0081a1ca,1);
        goto LAB_0061e81c;
      }
      goto LAB_0061e845;
    }
    if (param_2[2] != 0) goto LAB_0061e808;
    lVar1 = param_2[3];
  }
  if (lVar1 == 0) {
    return 1;
  }
  BIO_write(param_3,&DAT_0081a1ca,1);
LAB_0061e860:
  BIO_printf(param_3,"%*scAToolCert  : ",param_4,&DAT_008343a2);
  BIO_write(param_3,*(void **)((int *)param_2[3] + 2),*(int *)param_2[3]);
  return 1;
}

