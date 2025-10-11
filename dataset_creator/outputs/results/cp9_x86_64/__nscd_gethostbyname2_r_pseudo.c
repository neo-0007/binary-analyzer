
void __nscd_gethostbyname2_r
               (char *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  size_t sVar1;
  
  sVar1 = strlen(param_1);
  nscd_gethst_r(param_1,sVar1 + 1,(param_2 == 10) + '\x04',param_3,param_4,param_5,param_6,param_7);
  return;
}

