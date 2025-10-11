
int X509_LOOKUP_ctrl(X509_LOOKUP *ctx,int cmd,char *argc,long argl,char **ret)

{
  int iVar1;
  
  iVar1 = X509_LOOKUP_ctrl_ex();
  return iVar1;
}

