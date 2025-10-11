
undefined8 FUN_00443a90(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = DAT_0094b59c._1_1_ & 2;
  lVar1 = param_1 + 0x2c0;
  *(long *)(param_1 + 0x2b8) = lVar1;
  if (bVar2 == 0) {
    FUN_0048a5f0(param_2,param_3 * 8,lVar1);
    FUN_0054df90(param_1 + 0xf8,lVar1,FUN_00489fa0);
    pcVar3 = (code *)0x0;
  }
  else {
    FUN_0048a5f0(param_2,param_3 * 8,lVar1);
    FUN_0054df90(param_1 + 0xf8,lVar1,FUN_00489fa0);
    pcVar3 = FUN_0049aa50;
  }
  *(code **)(param_1 + 0x2b0) = pcVar3;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 4;
  return 1;
}

