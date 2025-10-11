
undefined8 FUN_0041e1a0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = thunk_FUN_007129d0(param_2);
  *(ulong *)(param_1 + 0x20) = uVar1;
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(int *)(param_1 + 8) != 4) {
      return 0;
    }
    if (*(ulong *)(param_1 + 0x18) < uVar1) {
      return 0;
    }
    thunk_FUN_00713a50(*(long *)(param_1 + 0x10),param_2,uVar1);
    if (uVar1 < *(ulong *)(param_1 + 0x18)) {
      *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar1) = 0;
    }
  }
  return 1;
}

