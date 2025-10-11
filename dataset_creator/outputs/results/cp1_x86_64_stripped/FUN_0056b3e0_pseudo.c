
undefined8 FUN_0056b3e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_0056b0d0();
  }
  lVar1 = FUN_0056b110(param_1,param_2);
  *(long *)(param_1 + 0xc0) = lVar1;
  if (lVar1 != 0) {
    *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xffffff7f | 8;
    return 1;
  }
  return 0;
}

