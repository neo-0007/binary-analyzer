
ulong FUN_00473580(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_0043b840();
  if ((int)uVar2 != 0) {
    uVar2 = 1;
    if ((param_3 & 4) != 0) {
      uVar2 = (ulong)(*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60));
    }
    if ((param_3 & 3) != 0) {
      if ((((param_3 & 2) == 0) || ((*(byte *)(param_1 + 0x10) & 1) == 0)) ||
         ((*(byte *)(param_2 + 0x10) & 1) == 0)) {
        if ((((param_3 & 1) == 0) || (*(long *)(param_1 + 0x50) == 0)) ||
           (*(long *)(param_2 + 0x50) == 0)) {
          return 0;
        }
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        if (*(int *)(param_1 + 0x60) == *(int *)(param_2 + 0x60)) {
          if (*(long *)(param_2 + 0x58) == *(long *)(param_1 + 0x58)) {
            iVar1 = FUN_00422820();
            return (ulong)(iVar1 == 0);
          }
          return 0;
        }
        return 0;
      }
      if ((int)uVar2 != 0) {
        if (*(int *)(param_1 + 0x60) != *(int *)(param_2 + 0x60)) {
          return 0;
        }
        if (*(long *)(param_2 + 0x58) != *(long *)(param_1 + 0x58)) {
          return 0;
        }
        iVar1 = FUN_00422820(param_1 + 0x11,param_2 + 0x11);
        uVar2 = (ulong)(iVar1 == 0);
      }
    }
  }
  return uVar2;
}

