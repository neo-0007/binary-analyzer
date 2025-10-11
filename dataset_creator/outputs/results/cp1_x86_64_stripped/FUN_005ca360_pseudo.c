
bool FUN_005ca360(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR_s_WIN32_0093ce40;
    param_1[1] = &DAT_008189e0;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  }
  return param_1 != (undefined8 *)0x0;
}

