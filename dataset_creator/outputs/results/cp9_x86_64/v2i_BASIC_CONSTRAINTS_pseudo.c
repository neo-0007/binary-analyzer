
BASIC_CONSTRAINTS * v2i_BASIC_CONSTRAINTS(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s1;
  int iVar1;
  BASIC_CONSTRAINTS *a;
  CONF_VALUE *value;
  int iVar2;
  
  iVar2 = 0;
  a = BASIC_CONSTRAINTS_new();
  if (a == (BASIC_CONSTRAINTS *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/x509/v3_bcons.c",0x40,"v2i_BASIC_CONSTRAINTS");
    ERR_set_error(0x22,0xc0100,0);
  }
  else {
    for (; iVar1 = OPENSSL_sk_num(param_3), iVar2 < iVar1; iVar2 = iVar2 + 1) {
      value = (CONF_VALUE *)OPENSSL_sk_value(param_3,iVar2);
      __s1 = value->name;
      if (((*__s1 == 'C') && (__s1[1] == 'A')) && (__s1[2] == '\0')) {
        iVar1 = X509V3_get_value_bool(value,&a->ca);
      }
      else {
        iVar1 = strcmp(__s1,"pathlen");
        if (iVar1 != 0) {
          ERR_new();
          ERR_set_debug("../crypto/x509/v3_bcons.c",0x4c,"v2i_BASIC_CONSTRAINTS");
          ERR_set_error(0x22,0x6a,0);
          ERR_add_error_data(4,"name=",value->name,", value=",value->value);
          goto LAB_00608c4c;
        }
        iVar1 = X509V3_get_value_int(value,&a->pathlen);
      }
      if (iVar1 == 0) {
LAB_00608c4c:
        BASIC_CONSTRAINTS_free(a);
        return (BASIC_CONSTRAINTS *)0x0;
      }
    }
  }
  return a;
}

