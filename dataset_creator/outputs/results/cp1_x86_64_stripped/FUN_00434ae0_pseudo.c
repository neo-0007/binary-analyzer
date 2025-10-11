
undefined8 FUN_00434ae0(undefined8 *param_1)

{
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x20;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  return 1;
}

