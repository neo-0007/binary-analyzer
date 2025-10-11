
undefined8 FUN_0042d640(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x88));
    if (iVar1 <= iVar3) break;
    lVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar3);
    FUN_004b9810(*(undefined8 *)(lVar2 + 0x20));
    iVar3 = iVar3 + 1;
  }
  FUN_004b9810(*(undefined8 *)(param_1 + 0xa8));
  FUN_004b9810(*(undefined8 *)(param_1 + 0xb0));
  FUN_004b9810(*(undefined8 *)(param_1 + 0xb8));
  return 1;
}

