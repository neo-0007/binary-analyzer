
undefined8 ossl_namemap_add_name(undefined8 param_1,undefined4 param_2,char *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    uVar2 = ossl_namemap_add_name_n(param_1,param_2,param_3,sVar1);
    return uVar2;
  }
  return 0;
}

