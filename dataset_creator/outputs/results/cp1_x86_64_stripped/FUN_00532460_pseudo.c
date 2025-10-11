
undefined8 FUN_00532460(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_004098f0();
  *(undefined8 *)(lVar1 + 0x180) = 0;
  FUN_004d1eb0(param_2,lVar1);
  FUN_004d1eb0(param_2 + 8,lVar1 + 0x80);
  FUN_004d1eb0(param_2 + 0x10,lVar1 + 0x100);
  return 1;
}

