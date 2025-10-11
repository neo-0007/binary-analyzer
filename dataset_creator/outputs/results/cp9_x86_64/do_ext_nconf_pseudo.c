
undefined8
do_ext_nconf(CONF *param_1,v3_ext_ctx *param_2,int param_3,undefined4 param_4,char *param_5)

{
  int iVar1;
  X509V3_EXT_METHOD *method;
  stack_st_CONF_VALUE *values;
  ASN1_VALUE *val;
  undefined8 uVar2;
  ASN1_ITEM *it;
  X509V3_EXT_S2I pXVar3;
  char *pcVar4;
  
  if (param_3 == 0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_conf.c",0x58,"do_ext_nconf");
    ERR_set_error(0x22,0x82,0);
    return 0;
  }
  method = X509V3_EXT_get_nid(param_3);
  if (method == (X509V3_EXT_METHOD *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_conf.c",0x5c,"do_ext_nconf");
    ERR_set_error(0x22,0x81,0);
    return 0;
  }
  if (method->v2i == (X509V3_EXT_V2I)0x0) {
    pXVar3 = method->s2i;
    if (pXVar3 == (X509V3_EXT_S2I)0x0) {
      pXVar3 = (X509V3_EXT_S2I)method->r2i;
      if (pXVar3 == (X509V3_EXT_S2I)0x0) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_conf.c",0x7c,"do_ext_nconf");
        pcVar4 = OBJ_nid2sn(param_3);
        ERR_set_error(0x22,0x67,"name=%s",pcVar4);
        return 0;
      }
      if ((param_2->db == (void *)0x0) || (param_2->db_meth == (X509V3_CONF_METHOD *)0x0)) {
        ERR_new();
        ERR_set_debug("../crypto/x509/v3_conf.c",0x76,"do_ext_nconf");
        ERR_set_error(0x22,0x88,0);
        return 0;
      }
    }
    val = (ASN1_VALUE *)(*pXVar3)(method,param_2,param_5);
  }
  else {
    if (*param_5 == '@') {
      values = NCONF_get_section(param_1,param_5 + 1);
    }
    else {
      values = X509V3_parse_list(param_5);
    }
    if ((values == (stack_st_CONF_VALUE *)0x0) || (iVar1 = OPENSSL_sk_num(values), iVar1 < 1)) {
      ERR_new();
      ERR_set_debug("../crypto/x509/v3_conf.c",0x66,"do_ext_nconf");
      pcVar4 = OBJ_nid2sn(param_3);
      ERR_set_error(0x22,0x69,"name=%s,section=%s",pcVar4,param_5);
      if (*param_5 == '@') {
        return 0;
      }
      OPENSSL_sk_pop_free(values,X509V3_conf_free);
      return 0;
    }
    val = (ASN1_VALUE *)(*method->v2i)(method,param_2,values);
    if (*param_5 != '@') {
      OPENSSL_sk_pop_free(values,X509V3_conf_free);
    }
  }
  if (val == (ASN1_VALUE *)0x0) {
    return 0;
  }
  uVar2 = do_ext_i2d(method,param_3,param_4,val);
  if (method->it == (ASN1_ITEM_EXP *)0x0) {
    (*method->ext_free)(val);
    return uVar2;
  }
  it = (ASN1_ITEM *)(*(code *)method->it)();
  ASN1_item_free(val,it);
  return uVar2;
}

