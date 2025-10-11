
uint ossl_v3_name_cmp(char *param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  uVar1 = strncmp(param_1,param_2,(long)(int)sVar2);
  if (uVar1 == 0) {
    uVar1 = (uint)(param_1[(int)sVar2] != '\0' && param_1[(int)sVar2] != '.');
  }
  return uVar1;
}

