
ulong _IO_wfile_overflow(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar2 = *param_1;
  if ((uVar2 & 8) != 0) {
    *param_1 = uVar2 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    return 0xffffffff;
  }
  if ((uVar2 & 0x800) == 0) {
    plVar8 = *(long **)(param_1 + 0x28);
    if (plVar8[3] == 0) {
      _IO_wdoallocbuf();
      _IO_free_wbackup_area(param_1);
      plVar8 = *(long **)(param_1 + 0x28);
      lVar11 = *(long *)(param_1 + 8);
      lVar4 = plVar8[6];
      plVar8[2] = lVar4;
      *plVar8 = lVar4;
      plVar8[1] = lVar4;
      if (lVar11 == 0) {
        _IO_doallocbuf(param_1);
        uVar9 = *(undefined8 *)(param_1 + 0xe);
        plVar8 = *(long **)(param_1 + 0x28);
        uVar2 = *param_1;
        lVar11 = *plVar8;
        lVar6 = plVar8[7];
        lVar4 = plVar8[1];
        *(undefined8 *)(param_1 + 2) = uVar9;
        *(undefined8 *)(param_1 + 4) = uVar9;
        uVar10 = uVar9;
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 4);
        lVar6 = plVar8[7];
        uVar2 = *param_1;
        lVar11 = lVar4;
        uVar10 = *(undefined8 *)(param_1 + 2);
      }
    }
    else {
      lVar6 = plVar8[7];
      if (*plVar8 == lVar6) {
        lVar4 = plVar8[6];
        uVar9 = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 2) = uVar9;
        *(undefined8 *)(param_1 + 4) = uVar9;
        *plVar8 = lVar4;
        plVar8[1] = lVar4;
        lVar11 = lVar4;
        uVar10 = uVar9;
      }
      else {
        uVar9 = *(undefined8 *)(param_1 + 4);
        lVar4 = plVar8[1];
        lVar11 = *plVar8;
        uVar10 = *(undefined8 *)(param_1 + 2);
      }
    }
    *plVar8 = lVar4;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    plVar8[2] = lVar4;
    plVar8[3] = lVar11;
    plVar8[4] = lVar11;
    plVar8[5] = lVar6;
    *(undefined8 *)(param_1 + 0xc) = uVar1;
    *(undefined8 *)(param_1 + 10) = uVar10;
    *param_1 = uVar2 | 0x800;
    *(undefined8 *)(param_1 + 2) = uVar9;
    *(undefined8 *)(param_1 + 6) = uVar9;
    *(undefined8 *)(param_1 + 8) = uVar10;
    if ((uVar2 & 0x202) != 0) {
      plVar8[5] = lVar11;
    }
  }
  if (param_2 == 0xffffffff) {
    if (0 < (int)param_1[0x30]) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
      uVar5 = _IO_wdo_write(param_1,lVar4,*(long *)(*(long *)(param_1 + 0x28) + 0x20) - lVar4 >> 2);
      return uVar5;
    }
    uVar5 = _IO_do_write(param_1,*(long *)(param_1 + 8),
                         *(long *)(param_1 + 10) - *(long *)(param_1 + 8));
    return uVar5;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  puVar7 = *(uint **)(lVar4 + 0x20);
  if (puVar7 == *(uint **)(lVar4 + 0x38)) {
    if ((int)param_1[0x30] < 1) {
      iVar3 = _IO_do_write(param_1,*(long *)(param_1 + 8),
                           *(long *)(param_1 + 10) - *(long *)(param_1 + 8));
    }
    else {
      iVar3 = _IO_wdo_write(param_1,*(long *)(lVar4 + 0x18),
                            (long)puVar7 - *(long *)(lVar4 + 0x18) >> 2);
    }
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    lVar4 = *(long *)(param_1 + 0x28);
    puVar7 = *(uint **)(lVar4 + 0x20);
  }
  *(uint **)(lVar4 + 0x20) = puVar7 + 1;
  *puVar7 = param_2;
  if ((*param_1 & 2) == 0) {
    if ((*param_1 & 0x200) == 0) {
      return (ulong)param_2;
    }
    if (param_2 != 10) {
      return (ulong)param_2;
    }
  }
  if ((int)param_1[0x30] < 1) {
    iVar3 = _IO_do_write(param_1,*(long *)(param_1 + 8),
                         *(long *)(param_1 + 10) - *(long *)(param_1 + 8));
  }
  else {
    iVar3 = _IO_wdo_write(param_1,*(long *)(lVar4 + 0x18),
                          (long)(puVar7 + 1) - *(long *)(lVar4 + 0x18) >> 2);
  }
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  return (ulong)param_2;
}

