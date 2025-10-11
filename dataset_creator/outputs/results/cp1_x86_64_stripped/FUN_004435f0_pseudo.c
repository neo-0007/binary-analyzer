
undefined8 FUN_004435f0(byte *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  if ((DAT_0094b59c._1_1_ & 2) == 0) {
    FUN_0048a5f0(param_2,param_3 * 8,param_1 + 0xa8);
    pcVar1 = FUN_00489fa0;
  }
  else {
    FUN_0049c630();
    pcVar1 = FUN_0049c6a0;
  }
  FUN_0054c660(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
               param_1 + 0xa8,pcVar1);
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

