
ulong FUN_0059a4f0(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar2 = FUN_0059a290(param_2);
    return uVar2;
  }
  uVar2 = 0;
  if (((((*(uint *)(param_2 + 0xe8) & 2) == 0) ||
       (((*(uint *)(param_2 + 0xec) & 0xffffff3f) == 0 && ((*(uint *)(param_2 + 0xec) & 0xc0) != 0))
       )) && ((*(uint *)(param_2 + 0xe8) & 4) != 0)) && (*(int *)(param_2 + 0xf0) == 0x40)) {
    iVar1 = FUN_0059f520(param_2,0x7e,0xffffffff);
    uVar2 = 1;
    if (-1 < iVar1) {
      uVar3 = FUN_0059f550(param_2);
      iVar1 = FUN_005a2b40(uVar3);
      return (ulong)(iVar1 != 0);
    }
  }
  return uVar2;
}

