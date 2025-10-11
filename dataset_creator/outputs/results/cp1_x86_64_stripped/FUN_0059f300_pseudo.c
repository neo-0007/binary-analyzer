
undefined8 FUN_0059f300(long param_1,undefined8 param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong local_10;
  
  uVar2 = 0;
  if ((param_3 & 0x30000) != 0) {
    local_10 = param_3;
    uVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 8));
    uVar2 = FUN_0059e430(param_2,uVar1,&local_10);
  }
  return uVar2;
}

