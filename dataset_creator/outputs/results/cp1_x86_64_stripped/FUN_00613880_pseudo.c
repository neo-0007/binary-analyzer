
undefined8 FUN_00613880(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= iVar3) {
      return 0;
    }
    puVar2 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar3);
    iVar1 = FUN_0049f320(*puVar2,param_2);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  return puVar2[1];
}

