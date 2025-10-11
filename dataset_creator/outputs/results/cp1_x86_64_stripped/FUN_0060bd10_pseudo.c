
undefined8 FUN_0060bd10(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar1 = FUN_00436480();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      uVar2 = FUN_0060b160(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}

