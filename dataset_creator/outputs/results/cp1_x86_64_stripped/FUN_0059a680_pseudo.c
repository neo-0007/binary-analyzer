
ulong FUN_0059a680(undefined8 param_1,long param_2,int param_3)

{
  ulong uVar1;
  
  if (((*(uint *)(param_2 + 0xe8) & 4) == 0) || (uVar1 = 0, (*(byte *)(param_2 + 0xf0) & 4) != 0)) {
    if (param_3 == 0) {
      if (((*(uint *)(param_2 + 0xe8) & 8) == 0) || ((*(uint *)(param_2 + 0xf4) & 0x20) != 0)) {
        uVar1 = 1;
      }
      else {
        if ((*(uint *)(param_2 + 0xf4) & 0x80) == 0) {
          return 0;
        }
        uVar1 = 2;
      }
      if ((*(ulong *)(param_2 + 0xe8) & 0x2000000002) == 2) {
        uVar1 = 0;
      }
      return uVar1;
    }
    uVar1 = FUN_0059a290(param_2);
    if (((int)uVar1 != 0) && ((int)uVar1 == 5)) {
      uVar1 = uVar1 & 0xffffffff;
      if ((*(byte *)(param_2 + 0xf4) & 2) == 0) {
        uVar1 = 0;
      }
      return uVar1;
    }
  }
  return uVar1;
}

