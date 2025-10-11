
int CONF_modules_load_file(char *filename,char *appname,ulong flags)

{
  int iVar1;
  
  iVar1 = CONF_modules_load_file_ex(0,filename,appname,flags);
  return iVar1;
}

