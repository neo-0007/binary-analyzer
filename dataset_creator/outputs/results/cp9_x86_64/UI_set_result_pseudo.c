
int UI_set_result(UI *ui,UI_STRING *uis,char *result)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strlen(result);
  iVar1 = UI_set_result_ex(ui,uis,result,sVar2 & 0xffffffff);
  return iVar1;
}

