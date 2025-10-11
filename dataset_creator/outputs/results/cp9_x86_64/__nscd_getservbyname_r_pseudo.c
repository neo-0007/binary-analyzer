
void __nscd_getservbyname_r
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  nscd_getserv_r(param_1,sVar1,param_2,0x10,param_3,param_4,param_5,param_6);
  return;
}

