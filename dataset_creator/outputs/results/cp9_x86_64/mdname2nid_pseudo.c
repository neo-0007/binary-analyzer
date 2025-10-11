
void mdname2nid(char *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_2 != 0) {
    return;
  }
  iVar1 = OBJ_sn2nid(param_1);
  *param_2 = iVar1;
  if (iVar1 != 0) {
    return;
  }
  iVar1 = OBJ_ln2nid(param_1);
  *param_2 = iVar1;
  return;
}

