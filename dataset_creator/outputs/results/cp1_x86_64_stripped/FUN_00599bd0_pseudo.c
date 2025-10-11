
ulong FUN_00599bd0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined4 param_5
                  ,uint param_6)

{
  ulong uVar1;
  
  param_4 = param_4 & 0xf0000;
  if (param_4 == 0x20000) {
    uVar1 = FUN_005ba3a0(param_1,param_2,(long)param_3,param_5,0xffffffff);
    return uVar1;
  }
  if (param_4 < 0x20001) {
    if (param_4 == 0) {
      return 0;
    }
    if (param_4 == 0x10000) {
      if (param_6 == 0) {
        FUN_004ae9e0(param_1,"%*s<Not Supported>",param_5,&DAT_0083e5c2);
        return 1;
      }
      FUN_004ae9e0(param_1,"%*s<Parse Error>",param_5,&DAT_0083e5c2);
      return (ulong)param_6;
    }
  }
  else if (param_4 == 0x30000) {
    uVar1 = FUN_004aae10();
    return uVar1;
  }
  return 1;
}

