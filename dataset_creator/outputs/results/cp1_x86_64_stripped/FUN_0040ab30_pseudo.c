
long FUN_0040ab30(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    return *(long *)(param_1 + 0x60);
  }
  uVar1 = FUN_0040aaf0();
  lVar2 = FUN_00423b00(uVar1);
  return lVar2;
}

