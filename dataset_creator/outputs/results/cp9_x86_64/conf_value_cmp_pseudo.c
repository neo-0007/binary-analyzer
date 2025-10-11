
int conf_value_cmp(undefined8 *param_1,undefined8 *param_2)

{
  char *__s2;
  int iVar1;
  
  if (((char *)*param_1 != (char *)*param_2) &&
     (iVar1 = strcmp((char *)*param_1,(char *)*param_2), iVar1 != 0)) {
    return iVar1;
  }
  __s2 = (char *)param_2[1];
  if ((char *)param_1[1] == (char *)0x0) {
    return -(uint)(__s2 != (char *)0x0);
  }
  if (__s2 == (char *)0x0) {
    return 1;
  }
  iVar1 = strcmp((char *)param_1[1],__s2);
  return iVar1;
}

