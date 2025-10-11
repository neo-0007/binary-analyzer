
int FUN_0042d520(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 0x88));
  if (0 < iVar1) {
    lVar3 = FUN_004b2b10();
    if (lVar3 != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x40);
      uVar8 = *(undefined8 *)(param_1 + 0x48);
      iVar6 = 0;
      do {
        puVar4 = (undefined8 *)FUN_004364a0(*(undefined8 *)(param_1 + 0x88),iVar6);
        lVar5 = puVar4[3];
        if (lVar5 == 0) {
          lVar5 = FUN_004b7700();
          puVar4[3] = lVar5;
          if (lVar5 == 0) {
            iVar2 = 0;
            goto LAB_0042d5c5;
          }
        }
        iVar2 = FUN_004bacf0(lVar5,uVar7,uVar8,lVar3);
        if (iVar2 == 0) goto LAB_0042d5c5;
        uVar7 = puVar4[3];
        uVar8 = *puVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 != iVar1);
      iVar2 = 1;
      goto LAB_0042d5c5;
    }
  }
  iVar2 = 0;
  lVar3 = 0;
LAB_0042d5c5:
  FUN_004b2b50(lVar3);
  return iVar2;
}

