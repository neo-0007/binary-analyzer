
void FUN_007cd400(void)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar5 = DAT_0094ae90;
  if (DAT_0094ae90 != DAT_0094ae88) {
    do {
      plVar10 = (long *)*plVar5;
      FUN_007104f0(plVar5);
      plVar5 = plVar10;
    } while (DAT_0094ae88 != plVar10);
  }
  puVar7 = PTR_DAT_0093eb60;
  if (DAT_0093eb28 != 0) {
joined_r0x007cd450:
    if (puVar7 != (undefined *)0x0) {
      do {
        lVar6 = *(long *)(*(long *)(puVar7 + 0x38) + 8);
        *(undefined8 *)(*(long *)(puVar7 + 0x38) + 8) = 0;
        while (lVar4 = lVar6, lVar6 != 0) {
          while (lVar6 = *(long *)(lVar4 + 8), *(int *)(lVar4 + 0x10) == 0) {
            FUN_007104f0();
            lVar4 = lVar6;
            if (lVar6 == 0) goto LAB_007cd48d;
          }
        }
LAB_007cd48d:
        if ((puVar7[0x31e] & 0x10) != 0) goto LAB_007cd570;
        *(undefined8 *)(puVar7 + 0x3d0) = 0;
        puVar7 = *(undefined **)(puVar7 + 0x18);
        if (puVar7 == (undefined *)0x0) break;
      } while( true );
    }
    if ((DAT_0093eb78 != 0) && (*(int *)((long)PTR_PTR_0093eb70 + 8) == DAT_0093eb48)) {
      uVar1 = *(undefined8 *)PTR_PTR_0093eb70;
      *(undefined **)PTR_PTR_0093eb70 = PTR_PTR_0093eb40;
      DAT_0093eb78 = 0;
      FUN_007104f0(uVar1);
    }
  }
  lVar6 = DAT_00945878;
  plVar5 = *(long **)(DAT_00945878 + 8);
  if (plVar5 != (long *)0x0) {
    plVar10 = (long *)plVar5[1];
    if (plVar10 != (long *)0x0) {
      plVar8 = (long *)plVar10[1];
      if (plVar8 != (long *)0x0) {
        plVar9 = (long *)plVar8[1];
        if (plVar9 != (long *)0x0) {
          if (plVar9[1] != 0) {
            cVar2 = FUN_007cd140(plVar9[1] + 8);
            if (cVar2 == '\0') goto LAB_007cd544;
            lVar4 = *(long *)plVar9[1];
            if (lVar4 != 0) {
              lVar3 = 0;
              do {
                if (((long *)plVar9[1])[lVar3 * 2 + 3] != 0) goto LAB_007cd544;
                lVar3 = lVar3 + 1;
              } while (lVar4 != lVar3);
            }
            FUN_007104f0();
            plVar9[1] = 0;
            plVar9 = (long *)plVar8[1];
          }
          if (*plVar9 != 0) {
            lVar4 = 0;
            do {
              if (plVar9[lVar4 * 2 + 3] != 0) goto LAB_007cd544;
              lVar4 = lVar4 + 1;
            } while (*plVar9 != lVar4);
          }
          FUN_007104f0(plVar9);
          plVar8[1] = 0;
          plVar8 = (long *)plVar10[1];
        }
        if (*plVar8 != 0) {
          lVar4 = 0;
          do {
            if (plVar8[lVar4 * 2 + 3] != 0) goto LAB_007cd544;
            lVar4 = lVar4 + 1;
          } while (*plVar8 != lVar4);
        }
        FUN_007104f0(plVar8);
        plVar10[1] = 0;
        plVar10 = (long *)plVar5[1];
      }
      if (*plVar10 != 0) {
        lVar4 = 0;
        do {
          if (plVar10[lVar4 * 2 + 3] != 0) goto LAB_007cd544;
          lVar4 = lVar4 + 1;
        } while (lVar4 != *plVar10);
      }
      FUN_007104f0(plVar10);
      plVar5[1] = 0;
      plVar5 = *(long **)(lVar6 + 8);
    }
    if (*plVar5 != 0) {
      lVar4 = 0;
      do {
        if (plVar5[lVar4 * 2 + 3] != 0) goto LAB_007cd544;
        lVar4 = lVar4 + 1;
      } while (lVar4 != *plVar5);
    }
    FUN_007104f0(plVar5);
    *(undefined8 *)(lVar6 + 8) = 0;
  }
LAB_007cd544:
  uVar1 = DAT_0094adf8;
  DAT_0094adf8 = 0;
  FUN_007104f0(uVar1);
  return;
LAB_007cd570:
  FUN_007104f0(*(undefined8 *)(puVar7 + 0x3d0));
  *(undefined8 *)(puVar7 + 0x3d0) = 0;
  puVar7 = *(undefined **)(puVar7 + 0x18);
  goto joined_r0x007cd450;
}

