
undefined8 FUN_00560b00(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_00436430(*(undefined8 *)(param_1 + 0x18),FUN_00438680);
  lVar2 = FUN_00436100(param_2);
  *(long *)(param_1 + 0x18) = lVar2;
  if (lVar2 != 0) {
    while( true ) {
      iVar1 = FUN_00436480(param_2);
      if (iVar1 <= iVar4) {
        return 1;
      }
      uVar3 = FUN_004364a0(param_2,iVar4);
      uVar3 = FUN_004386a0(uVar3);
      lVar2 = FUN_004364d0(*(undefined8 *)(param_1 + 0x18),iVar4,uVar3);
      if (lVar2 == 0) break;
      iVar4 = iVar4 + 1;
    }
  }
  return 0;
}

