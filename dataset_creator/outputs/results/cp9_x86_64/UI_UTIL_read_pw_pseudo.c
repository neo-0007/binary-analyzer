
int UI_UTIL_read_pw(char *buf,char *buff,int size,char *prompt,int verify)

{
  int iVar1;
  int iVar2;
  UI *ui;
  
  if (0 < size) {
    ui = UI_new();
    iVar2 = 0;
    if (ui != (UI *)0x0) {
      iVar1 = UI_add_input_string(ui,prompt,0,buf,0,size + -1);
      if (-1 < iVar1) {
        if (verify != 0) {
          iVar1 = UI_add_verify_string(ui,prompt,0,buff,0,size + -1,buf);
        }
        if (-1 < iVar1) {
          iVar1 = UI_process(ui);
        }
      }
      UI_free(ui);
      iVar2 = 0;
      if (iVar1 < 1) {
        iVar2 = iVar1;
      }
    }
    return iVar2;
  }
  return -1;
}

