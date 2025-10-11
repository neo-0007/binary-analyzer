
undefined8 FUN_005a9780(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  FUN_00436510(*(undefined8 *)(param_1 + 0x30));
  while( true ) {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x30));
    if (iVar1 <= iVar3) break;
    lVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x30),iVar3);
    *(int *)(lVar2 + 0x34) = iVar3;
    iVar3 = iVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 1;
  return 1;
}

