
void ossl_blake2b_param_init(undefined8 *param_1)

{
  *param_1 = 0x1010040;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x12) = 0;
  *(undefined4 *)((long)param_1 + 0x1a) = 0;
  *(undefined2 *)((long)param_1 + 0x1e) = 0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  return;
}

