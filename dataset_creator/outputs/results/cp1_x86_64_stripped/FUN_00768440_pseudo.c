
undefined8 FUN_00768440(uint param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (99 < param_1) {
    return 0;
  }
  if (**(char **)(param_2 + 0x1b8) == '\0') {
    return 0;
  }
  FUN_0070b2d0(&DAT_00946120);
  lVar1 = *(long *)(param_2 + 0x28);
  if ((lVar1 == 0) || (*(int *)(lVar1 + 0x28) == 0)) {
    FUN_007683a0(param_2);
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) goto LAB_007684b0;
  }
  else {
LAB_007684b0:
    if (*(long *)(lVar1 + 0x18) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x18) + (ulong)param_1 * 8);
      goto LAB_0076849a;
    }
  }
  uVar2 = 0;
LAB_0076849a:
  FUN_0070b100(&DAT_00946120);
  return uVar2;
}

