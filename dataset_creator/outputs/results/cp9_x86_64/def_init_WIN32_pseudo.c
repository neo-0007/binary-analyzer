
bool def_init_WIN32(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = WIN32_method;
    param_1[1] = CONF_type_win32;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  }
  return param_1 != (undefined8 *)0x0;
}

