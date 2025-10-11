
bool FUN_005ca320(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = &PTR_s_OpenSSL_default_0093cea0;
    param_1[1] = &DAT_00818ae0;
    *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  }
  return param_1 != (undefined8 *)0x0;
}

