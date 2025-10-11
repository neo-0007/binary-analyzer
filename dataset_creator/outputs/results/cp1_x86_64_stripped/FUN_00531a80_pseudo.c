
undefined8 FUN_00531a80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_004098f0();
  *(undefined8 *)(lVar1 + 0x80) = 0;
  uVar2 = FUN_004098f0(param_1);
  FUN_004d1eb0(param_2,uVar2);
  return 1;
}

