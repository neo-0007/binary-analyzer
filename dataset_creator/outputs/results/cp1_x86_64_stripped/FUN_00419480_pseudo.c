
undefined8 FUN_00419480(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    iVar1 = FUN_00436480();
    if (param_2 < iVar1) {
      uVar2 = FUN_004364a0(*(undefined8 *)(param_1 + 8),param_2);
      return uVar2;
    }
  }
  return 0;
}

