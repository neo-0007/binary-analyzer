
void dn_expand(u_char *param_1,u_char *param_2,u_char *param_3,char *param_4,int param_5)

{
  int iVar1;
  
  iVar1 = ns_name_uncompress(param_1,param_2,param_3,param_4,(long)param_5);
  if ((0 < iVar1) && (*param_4 == '.')) {
    *param_4 = '\0';
    return;
  }
  return;
}

