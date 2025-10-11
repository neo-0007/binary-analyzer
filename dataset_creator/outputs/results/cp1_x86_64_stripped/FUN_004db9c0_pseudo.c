
void FUN_004db9c0(long param_1,long param_2)

{
  long lVar1;
  
  FUN_004df0f0(param_1,param_2 + 0x40,param_2);
  FUN_004df1e0(param_1 + 0x40,param_2,param_2 + 0x40);
  lVar1 = param_1 + 0x80;
  FUN_005cd990(lVar1,param_2 + 0xc0,0x13154);
  FUN_004df0f0(lVar1,&DAT_007ebc60,lVar1);
  FUN_004df1e0(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}

