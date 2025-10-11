
long FUN_00622930(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x10));
    if (iVar1 <= iVar3) {
      return 0;
    }
    lVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 0x10),iVar3);
    iVar1 = thunk_FUN_00713570(lVar2 + 0x18,param_2,param_3);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return lVar2;
}

