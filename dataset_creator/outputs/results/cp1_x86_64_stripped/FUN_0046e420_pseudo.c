
undefined8 FUN_0046e420(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_2 != 0) && (lVar2 = thunk_FUN_0041cdd0(param_2,"operation"), lVar2 != 0)) {
    if ((*(int *)(lVar2 + 8) == 4) &&
       ((*(long *)(lVar2 + 0x10) != 0 && (iVar1 = FUN_0041c9c0("RSASVE"), iVar1 == 0)))) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      return 1;
    }
    return 0;
  }
  return 1;
}

