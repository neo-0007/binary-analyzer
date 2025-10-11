
void FUN_00703e90(uint *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_3;
  if (param_3 < 1) {
    param_3 = 0;
  }
  else {
    do {
      if ((param_1[0x1d] & 2) == 0) {
        lVar1 = FUN_0076da60(param_1[0x1c],param_2,lVar2);
      }
      else {
        lVar1 = FUN_0076e7a0();
      }
      if (lVar1 < 0) {
        *param_1 = *param_1 | 0x20;
        param_3 = param_3 - lVar2;
        goto LAB_00703efb;
      }
      lVar2 = lVar2 - lVar1;
      param_2 = param_2 + lVar1;
    } while (0 < lVar2);
    param_3 = param_3 - lVar2;
  }
LAB_00703efb:
  if (-1 < *(long *)(param_1 + 0x24)) {
    *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + param_3;
  }
  return;
}

