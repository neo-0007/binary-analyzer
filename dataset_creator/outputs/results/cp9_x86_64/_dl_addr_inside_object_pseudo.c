
undefined8 _dl_addr_inside_object(long *param_1,long param_2)

{
  ushort uVar1;
  int *piVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x57);
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1[0x55] + -0x38 + (ulong)uVar1 * 0x38);
    do {
      if ((*piVar2 == 1) &&
         ((ulong)((param_2 - *param_1) - *(long *)(piVar2 + 4)) < *(ulong *)(piVar2 + 10))) {
        return 1;
      }
      piVar2 = piVar2 + -0xe;
    } while (piVar2 != (int *)(param_1[0x55] + -0x70 + (ulong)uVar1 * 0x38 +
                              (ulong)(uVar1 - 1) * -0x38));
  }
  return 0;
}

