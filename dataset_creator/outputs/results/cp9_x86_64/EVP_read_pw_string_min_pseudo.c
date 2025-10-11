
int EVP_read_pw_string_min(char *buf,int minlen,int maxlen,char *prompt,int verify)

{
  int iVar1;
  UI *ui;
  long in_FS_OFFSET;
  char acStack_2048 [8200];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((prompt == (char *)0x0) && (prompt_string != '\0')) {
    prompt = &prompt_string;
  }
  ui = UI_new();
  if (ui == (UI *)0x0) {
    iVar1 = -1;
  }
  else {
    if (0x1fff < maxlen) {
      maxlen = 0x1fff;
    }
    iVar1 = UI_add_input_string(ui,prompt,0,buf,minlen,maxlen);
    if ((iVar1 < 0) ||
       ((verify != 0 &&
        (iVar1 = UI_add_verify_string(ui,prompt,0,acStack_2048,minlen,maxlen,buf), iVar1 < 0)))) {
      iVar1 = -1;
    }
    else {
      iVar1 = UI_process(ui);
      OPENSSL_cleanse(acStack_2048,0x2000);
    }
    UI_free(ui);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

