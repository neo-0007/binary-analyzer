
char FUN_005abb80(long param_1,long *param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x30) != 0) {
    iVar2 = FUN_00436560();
    if (iVar2 == 0) {
      iVar2 = FUN_004222c0(*(undefined8 *)(param_1 + 0xe0));
      if (iVar2 == 0) goto LAB_005abbd8;
      FUN_00436510(*(undefined8 *)(param_1 + 0x30));
      FUN_004222e0(*(undefined8 *)(param_1 + 0xe0));
    }
    local_78 = *param_3;
    uStack_70 = param_3[1];
    local_68 = param_3[2];
    iVar2 = FUN_00435f40(*(undefined8 *)(param_1 + 0x30),&local_78);
    if ((-1 < iVar2) && (iVar3 = FUN_00436480(*(undefined8 *)(param_1 + 0x30)), iVar2 < iVar3)) {
      do {
        lVar6 = FUN_004364a0(*(undefined8 *)(param_1 + 0x30),iVar2);
        iVar4 = FUN_0049f320(lVar6,param_3);
        if (iVar4 != 0) break;
        lVar10 = *(long *)(lVar6 + 0x28);
        if (lVar10 == 0) {
          if (param_4 != 0) {
            uVar8 = FUN_005a9850(param_1);
            iVar4 = FUN_0059eab0(param_4,uVar8);
            if (iVar4 != 0) goto LAB_005abd10;
          }
LAB_005abcc0:
          if (param_2 != (long *)0x0) {
            *param_2 = lVar6;
          }
          cVar1 = (*(int *)(lVar6 + 0x30) == 8) + '\x01';
          goto LAB_005abbda;
        }
        iVar4 = 0;
        lVar9 = param_4;
        if (param_4 == 0) {
          lVar9 = FUN_005a9850(param_1);
          lVar10 = *(long *)(lVar6 + 0x28);
        }
        for (; iVar5 = FUN_00436480(lVar10), iVar4 < iVar5; iVar4 = iVar4 + 1) {
          piVar7 = (int *)FUN_004364a0(*(undefined8 *)(lVar6 + 0x28),iVar4);
          if ((*piVar7 == 4) &&
             (iVar5 = FUN_0059eab0(lVar9,*(undefined8 *)(piVar7 + 2)), iVar5 == 0))
          goto LAB_005abcc0;
          lVar10 = *(long *)(lVar6 + 0x28);
        }
LAB_005abd10:
        iVar2 = iVar2 + 1;
      } while (iVar3 != iVar2);
    }
  }
LAB_005abbd8:
  cVar1 = '\0';
LAB_005abbda:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return cVar1;
}

