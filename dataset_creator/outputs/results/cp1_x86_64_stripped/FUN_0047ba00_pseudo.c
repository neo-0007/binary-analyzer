
undefined8 FUN_0047ba00(long param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  if ((param_4 <= *(uint *)(param_1 + 0xc)) &&
     (param_3 <= (ulong)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x30)))) {
    thunk_FUN_00713a50(param_2,*(long *)(param_1 + 0x30) + *(long *)(param_1 + 0x18));
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + param_3;
    return 1;
  }
  return 0;
}

