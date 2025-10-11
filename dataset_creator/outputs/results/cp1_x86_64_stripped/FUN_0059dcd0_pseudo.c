
undefined8 FUN_0059dcd0(undefined8 param_1,long param_2,ulong param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0xfffffffe;
  }
  if (param_3 == 0) {
    param_3 = thunk_FUN_007129d0(param_2);
    uVar3 = param_3 - 1;
    if (param_3 < 2) goto LAB_0059dd1b;
  }
  else {
    if (param_3 == 1) {
      lVar1 = thunk_FUN_007134f0(param_2,0,1);
      if (lVar1 != 0) {
        return 0xfffffffe;
      }
      goto LAB_0059dd1b;
    }
    uVar3 = param_3 - 1;
    lVar1 = thunk_FUN_007134f0(param_2,0,uVar3);
    if (lVar1 != 0) {
      return 0xfffffffe;
    }
  }
  if (*(char *)(param_2 + uVar3) == '\0') {
    param_3 = uVar3;
  }
LAB_0059dd1b:
  uVar2 = FUN_0059c620(param_1,param_2,param_3,param_4,1,0);
  return uVar2;
}

