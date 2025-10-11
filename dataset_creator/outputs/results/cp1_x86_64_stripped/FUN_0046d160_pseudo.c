
bool FUN_0046d160(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                 long param_10,undefined8 param_11,long param_12,undefined8 param_13,long param_14,
                 undefined8 param_15,int param_16,long *param_17)

{
  int iVar1;
  long lVar2;
  
  if (param_2 == 0) {
    iVar1 = FUN_00547160();
  }
  else {
    iVar1 = FUN_00546fe0();
  }
  if ((((((iVar1 != 0) && (iVar1 = FUN_00546d60(param_1,0xffffffff), iVar1 != 0)) &&
        ((param_14 == 0 || (iVar1 = FUN_00546b20(param_1,3,param_14,param_15), iVar1 != 0)))) &&
       (((param_12 == 0 || (iVar1 = FUN_00546b20(param_1,2,param_12,param_13), iVar1 != 0)) &&
        ((param_16 == 0 || (iVar1 = FUN_00546bc0(param_1,2,param_16), iVar1 != 0)))))) &&
      (((param_10 == 0 || (iVar1 = FUN_00546b20(param_1,1,param_10,param_11), iVar1 != 0)) &&
       ((param_8 == 0 || (iVar1 = FUN_00546b20(param_1,0,param_8,param_9), iVar1 != 0)))))) &&
     ((((param_6 == 0 || (iVar1 = FUN_00546a10(param_1,0xffffffff,param_6,param_7), iVar1 != 0)) &&
       (iVar1 = FUN_00546d60(param_1,0xffffffff), iVar1 != 0)) &&
      (iVar1 = FUN_00546bc0(param_1,0xffffffff,1), iVar1 != 0)))) {
    if (param_17 != (long *)0x0) {
      lVar2 = FUN_00547310(param_1);
      *param_17 = lVar2;
      if (lVar2 == 0) {
        return false;
      }
    }
    iVar1 = FUN_00546a10(param_1,0xffffffff,param_4,param_5);
    if (((iVar1 != 0) && (iVar1 = FUN_00546da0(param_1,0xffffffff), iVar1 != 0)) &&
       (iVar1 = FUN_00546da0(param_1,0xffffffff), iVar1 != 0)) {
      iVar1 = FUN_00547ad0(param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

