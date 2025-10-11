
stack_st_CONF_VALUE *
i2v_AUTHORITY_KEYID(undefined8 param_1,undefined8 *param_2,stack_st_CONF_VALUE *param_3)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  stack_st_CONF_VALUE *psVar4;
  undefined8 uVar5;
  char *name;
  stack_st_CONF_VALUE *local_30 [2];
  
  piVar1 = (int *)*param_2;
  local_30[0] = param_3;
  if (piVar1 == (int *)0x0) {
LAB_0061cd74:
    psVar4 = local_30[0];
    if (((GENERAL_NAMES *)param_2[1] == (GENERAL_NAMES *)0x0) ||
       (psVar4 = i2v_GENERAL_NAMES((X509V3_EXT_METHOD *)0x0,(GENERAL_NAMES *)param_2[1],local_30[0])
       , psVar4 != (stack_st_CONF_VALUE *)0x0)) {
      local_30[0] = psVar4;
      piVar1 = (int *)param_2[2];
      if (piVar1 == (int *)0x0) {
        return local_30[0];
      }
      pcVar3 = (char *)OPENSSL_buf2hexstr(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
      if (pcVar3 == (char *)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_akid.c",0x47,"i2v_AUTHORITY_KEYID");
        ERR_set_error(0x22,0xc0100,0);
      }
      else {
        iVar2 = X509V3_add_value("serial",pcVar3,local_30);
        if (iVar2 != 0) {
          CRYPTO_free(pcVar3);
          return local_30[0];
        }
        CRYPTO_free(pcVar3);
      }
      goto LAB_0061ce43;
    }
    ERR_new();
    uVar5 = 0x3f;
  }
  else {
    pcVar3 = (char *)OPENSSL_buf2hexstr(*(undefined8 *)(piVar1 + 2),(long)*piVar1);
    if (pcVar3 == (char *)0x0) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_akid.c",0x31,"i2v_AUTHORITY_KEYID");
      ERR_set_error(0x22,0xc0100,0);
      return (stack_st_CONF_VALUE *)0x0;
    }
    name = "keyid";
    if ((param_2[1] == 0) && (name = (char *)param_2[2], name != (char *)0x0)) {
      name = "keyid";
    }
    iVar2 = X509V3_add_value(name,pcVar3,local_30);
    if (iVar2 != 0) {
      CRYPTO_free(pcVar3);
      goto LAB_0061cd74;
    }
    CRYPTO_free(pcVar3);
    ERR_new();
    uVar5 = 0x37;
  }
  ERR_set_debug("../crypto/x509/v3_akid.c",uVar5,"i2v_AUTHORITY_KEYID");
  ERR_set_error(0x22,0x8000b,0);
LAB_0061ce43:
  if (param_3 == (stack_st_CONF_VALUE *)0x0) {
    OPENSSL_sk_pop_free(local_30[0],X509V3_conf_free);
    return (stack_st_CONF_VALUE *)0x0;
  }
  return (stack_st_CONF_VALUE *)0x0;
}

