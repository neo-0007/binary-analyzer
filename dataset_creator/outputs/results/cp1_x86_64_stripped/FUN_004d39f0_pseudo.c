
undefined8 FUN_004d39f0(long param_1,uint *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  lVar2 = FUN_004b2b10();
  if (lVar2 != 0) {
    FUN_004b2c00(lVar2);
    lVar3 = FUN_004b2df0(lVar2);
    if (lVar3 != 0) {
      iVar1 = FUN_004b7d40(*(undefined8 *)(param_1 + 8));
      if (iVar1 == 0) {
        *param_2 = *param_2 | 1;
      }
      iVar1 = FUN_004b7d60(*(undefined8 *)(param_1 + 0x18));
      if (((iVar1 != 0) || (iVar1 = FUN_004b7ba0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) ||
         (iVar1 = FUN_004b7cc0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0)) {
        *param_2 = *param_2 | 8;
      }
      lVar4 = FUN_004b8260(lVar3,*(undefined8 *)(param_1 + 8));
      if ((lVar4 != 0) && (iVar1 = FUN_004bcb60(lVar3,1), iVar1 != 0)) {
        iVar1 = FUN_004b7840(*(undefined8 *)(param_1 + 0x18),lVar3);
        if (-1 < iVar1) {
          *param_2 = *param_2 | 8;
        }
        iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
        if (iVar1 < 0x200) {
          *param_2 = *param_2 | 0x80;
        }
        uVar5 = 1;
        iVar1 = FUN_004b7bb0(*(undefined8 *)(param_1 + 8));
        if (10000 < iVar1) {
          *param_2 = *param_2 | 0x100;
        }
        goto LAB_004d3a78;
      }
    }
  }
  uVar5 = 0;
LAB_004d3a78:
  FUN_004b2d50(lVar2);
  FUN_004b2b50(lVar2);
  return uVar5;
}

