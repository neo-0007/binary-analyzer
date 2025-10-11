
int FUN_006fd190(uint *param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  long in_FS_OFFSET;
  bool bVar9;
  
  uVar5 = *param_1;
  if ((uVar5 & 0x2000) == 0) {
    uVar7 = uVar5 & 0x8000;
    if (uVar7 == 0) {
LAB_006fd26d:
      lVar3 = *(long *)(in_FS_OFFSET + 0x10);
      piVar8 = *(int **)(param_1 + 0x22);
      if (*(long *)(piVar8 + 2) != lVar3) {
        LOCK();
        iVar6 = *piVar8;
        if (iVar6 == 0) {
          *piVar8 = 1;
        }
        UNLOCK();
        if (iVar6 != 0) {
                    /* try { // try from 006fd360 to 006fd364 has its CatchHandler @ 006fd36a */
          FUN_00709590();
        }
        piVar8 = *(int **)(param_1 + 0x22);
        uVar5 = *param_1;
        *(long *)(piVar8 + 2) = lVar3;
      }
      piVar8[1] = piVar8[1] + 1;
      goto LAB_006fd2a6;
    }
  }
  else {
    FUN_007061c0();
    uVar5 = *param_1;
    if ((uVar5 & 0x8000) == 0) goto LAB_006fd26d;
LAB_006fd2a6:
    uVar7 = uVar5 & 0x8000;
    if ((uVar5 & 0x2000) != 0) {
                    /* try { // try from 006fd2ba to 006fd2be has its CatchHandler @ 006fd36a */
      iVar6 = FUN_00705100(param_1);
      uVar7 = *param_1 & 0x8000;
      goto LAB_006fd1bd;
    }
  }
  iVar6 = (int)(uVar5 << 0x1a) >> 0x1f;
LAB_006fd1bd:
  if (uVar7 == 0) {
    piVar2 = *(int **)(param_1 + 0x22);
    piVar8 = piVar2 + 1;
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      piVar2[2] = 0;
      piVar2[3] = 0;
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = 0;
      UNLOCK();
      if (1 < iVar1) {
        FUN_00709660();
      }
    }
  }
  lVar3 = *(long *)(param_1 + 0x36);
  if (0x827 < lVar3 - 0x93f160U) {
    FUN_00703130();
  }
  (**(code **)(lVar3 + 0x10))(param_1,0);
  if ((int)param_1[0x30] < 1) {
    if (*(long *)(param_1 + 0x12) != 0) {
      FUN_00706520(param_1);
    }
  }
  else {
    puVar4 = *(undefined8 **)(param_1 + 0x26);
    LOCK();
    bVar9 = DAT_009460b0 == 0;
    if (bVar9) {
      DAT_009460b0 = 1;
    }
    UNLOCK();
    if (!bVar9) {
      FUN_00709590(&DAT_009460b0);
    }
    FUN_006d3e40(*puVar4);
    FUN_006d3e40(puVar4[7]);
    iVar1 = DAT_009460b0;
    LOCK();
    DAT_009460b0 = 0;
    UNLOCK();
    if (1 < iVar1) {
      FUN_00709660(&DAT_009460b0);
    }
  }
  if ((param_1 != &DAT_0093dcc0 && param_1 != &DAT_0093dea0) && (param_1 != &DAT_0093dae0)) {
    FUN_007104f0(param_1);
  }
  return iVar6;
}

