
undefined4 * FUN_004b9b30(undefined4 *param_1,undefined4 *param_2)

{
  long lVar1;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar1 = FUN_004b8260(param_1 + 2,param_2 + 2);
  if (((lVar1 != 0) && (lVar1 = FUN_004b8260(param_1 + 8,param_2 + 8), lVar1 != 0)) &&
     (lVar1 = FUN_004b8260(param_1 + 0xe,param_2 + 0xe), lVar1 != 0)) {
    *param_1 = *param_2;
    *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    return param_1;
  }
  return (undefined4 *)0x0;
}

