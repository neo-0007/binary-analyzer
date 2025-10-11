
int UI_dup_input_boolean
              (UI *ui,char *prompt,char *action_desc,char *ok_chars,char *cancel_chars,int flags,
              char *result_buf)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((prompt == (char *)0x0) ||
     (prompt = CRYPTO_strdup(prompt,"../crypto/ui/ui_lib.c",0x10f), prompt != (char *)0x0)) {
    if ((action_desc == (char *)0x0) ||
       (action_desc = CRYPTO_strdup(action_desc,"../crypto/ui/ui_lib.c",0x117),
       action_desc != (char *)0x0)) {
      if ((ok_chars == (char *)0x0) ||
         (ok_chars = CRYPTO_strdup(ok_chars,"../crypto/ui/ui_lib.c",0x11f), ok_chars != (char *)0x0)
         ) {
        if ((cancel_chars == (char *)0x0) ||
           (cancel_chars = CRYPTO_strdup(cancel_chars,"../crypto/ui/ui_lib.c",0x127),
           cancel_chars != (char *)0x0)) {
          iVar1 = general_allocate_boolean_constprop_0
                            (ui,prompt,action_desc,ok_chars,cancel_chars,1,flags,result_buf);
          return iVar1;
        }
        ERR_new();
        uVar2 = 0x129;
      }
      else {
        ERR_new();
        uVar2 = 0x121;
      }
      ERR_set_debug("../crypto/ui/ui_lib.c",uVar2,"UI_dup_input_boolean");
      ERR_set_error(0x28,0xc0100,0);
    }
    else {
      ERR_new();
      ok_chars = (char *)0x0;
      ERR_set_debug("../crypto/ui/ui_lib.c",0x119,"UI_dup_input_boolean");
      ERR_set_error(0x28,0xc0100,0);
    }
  }
  else {
    ERR_new();
    ok_chars = (char *)0x0;
    action_desc = (char *)0x0;
    ERR_set_debug("../crypto/ui/ui_lib.c",0x111,"UI_dup_input_boolean");
    ERR_set_error(0x28,0xc0100,0);
  }
  CRYPTO_free(prompt);
  CRYPTO_free(action_desc);
  CRYPTO_free(ok_chars);
  CRYPTO_free((void *)0x0);
  return -1;
}

