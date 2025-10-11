
ushort FUN_00608560(undefined8 *param_1)

{
  ushort uVar1;
  int *piVar2;
  
  if ((param_1 == (undefined8 *)0x0) || (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) {
    return 0;
  }
  if ((*(ushort **)(piVar2 + 2) != (ushort *)0x0) && (1 < *piVar2)) {
    uVar1 = **(ushort **)(piVar2 + 2);
    return uVar1 << 8 | uVar1 >> 8;
  }
  return 0;
}

