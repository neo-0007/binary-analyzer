
undefined8 FUN_005a8220(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_005a9600(param_2);
  if (lVar1 != 0) {
    uVar2 = FUN_005a8ff0(*(undefined8 *)(param_1 + 0x20),lVar1);
    return uVar2;
  }
  return 0;
}

