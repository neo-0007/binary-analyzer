
undefined8 FUN_0041cb10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x20) = param_3;
  if (*(long *)(param_1 + 0x10) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 8) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = 1;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 8) != 2) goto LAB_0041cb38;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = 0;
  }
  uVar1 = FUN_0041ca70(*(long *)(param_1 + 0x10),uVar1,param_2,param_3,0,uVar2);
  if ((int)uVar1 != 0) {
    param_3 = *(undefined8 *)(param_1 + 0x18);
  }
LAB_0041cb38:
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return uVar1;
}

