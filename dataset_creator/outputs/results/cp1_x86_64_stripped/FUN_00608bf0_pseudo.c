
undefined8 FUN_00608bf0(long param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  long in_FS_OFFSET;
  int local_a4;
  undefined1 local_88 [16];
  undefined1 local_78 [15];
  undefined1 local_69 [17];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
LAB_00608f10:
    uVar13 = 1;
  }
  else {
    iVar5 = 0;
    do {
      iVar4 = FUN_00436480(param_1);
      if (iVar4 + -1 <= iVar5) {
        local_a4 = 0;
        goto LAB_00608caf;
      }
      puVar7 = (undefined8 *)FUN_004364a0(param_1,iVar5);
      puVar8 = (undefined8 *)FUN_004364a0(param_1,iVar5 + 1);
      iVar4 = *(int *)*puVar7;
      iVar6 = *(int *)*puVar8;
      iVar3 = iVar6;
      if (iVar4 <= iVar6) {
        iVar3 = iVar4;
      }
      iVar3 = thunk_FUN_00713570(*(undefined8 *)((int *)*puVar7 + 2),
                                 *(undefined8 *)((int *)*puVar8 + 2),(long)iVar3);
      if (iVar3 == 0) {
        iVar3 = iVar4 - iVar6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar3 < 0);
LAB_00608e70:
    uVar13 = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
LAB_00608caf:
  iVar5 = FUN_00436480(param_1);
  if (iVar5 <= local_a4) goto LAB_00608f10;
  iVar4 = 4;
  lVar9 = FUN_004364a0(param_1,local_a4);
  iVar5 = FUN_00608560(lVar9);
  if (iVar5 != 1) {
    iVar4 = (uint)(iVar5 == 2) << 4;
  }
  if ((lVar9 == 0) || (piVar10 = *(int **)(lVar9 + 8), piVar10 == (int *)0x0)) goto LAB_00608e70;
  if (*piVar10 != 0) {
    if (*piVar10 != 1) goto LAB_00608e70;
    uVar13 = *(undefined8 *)(piVar10 + 2);
    iVar5 = FUN_00436480(uVar13);
    if (iVar5 == 0) goto LAB_00608e70;
    lVar9 = (long)iVar4;
    iVar5 = 0;
    while( true ) {
      iVar6 = FUN_00436480(uVar13);
      if (iVar6 + -1 <= iVar5) break;
      iVar6 = iVar5 + 1;
      piVar10 = (int *)FUN_004364a0(uVar13,iVar5);
      uVar11 = FUN_004364a0(uVar13,iVar6);
      iVar5 = FUN_00607a10(piVar10,local_88,local_78,iVar4);
      if (iVar5 == 0) goto LAB_00608e70;
      puVar1 = local_69 + 1;
      iVar5 = FUN_00607a10(uVar11,puVar1,local_58,iVar4);
      if (iVar5 == 0) goto LAB_00608e70;
      iVar5 = thunk_FUN_00713570(local_88,puVar1,lVar9);
      if (-1 < iVar5) goto LAB_00608e70;
      iVar5 = thunk_FUN_00713570(local_88,local_78,lVar9);
      if (0 < iVar5) goto LAB_00608e70;
      iVar5 = thunk_FUN_00713570(puVar1,local_58,lVar9);
      if ((0 < iVar5) || (iVar4 == 0)) goto LAB_00608e70;
      puVar12 = puVar1 + lVar9;
      do {
        cVar2 = puVar12[-1];
        puVar12[-1] = cVar2 + -1;
        if (cVar2 != '\0') break;
        puVar12 = puVar12 + -1;
      } while (local_69 + (lVar9 - (ulong)(iVar4 - 1)) != puVar12);
      iVar5 = thunk_FUN_00713570(local_78,puVar1,lVar9);
      if (-1 < iVar5) goto LAB_00608e70;
      iVar5 = iVar6;
      if (*piVar10 == 1) {
        iVar6 = FUN_00607ab0(local_88,local_78,iVar4);
        if (-1 < iVar6) goto LAB_00608e70;
      }
    }
    iVar5 = FUN_00436480(uVar13);
    piVar10 = (int *)FUN_004364a0(uVar13,iVar5 + -1);
    if ((piVar10 != (int *)0x0) && (*piVar10 == 1)) {
      iVar5 = FUN_00607a10(piVar10,local_88,local_78,iVar4);
      if (iVar5 == 0) goto LAB_00608e70;
      iVar5 = thunk_FUN_00713570(local_88,local_78,iVar4);
      if (0 < iVar5) goto LAB_00608e70;
      iVar5 = FUN_00607ab0(local_88,local_78,iVar4);
      if (-1 < iVar5) goto LAB_00608e70;
    }
  }
  local_a4 = local_a4 + 1;
  goto LAB_00608caf;
}

