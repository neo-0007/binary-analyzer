
void FUN_00479130(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xf8);
  FUN_004227b0(lVar1 + 0x34,0x20);
  FUN_004227b0(lVar1 + 0x54,0x10);
  FUN_004227b0(lVar1 + 100,0x10);
  FUN_004227b0(lVar1 + 0x80,0x30);
  *(undefined8 *)(lVar1 + 0x78) = 0;
  FUN_005b2cb0(param_1);
  return;
}

