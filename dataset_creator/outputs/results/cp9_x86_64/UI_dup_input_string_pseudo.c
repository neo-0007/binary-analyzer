
int UI_dup_input_string(UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize)

{
  int iVar1;
  
  if ((prompt != (char *)0x0) &&
     (prompt = CRYPTO_strdup(prompt,"../crypto/ui/ui_lib.c",0xd4), prompt == (char *)0x0)) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0xd6,"UI_dup_input_string");
    ERR_set_error(0x28,0xc0100,0);
    return 0;
  }
  iVar1 = general_allocate_string(ui,prompt,1,1,flags,result_buf,minsize,maxsize,0);
  return iVar1;
}

