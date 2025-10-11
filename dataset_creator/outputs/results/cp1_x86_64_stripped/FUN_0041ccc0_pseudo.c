
undefined8 FUN_0041ccc0(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x20) = param_3;
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar2 = FUN_0041ca70(lVar1,*(undefined8 *)(param_1 + 0x18),param_2,param_3,
                         (int)*(char *)(param_2 + -1 + param_3) >> 0x1f & 0xff,1);
  }
  else {
    uVar2 = 0;
    if ((*(int *)(param_1 + 8) != 2) || (*(char *)(param_2 + -1 + param_3) < '\0'))
    goto LAB_0041cce8;
    uVar2 = FUN_0041ca70(lVar1,*(undefined8 *)(param_1 + 0x18),param_2,param_3,0,0);
  }
  if ((int)uVar2 != 0) {
    param_3 = *(long *)(param_1 + 0x18);
  }
LAB_0041cce8:
  *(long *)(param_1 + 0x20) = param_3;
  return uVar2;
}

