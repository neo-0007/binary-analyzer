
int UI_dup_info_string(UI *ui,char *text)

{
  int iVar1;
  
  if ((text != (char *)0x0) &&
     (text = CRYPTO_strdup(text,"../crypto/ui/ui_lib.c",0x144), text == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x146,"UI_dup_info_string");
    ERR_set_error(0x28,0xc0100,0);
    return -1;
  }
  iVar1 = general_allocate_string(ui,text,1,4,0,0,0,0,0);
  return iVar1;
}

