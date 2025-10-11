
undefined8 FUN_00451e20(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != 0) {
    lVar1 = thunk_FUN_0041cdd0(param_2,"ssl3-ms");
    if ((lVar1 != 0) && (*(int *)(lVar1 + 8) == 5)) {
      uVar2 = FUN_00434910(param_1,0x1d,*(undefined4 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x10))
      ;
      return uVar2;
    }
  }
  return 1;
}

