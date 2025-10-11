
undefined8
__nss_services_lookup2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = __nss_database_get(0xe,&__nss_services_database);
  if (cVar1 != '\0') {
    *param_1 = __nss_services_database;
    uVar2 = __nss_lookup(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0xffffffff;
}

