
undefined8 FUN_00534ba0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_004098f0();
  FUN_004d1eb0(param_2,uVar1);
  lVar2 = FUN_004098f0(param_1);
  *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(param_2 + 8);
  lVar2 = FUN_004098f0(param_1);
  *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(param_2 + 0x10);
  return 1;
}

