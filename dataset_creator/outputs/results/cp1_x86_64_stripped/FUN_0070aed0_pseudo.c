
undefined8 FUN_0070aed0(undefined1 (*param_1) [16],undefined4 *param_2)

{
  int iVar1;
  
  *(undefined8 *)param_1[3] = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_2 = &DAT_007cf6d0;
  }
  param_1[1] = (undefined1  [16])0x0;
  *param_1 = (undefined1  [16])0x0;
  param_1[2] = (undefined1  [16])0x0;
  iVar1 = param_2[1];
  *(undefined4 *)param_1[3] = *param_2;
  *(uint *)(param_1[1] + 0xc) = (uint)(iVar1 != 0);
  return 0;
}

