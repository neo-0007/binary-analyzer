
undefined8 UI_get_result_length(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 < 0) {
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x1bf,"UI_get_result_length");
    ERR_set_error(0x28,0x67,0);
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 8));
    if (param_2 < iVar1) {
      uVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 8),param_2);
      uVar2 = UI_get_result_string_length(uVar2);
      return uVar2;
    }
    ERR_new();
    ERR_set_debug("../crypto/ui/ui_lib.c",0x1c3,"UI_get_result_length");
    ERR_set_error(0x28,0x66,0);
  }
  return 0xffffffff;
}

