
void FUN_005391e0(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = FUN_0040a250(param_2);
  }
  uVar2 = 0xffffffff;
  if (param_3 != 0) {
    uVar2 = FUN_0040aaf0(param_3);
  }
  FUN_005390d0(0,param_1,uVar1,uVar2,param_4);
  return;
}

