
undefined8 FUN_004f86d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  FUN_004b9810(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  FUN_004b7f20(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = FUN_0050f410(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    lVar2 = FUN_004b9790();
    *(long *)(param_1 + 0x78) = lVar2;
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = FUN_004b9b30(lVar2,*(undefined8 *)(param_2 + 0x78));
    if (lVar2 == 0) goto LAB_004f8770;
  }
  if (*(long *)(param_2 + 0x80) == 0) {
    return 1;
  }
  lVar2 = FUN_004b82e0();
  *(long *)(param_1 + 0x80) = lVar2;
  if (lVar2 != 0) {
    return 1;
  }
LAB_004f8770:
  FUN_004b9810(*(undefined8 *)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

