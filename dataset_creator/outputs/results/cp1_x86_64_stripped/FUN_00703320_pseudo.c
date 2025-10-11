
ulong FUN_00703320(uint *param_1)

{
  int iVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int *piVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  
  uVar4 = *param_1;
  if ((uVar4 & 0x10) != 0) {
    return 0xffffffff;
  }
  if ((uVar4 & 4) != 0) {
    *param_1 = uVar4 | 0x20;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 9;
    return 0xffffffff;
  }
  if (*(byte **)(param_1 + 2) < *(byte **)(param_1 + 4)) {
    return (ulong)**(byte **)(param_1 + 2);
  }
  puVar2 = (uint *)PTR_DAT_0093e070;
  if (*(long *)(param_1 + 0xe) == 0) {
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_007104f0();
      *param_1 = *param_1 & 0xfffffeff;
    }
    FUN_00706a10(param_1);
    uVar4 = *param_1;
    puVar2 = (uint *)PTR_DAT_0093e070;
  }
  PTR_DAT_0093e070 = (undefined *)puVar2;
  if ((uVar4 & 0x202) == 0) goto LAB_00703446;
  uVar4 = *puVar2;
  puVar7 = puVar2;
  if ((uVar4 & 0x8000) == 0) {
    piVar6 = *(int **)(puVar2 + 0x22);
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    if (*(long *)(piVar6 + 2) != lVar3) {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        FUN_00709590();
      }
      puVar7 = (uint *)PTR_DAT_0093e070;
      piVar6 = *(int **)(puVar2 + 0x22);
      *(long *)(piVar6 + 2) = lVar3;
      uVar4 = *puVar7;
    }
    piVar6[1] = piVar6[1] + 1;
    if ((uVar4 & 0x288) == 0x280) goto LAB_00703563;
  }
  else {
    if ((uVar4 & 0x288) != 0x280) goto LAB_00703446;
LAB_00703563:
    lVar3 = *(long *)(puVar7 + 0x36);
    if (0x827 < lVar3 - 0x93f160U) {
                    /* try { // try from 007035b0 to 007035c4 has its CatchHandler @ 007035fd */
      FUN_00703130();
      puVar7 = (uint *)PTR_DAT_0093e070;
    }
                    /* try { // try from 00703591 to 00703594 has its CatchHandler @ 007035fd */
    (**(code **)(lVar3 + 0x18))(puVar7,0xffffffff);
  }
  if ((*puVar2 & 0x8000) == 0) {
    piVar6 = *(int **)(puVar2 + 0x22);
    iVar1 = piVar6[1];
    piVar6[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
LAB_00703446:
  FUN_00706480(param_1);
  lVar5 = *(long *)(param_1 + 0xe);
  lVar3 = *(long *)(param_1 + 0x36);
  *(long *)(param_1 + 2) = lVar5;
  *(long *)(param_1 + 4) = lVar5;
  *(long *)(param_1 + 6) = lVar5;
  *(long *)(param_1 + 8) = lVar5;
  *(long *)(param_1 + 10) = lVar5;
  *(long *)(param_1 + 0xc) = lVar5;
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
    lVar5 = *(long *)(param_1 + 0xe);
  }
  lVar3 = (**(code **)(lVar3 + 0x70))(param_1,lVar5,*(long *)(param_1 + 0x10) - lVar5);
  if (0 < lVar3) {
    *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + lVar3;
    if (*(long *)(param_1 + 0x24) != -1) {
      *(long *)(param_1 + 0x24) = *(long *)(param_1 + 0x24) + lVar3;
    }
    return (ulong)**(byte **)(param_1 + 2);
  }
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  uVar4 = *param_1 | 0x20;
  if (lVar3 == 0) {
    uVar4 = *param_1 | 0x10;
  }
  *param_1 = uVar4;
  return 0xffffffff;
}

