
undefined8 FUN_00448700(byte *param_1,undefined8 param_2,int param_3)

{
  FUN_0049d140(param_2,param_3 * 8,param_1 + 0x98);
  FUN_0054c660(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
               param_1 + 0x98,FUN_0049cb40);
  *param_1 = *param_1 | 2;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  return 1;
}

