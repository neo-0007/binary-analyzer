
undefined4 FUN_004ee940(long param_1)

{
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x28);
  }
  return 0xffffffff;
}

