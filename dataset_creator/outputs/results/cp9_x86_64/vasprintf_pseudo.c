
int vasprintf(char **__ptr,char *__f,__gnuc_va_list __arg)

{
  int iVar1;
  
  iVar1 = __vasprintf_internal();
  return iVar1;
}

