
UI_METHOD * UI_UTIL_wrap_read_pem_callback(code *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 *ptr;
  UI_METHOD *method;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x10,"../crypto/ui/ui_util.c",0x95);
  if (ptr != (undefined8 *)0x0) {
    method = UI_create_method("PEM password callback wrapper");
    if (method != (UI_METHOD *)0x0) {
      iVar1 = UI_method_set_opener(method,ui_open);
      if (-1 < iVar1) {
        iVar1 = UI_method_set_reader(method,ui_read);
        if (-1 < iVar1) {
          iVar1 = UI_method_set_writer(method,ui_write);
          if (-1 < iVar1) {
            iVar1 = UI_method_set_closer(method,ui_close);
            if (-1 < iVar1) {
              iVar1 = CRYPTO_THREAD_run_once(&get_index_once,ui_method_data_index_init_ossl_);
              if ((iVar1 != 0) && (ui_method_data_index_init_ossl_ret_ != 0)) {
                iVar1 = UI_method_set_ex_data(method,ui_method_data_index,ptr);
                if (-1 < iVar1) {
                  *(undefined4 *)(ptr + 1) = param_2;
                  if (param_1 == (code *)0x0) {
                    param_1 = PEM_def_callback;
                  }
                  *ptr = param_1;
                  return method;
                }
              }
            }
          }
        }
      }
      goto LAB_00584393;
    }
  }
  method = (UI_METHOD *)0x0;
LAB_00584393:
  UI_destroy_method(method);
  CRYPTO_free(ptr);
  return (UI_METHOD *)0x0;
}

