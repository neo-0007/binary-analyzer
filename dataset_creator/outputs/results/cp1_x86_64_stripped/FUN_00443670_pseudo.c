
undefined8 FUN_00443670(byte *param_1,undefined8 param_2,int param_3)

{
  code *pcVar1;
  
  FUN_00498c50(param_2,param_3 * 8,param_1 + 0xa8);
  FUN_0054c660(param_1 + 0x50,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 8),
               param_1 + 0xa8,FUN_00494ec0);
  if ((*param_1 & 1) == 0) {
    pcVar1 = FUN_00495c50;
  }
  else {
    pcVar1 = FUN_00495b60;
  }
  *(code **)(param_1 + 0x88) = pcVar1;
  *param_1 = *param_1 | 2;
  return 1;
}

