
int X509V3_get_value_bool(CONF_VALUE *value,int *asn1_bool)

{
  char cVar1;
  char *__s1;
  int iVar2;
  
  __s1 = value->value;
  if (__s1 != (char *)0x0) {
    iVar2 = strcmp(__s1,"TRUE");
    if ((((iVar2 == 0) || (iVar2 = strcmp(__s1,"true"), iVar2 == 0)) ||
        ((cVar1 = *__s1, cVar1 == 'Y' && (__s1[1] == '\0')))) ||
       ((((cVar1 == 'y' && (__s1[1] == '\0')) || (iVar2 = strcmp(__s1,"YES"), iVar2 == 0)) ||
        (iVar2 = strcmp(__s1,"yes"), iVar2 == 0)))) {
      *asn1_bool = 0xff;
    }
    else {
      iVar2 = strcmp(__s1,"FALSE");
      if (((((iVar2 != 0) && (iVar2 = strcmp(__s1,"false"), iVar2 != 0)) &&
           ((cVar1 != 'N' || (__s1[1] != '\0')))) &&
          (((cVar1 != 'n' || (__s1[1] != '\0')) &&
           ((*__s1 != 'N' || ((__s1[1] != 'O' || (__s1[2] != '\0')))))))) &&
         ((*__s1 != 'n' || ((__s1[1] != 'o' || (__s1[2] != '\0')))))) goto LAB_005898d0;
      *asn1_bool = 0;
    }
    return 1;
  }
LAB_005898d0:
  ERR_new();
  ERR_set_debug("../crypto/x509/v3_utl.c",0x121,"X509V3_get_value_bool");
  ERR_set_error(0x22,0x68,0);
  ERR_add_error_data(4,"name=",value->name,", value=",value->value);
  return 0;
}

