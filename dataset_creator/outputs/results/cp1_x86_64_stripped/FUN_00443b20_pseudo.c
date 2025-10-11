
undefined8 FUN_00443b20(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0x2c0;
  *(long *)(param_1 + 0x2b8) = lVar1;
  FUN_00498c50(param_2,param_3 * 8,lVar1);
  FUN_0054df90(param_1 + 0xf8,lVar1,FUN_00494ec0);
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  *(code **)(param_1 + 0x2b0) = FUN_00495dc0;
  return 1;
}

