
void derivation_compare(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = strcmp((char *)*param_1,(char *)*param_2);
  if (iVar1 == 0) {
    strcmp((char *)param_1[1],(char *)param_2[1]);
    return;
  }
  return;
}

