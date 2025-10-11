
ulong FUN_00681a20(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = (ulong)*(uint *)(param_1 + 1);
  plVar1 = (long *)*param_1;
  if ((*(uint *)(param_1 + 1) == 0xffffffff) && (plVar1 != (long *)0x0)) {
    if ((byte *)plVar1[2] < (byte *)plVar1[3]) {
      return (ulong)*(byte *)plVar1[2];
    }
    uVar2 = (**(code **)(*plVar1 + 0x48))();
    if ((int)uVar2 == -1) {
      *param_1 = 0;
      return uVar2;
    }
  }
  return uVar2;
}

