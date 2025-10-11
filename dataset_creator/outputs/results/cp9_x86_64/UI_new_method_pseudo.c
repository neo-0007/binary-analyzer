
UI * UI_new_method(UI_METHOD *method)

{
  int iVar1;
  UI *ui;
  long lVar2;
  
  ui = (UI *)CRYPTO_zalloc(0x38,"../crypto/ui/ui_lib.c",0x19);
  if (ui == (UI *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x1c,"UI_new_method");
    ERR_set_error(0x28,0xc0100,0);
  }
  else {
    lVar2 = CRYPTO_THREAD_lock_new();
    *(long *)(ui + 0x30) = lVar2;
    if (lVar2 == 0) {
      ERR_new();
      ERR_set_debug("../crypto/ui/ui_lib.c",0x22,"UI_new_method");
      ERR_set_error(0x28,0xc0100,0);
      CRYPTO_free(ui);
      ui = (UI *)0x0;
    }
    else {
      if (method == (UI_METHOD *)0x0) {
        method = UI_get_default_method();
        if (method == (UI_METHOD *)0x0) {
          method = (UI_METHOD *)UI_null();
        }
      }
      *(UI_METHOD **)ui = method;
      iVar1 = CRYPTO_new_ex_data(0xb,ui,(CRYPTO_EX_DATA *)(ui + 0x18));
      if (iVar1 == 0) {
        UI_free(ui);
        ui = (UI *)0x0;
      }
    }
  }
  return ui;
}

