
int FUN_007baac0(int *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (((*param_1 != 0) && (param_1[1] == 0x66)) &&
     (iVar6 = param_1[2], param_1[2] = iVar6 + -1, 0 < iVar6)) {
    return 0x30;
  }
  lVar2 = *(long *)(param_1 + 6);
  lVar5 = *(long *)(param_1 + 4);
  if (*(long *)(param_1 + 10) == 0) {
    puVar1 = (undefined8 *)(lVar5 + -8 + lVar2 * 8);
    uVar3 = *puVar1;
    uVar4 = FUN_006f35e0(lVar5,lVar5,lVar2 + -1,10);
    *puVar1 = uVar4;
    return (int)uVar3 + 0x30;
  }
  if (lVar2 < *(long *)(param_1 + 10)) {
    iVar6 = 0x30;
LAB_007baafa:
    lVar2 = FUN_006f35e0(lVar5,lVar5,lVar2,10);
    if (lVar2 != 0) {
      lVar5 = *(long *)(param_1 + 6);
      *(long *)(param_1 + 6) = lVar5 + 1;
      *(long *)(*(long *)(param_1 + 4) + lVar5 * 8) = lVar2;
    }
    return iVar6;
  }
  uVar3 = FUN_007c7980(*(undefined8 *)(param_1 + 0xc),0,lVar5,lVar2,*(undefined8 *)(param_1 + 8));
  puVar1 = *(undefined8 **)(param_1 + 0xc);
  puVar1[*(long *)(param_1 + 6) - *(long *)(param_1 + 10)] = uVar3;
  uVar3 = *puVar1;
  lVar2 = *(long *)(param_1 + 10);
  *(long *)(param_1 + 6) = lVar2;
  iVar6 = (int)uVar3;
  if (lVar2 != 0) {
    lVar5 = *(long *)(param_1 + 4);
    do {
      if (*(long *)(lVar5 + -8 + lVar2 * 8) != 0) {
        iVar6 = iVar6 + 0x30;
        goto LAB_007baafa;
      }
      lVar2 = lVar2 + -1;
      *(long *)(param_1 + 6) = lVar2;
    } while (lVar2 != 0);
  }
  param_1[6] = 1;
  param_1[7] = 0;
  return iVar6 + 0x30;
}

