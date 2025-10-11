
void FUN_006d4c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long *plVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  int *piVar14;
  undefined8 *puVar15;
  long in_FS_OFFSET;
  int *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (uint *)FUN_006fda20(param_1,"rce");
  local_50 = (int *)0x0;
  local_48 = 0;
  if (puVar6 != (uint *)0x0) {
    uVar3 = *puVar6;
    *puVar6 = uVar3 | 0x8000;
    puVar4 = PTR_DAT_00939ca8;
    if ((uVar3 & 0x10) == 0) {
      do {
        lVar7 = FUN_006fe030(&local_50,&local_48,10,puVar6);
        piVar11 = local_50;
        if (lVar7 < 0) break;
        piVar8 = (int *)thunk_FUN_00712710(local_50,0x23);
        if (piVar8 == (int *)0x0) {
          pcVar12 = (char *)((long)piVar11 + lVar7 + -1);
          if (*pcVar12 == '\n') {
            *pcVar12 = '\0';
          }
        }
        else {
          *(char *)piVar8 = '\0';
        }
        while( true ) {
          uVar2 = *(ushort *)(puVar4 + (long)(char)*piVar11 * 2);
          if ((uVar2 & 0x2000) == 0) break;
          piVar11 = (int *)((long)piVar11 + 1);
        }
        if ((piVar8 != piVar11) && (piVar8 = piVar11, (char)*piVar11 != '\0')) {
          while ((uVar2 & 0x2000) == 0) {
            pcVar12 = (char *)((long)piVar8 + 1);
            piVar8 = (int *)((long)piVar8 + 1);
            if (*pcVar12 == '\0') break;
            uVar2 = *(ushort *)(puVar4 + (long)*pcVar12 * 2);
          }
          if ((long)piVar8 - (long)piVar11 == 5) {
            if ((*piVar11 == 0x61696c61) && ((char)piVar11[1] == 's')) {
              lVar7 = (long)(char)*piVar8;
              uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
              while ((uVar2 & 0x2000) != 0) {
                lVar7 = (long)*(char *)((long)piVar8 + 1);
                piVar8 = (int *)((long)piVar8 + 1);
                uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
              }
              piVar11 = piVar8;
              if ((char)lVar7 != '\0') {
                while (piVar1 = (int *)((long)piVar11 + 1), (uVar2 & 0x2000) == 0) {
                  *(char *)piVar11 = (char)*(undefined4 *)(PTR_DAT_00939cb8 + lVar7 * 4);
                  lVar7 = (long)*(char *)((long)piVar11 + 1);
                  if (*(char *)((long)piVar11 + 1) == '\0') goto LAB_006d4d20;
                  piVar11 = piVar1;
                  uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
                }
                lVar7 = (long)*(char *)((long)piVar11 + 1);
                *(char *)piVar11 = '\0';
                uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
                piVar11 = piVar1;
                while ((uVar2 & 0x2000) != 0) {
                  lVar7 = (long)*(char *)((long)piVar11 + 1);
                  piVar11 = (int *)((long)piVar11 + 1);
                  uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
                }
                piVar14 = piVar1;
                if ((char)lVar7 != '\0') {
                  while (piVar13 = piVar14, (uVar2 & 0x2000) == 0) {
                    piVar11 = (int *)((long)piVar11 + 1);
                    piVar13 = (int *)((long)piVar14 + 1);
                    *(char *)piVar14 = (char)*(undefined4 *)(PTR_DAT_00939cb8 + lVar7 * 4);
                    lVar7 = (long)*(char *)piVar11;
                    if (*(char *)piVar11 == '\0') break;
                    piVar14 = piVar13;
                    uVar2 = *(ushort *)(puVar4 + lVar7 * 2);
                  }
                  if (piVar13 != piVar1) {
                    *(char *)piVar13 = '\0';
                    for (puVar15 = DAT_009460b8; puVar15 != (undefined8 *)0x0;
                        puVar15 = (undefined8 *)puVar15[6]) {
                      while( true ) {
                        iVar5 = thunk_FUN_00712780(piVar8,*puVar15);
                        if (iVar5 == 0) goto LAB_006d4d20;
                        if (-1 < iVar5) break;
                        puVar15 = (undefined8 *)puVar15[4];
                        if (puVar15 == (undefined8 *)0x0) goto LAB_006d4eb2;
                      }
                    }
LAB_006d4eb2:
                    pcVar12 = (char *)((long)piVar13 + (1 - (long)piVar8));
                    plVar9 = (long *)FUN_007101b0(pcVar12 + 0x10);
                    if (plVar9 != (long *)0x0) {
                      lVar7 = thunk_FUN_00713a50(plVar9 + 2,piVar8,pcVar12);
                      *plVar9 = lVar7;
                      plVar9[1] = (long)((long)piVar1 + (lVar7 - (long)piVar8));
                      plVar10 = (long *)FUN_0076f440(plVar9,&DAT_009460c0,FUN_006d30c0);
                      if ((plVar10 == (long *)0x0) || (plVar9 != (long *)*plVar10)) {
                        FUN_007104f0(plVar9);
                      }
                    }
                  }
                }
              }
            }
          }
          else if ((((long)piVar8 - (long)piVar11 == 6) && (*piVar11 == 0x75646f6d)) &&
                  ((short)piVar11[1] == 0x656c)) {
            DAT_009460e8 = DAT_009460e8 + 1;
            FUN_006d4810(piVar8,param_2,param_3);
          }
        }
LAB_006d4d20:
      } while ((*puVar6 & 0x10) == 0);
    }
    FUN_007104f0(local_50);
    FUN_006fd190(puVar6);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

