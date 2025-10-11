
undefined8 ossl_pw_set_ui_method(undefined4 *param_1,long param_2,undefined8 param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    ossl_pw_clear_passphrase_data();
    *param_1 = 4;
    *(long *)(param_1 + 2) = param_2;
    *(undefined8 *)(param_1 + 4) = param_3;
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/passphrase.c",0x56,"ossl_pw_set_ui_method");
  ERR_set_error(0xf,0xc0102,0);
  return 0;
}

