
uint FUN_00620910(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if (uVar1 == 0) {
    if (*(long *)(param_1 + 6) != 0) {
      iVar2 = FUN_006208e0();
      return (uint)(iVar2 != 0);
    }
    return uVar1;
  }
  return (uint)(*(long *)(param_1 + 2) != 0);
}

