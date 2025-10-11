
int dn_skipname(u_char *param_1,u_char *param_2)

{
  int iVar1;
  u_char *local_10;
  
  local_10 = param_1;
  iVar1 = ns_name_skip(&local_10,param_2);
  if (iVar1 < 0) {
    local_10._0_4_ = -1;
  }
  else {
    local_10._0_4_ = (int)local_10 - (int)param_1;
  }
  return (int)local_10;
}

