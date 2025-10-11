
undefined8 ossl_namemap_name2num(undefined8 param_1,char *param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    uVar2 = ossl_namemap_name2num_n(param_1,param_2,sVar1);
    return uVar2;
  }
  return 0;
}

