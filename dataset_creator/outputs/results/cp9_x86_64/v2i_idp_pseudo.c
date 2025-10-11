
ISSUING_DIST_POINT * v2i_idp(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  char *pcVar1;
  int iVar2;
  ISSUING_DIST_POINT *a;
  CONF_VALUE *value;
  int iVar3;
  
  iVar3 = 0;
  a = ISSUING_DIST_POINT_new();
  if (a == (ISSUING_DIST_POINT *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_crld.c",0x192,"v2i_idp");
    ERR_set_error(0x22,0xc0100,0);
LAB_0060b018:
    ISSUING_DIST_POINT_free(a);
    a = (ISSUING_DIST_POINT *)0x0;
  }
  else {
    for (; iVar2 = OPENSSL_sk_num(param_3), iVar3 < iVar2; iVar3 = iVar3 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar3);
      __s1 = value->name;
      pcVar1 = value->value;
      iVar2 = set_dist_point_name(a,param_2,value);
      if (iVar2 < 1) {
        if (iVar2 != 0) goto LAB_0060b018;
        iVar2 = strcmp(__s1,"onlyuser");
        if (iVar2 == 0) {
          iVar2 = X509V3_get_value_bool(value,&a->onlyuser);
        }
        else {
          iVar2 = strcmp(__s1,"onlyCA");
          if (iVar2 != 0) {
            iVar2 = strcmp(__s1,"onlyAA");
            if (iVar2 == 0) {
              iVar2 = X509V3_get_value_bool(value,&a->onlyattr);
            }
            else {
              iVar2 = strcmp(__s1,"indirectCRL");
              if (iVar2 != 0) {
                iVar2 = strcmp(__s1,"onlysomereasons");
                if (iVar2 == 0) {
                  iVar2 = set_reasons(&a->onlysomereasons,pcVar1);
                  goto joined_r0x0060b046;
                }
                ERR_new();
                ERR_set_debug("../crypto/x509/v3_crld.c",0x18a,"v2i_idp");
                ERR_set_error(0x22,0x6a,0);
                ERR_add_error_data(4,"name=",value->name,", value=",value->value);
                goto LAB_0060b018;
              }
              iVar2 = X509V3_get_value_bool(value,&a->indirectCRL);
            }
            if (iVar2 != 0) goto LAB_0060afb0;
            goto LAB_0060b018;
          }
          iVar2 = X509V3_get_value_bool(value,&a->onlyCA);
        }
joined_r0x0060b046:
        if (iVar2 == 0) goto LAB_0060b018;
      }
LAB_0060afb0:
    }
  }
  return a;
}

