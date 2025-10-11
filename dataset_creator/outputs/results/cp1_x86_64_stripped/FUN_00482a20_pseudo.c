
uint FUN_00482a20(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_004abd40(*(undefined8 *)(param_1 + 0x18),10,0,0);
    uVar2 = 0;
    if (iVar1 == 0) {
      iVar1 = FUN_004abd40(*(undefined8 *)(param_1 + 0x18),2,0,0);
      return (uint)(iVar1 != 0);
    }
  }
  else {
    uVar2 = 1;
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar2 = *(uint *)(param_1 + 0x20);
    }
  }
  return uVar2;
}

