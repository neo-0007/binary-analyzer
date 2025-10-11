
undefined1  [16] FUN_00663290(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auVar3 [16];
  
  cVar2 = '\0';
  if (param_3 != 0) {
    cVar2 = (param_3 != 1) + '\x01';
  }
  iVar1 = FUN_00702a90(*(undefined8 *)(param_1 + 0x40),param_2,cVar2);
  if (iVar1 != 0) {
    return ZEXT816(0xffffffffffffffff);
  }
  auVar3._0_8_ = FUN_00702b70(*(undefined8 *)(param_1 + 0x40));
  auVar3._8_8_ = 0;
  return auVar3;
}

