
undefined8
FUN_004aa310(long *param_1,undefined4 *param_2,long *param_3,undefined4 *param_4,long *param_5)

{
  long lVar1;
  undefined4 *puVar2;
  
  *param_3 = param_1[1];
  *param_5 = param_1[2];
  if (param_2 == (undefined4 *)0x0 && param_4 == (undefined4 *)0x0) {
    return 1;
  }
  lVar1 = *param_1;
joined_r0x004aa330:
  puVar2 = param_4;
  if (lVar1 == 0) {
    return 1;
  }
  do {
    param_4 = puVar2;
    if (*(int *)(lVar1 + 0x24) == 0) {
      if (*(int *)(lVar1 + 0x20) != 0) {
LAB_004aa371:
        if (param_2 != (undefined4 *)0x0) break;
      }
    }
    else if ((*(int *)(lVar1 + 0x20) == 0) && (puVar2 != (undefined4 *)0x0)) {
      param_4 = puVar2 + 1;
      *puVar2 = *(undefined4 *)(lVar1 + 8);
      if ((*(int *)(lVar1 + 0x20) != 0) && (*(int *)(lVar1 + 0x24) == 0)) goto LAB_004aa371;
    }
    lVar1 = *(long *)(lVar1 + 0x28);
    puVar2 = param_4;
    if (lVar1 == 0) {
      return 1;
    }
  } while( true );
  puVar2 = (undefined4 *)(lVar1 + 8);
  lVar1 = *(long *)(lVar1 + 0x28);
  *param_2 = *puVar2;
  param_2 = param_2 + 1;
  goto joined_r0x004aa330;
}

