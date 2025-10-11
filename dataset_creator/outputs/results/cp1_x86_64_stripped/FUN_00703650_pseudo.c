
undefined8 FUN_00703650(uint *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 2) - *(long *)(param_1 + 0xe);
  if (*(long *)(param_1 + 2) != *(long *)(param_1 + 4)) {
    lVar1 = FUN_0076db00(param_1[0x1c],lVar1,0);
    if (*(long *)(param_1 + 2) - *(long *)(param_1 + 0xe) != lVar1) {
      *param_1 = *param_1 | 0x20;
      return 0xffffffff;
    }
  }
  *(long *)(param_1 + 0x24) = lVar1;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
  return 0;
}

