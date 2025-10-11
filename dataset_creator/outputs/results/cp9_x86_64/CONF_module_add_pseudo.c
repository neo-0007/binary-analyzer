
int CONF_module_add(char *name,undefined1 *ifunc,undefined1 *ffunc)

{
  long lVar1;
  
  lVar1 = module_add(0,name,ifunc,ffunc);
  return (int)(lVar1 != 0);
}

