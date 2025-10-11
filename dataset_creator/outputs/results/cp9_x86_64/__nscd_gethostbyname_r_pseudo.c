
void __nscd_gethostbyname_r
               (char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  nscd_gethst_r(param_1,sVar1 + 1,4,param_2,param_3,param_4,param_5,param_6);
  return;
}

