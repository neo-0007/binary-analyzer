
int transcmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *__s2;
  char *__s1;
  
  if (param_2[4] == 0) {
    __s2 = (char *)param_2[7];
  }
  else {
    __s2 = (char *)(param_2 + 7);
  }
  __s1 = (char *)(param_1 + 7);
  if (param_1[4] == 0) {
    __s1 = (char *)param_1[7];
  }
  iVar1 = strcmp(__s1,__s2);
  if (iVar1 == 0) {
    iVar1 = strcmp((char *)*param_1,(char *)*param_2);
    if (iVar1 == 0) {
      iVar1 = strcmp((char *)param_1[2],(char *)param_2[2]);
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 1) - *(int *)(param_2 + 1);
      }
    }
  }
  return iVar1;
}

