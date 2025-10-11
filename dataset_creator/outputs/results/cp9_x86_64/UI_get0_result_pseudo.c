
char * UI_get0_result(UI *ui,int i)

{
  int iVar1;
  UI_STRING *uis;
  char *pcVar2;
  
  if (i < 0) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x1b2,"UI_get0_result");
    ERR_set_error(0x28,0x67,0);
    return (char *)0x0;
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
  if (i < iVar1) {
    uis = (UI_STRING *)OPENSSL_sk_value(*(undefined8 *)(ui + 8),i);
    pcVar2 = UI_get0_result_string(uis);
    return pcVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/ui/ui_lib.c",0x1b6,"UI_get0_result");
  ERR_set_error(0x28,0x66,0);
  return (char *)0x0;
}

