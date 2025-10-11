
undefined8
FUN_00486bf0(undefined8 param_1,uint param_2,long param_3,long *param_4,long param_5,
            undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0x301) {
    lVar2 = *param_4;
  }
  else {
    if (param_2 < 0x302) {
      if (param_2 != 0x100) {
        if (param_2 != 0x300) {
          return 0;
        }
        uVar1 = FUN_004898e0(param_4,*param_4);
        return uVar1;
      }
    }
    else if (param_2 != 0xfefd) {
      if (param_2 < 0xfefe) {
        if (1 < param_2 - 0x302) {
          return 0;
        }
      }
      else if (param_2 != 0xfeff) {
        return 0;
      }
    }
    param_3 = param_3 + param_5;
    lVar2 = *param_4 - param_5;
    *param_4 = lVar2;
  }
  uVar1 = FUN_00489970(param_4,lVar2,param_3,param_6,param_7,param_5);
  return uVar1;
}

