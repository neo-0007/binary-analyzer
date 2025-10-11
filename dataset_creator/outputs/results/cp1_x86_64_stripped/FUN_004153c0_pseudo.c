
undefined8 FUN_004153c0(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (((iVar1 - 0x10U & 0xffffffef) == 0 || (iVar1 - 0x40U & 0xffffffbf) == 0) || (iVar1 == 0x100))
  {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = FUN_00416380();
      return uVar2;
    }
  }
  else if (iVar1 == 0x800) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = FUN_0053ae70();
      return uVar2;
    }
  }
  else if ((iVar1 - 0x1000U & 0xffffefff) == 0) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = FUN_0053cb70();
      return uVar2;
    }
  }
  else if ((iVar1 - 0x200U & 0xfffffdff) == 0) {
    if (*(long *)(param_1 + 10) != 0) {
      uVar2 = FUN_00520230();
      return uVar2;
    }
  }
  else if (((iVar1 - 2U & 0xfffffffd) == 0) && (*(long *)(param_1 + 8) != 0)) {
    uVar2 = FUN_0053e6e0();
    return uVar2;
  }
  return 0;
}

