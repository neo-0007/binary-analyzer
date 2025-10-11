
undefined8
FUN_0047b150(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = FUN_0047ac10(uVar2,0,param_2,param_3,param_4,param_5,0,0);
  if (((int)uVar1 != 0) && (uVar1 = 1, param_3 != 0 || param_5 != 0)) {
    uVar2 = FUN_0047ac10(uVar2,1,param_2,param_3,param_4,param_5,0,0);
    return uVar2;
  }
  return uVar1;
}

