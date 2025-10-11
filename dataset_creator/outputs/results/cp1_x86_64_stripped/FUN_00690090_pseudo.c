
void FUN_00690090(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *param_2;
  *(long **)(param_1 + 8) = param_2;
  *param_1 = 0;
  lVar2 = *(long *)(lVar2 + -0x18) + (long)param_2;
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (*(long *)(lVar2 + 0xd8) != 0) {
    if (uVar1 != 0) goto LAB_006900c4;
    FUN_0068f8c0(*(long *)(lVar2 + 0xd8));
    lVar2 = (long)param_2 + *(long *)(*param_2 + -0x18);
  }
  uVar1 = *(uint *)(lVar2 + 0x20);
  if (uVar1 == 0) {
    *param_1 = 1;
    return;
  }
LAB_006900c4:
  FUN_0066f6e0(lVar2,uVar1 | 4);
  return;
}

