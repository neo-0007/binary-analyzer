
void ERR_AFALG_error_constprop_0(undefined4 param_1,undefined4 param_2)

{
  if (lib_code == 0) {
    lib_code = ERR_get_next_error_library();
  }
  ERR_new();
  ERR_set_debug("../engines/e_afalg_err.c",0x45,"ERR_AFALG_error");
  ERR_set_error(lib_code,param_1,0);
  ERR_set_debug("../engines/e_afalg.c",param_2,0);
  return;
}

