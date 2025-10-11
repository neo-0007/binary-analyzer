
undefined8 FUN_00434a80(undefined8 *param_1)

{
  *param_1 = 0x367cd507c1059ed8;
  param_1[1] = 0xf70e59393070dd17;
  param_1[2] = 0x68581511ffc00b31;
  param_1[3] = 0xbefa4fa464f98fa7;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 4) = (undefined1  [16])0x0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x1c;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  return 1;
}

