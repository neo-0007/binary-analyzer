
void FUN_006c1410(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined1 uVar13;
  char cVar14;
  long in_FS_OFFSET;
  undefined1 local_68 [40];
  long local_40;
  
  puVar9 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (long *)0x0) {
    do {
      if (*(int *)(param_1 + 0x130) != 0) break;
      if ((int)param_3[2] == 0) {
        piVar12 = (int *)param_3[1];
        iVar7 = *piVar12;
        if (param_4 == 0) {
          if (iVar7 - 0x1cU < 0x36) {
            if ((0x3400000000001fU >> ((ulong)(iVar7 - 0x1cU) & 0x3f) & 1) != 0) goto LAB_006c149a;
            goto LAB_006c1456;
          }
          *(undefined4 *)(param_3 + 2) = 1;
          uVar1 = *(undefined8 *)(param_1 + 0x120);
          *(long *)(param_1 + 0x120) = param_3[3];
        }
        else {
LAB_006c1456:
          *(undefined4 *)(param_3 + 2) = 1;
          uVar1 = *(undefined8 *)(param_1 + 0x120);
          *(long *)(param_1 + 0x120) = param_3[3];
          if (iVar7 == 0x29) {
            FUN_006c10b0(param_1,0x11,piVar12,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar1;
            break;
          }
        }
        if (iVar7 == 0x2a) {
          FUN_006c17c0(param_1,0x11,piVar12,*param_3);
          *(undefined8 *)(param_1 + 0x120) = uVar1;
          break;
        }
        if (iVar7 == 2) {
          uVar2 = *(undefined8 *)(param_1 + 0x128);
          uVar3 = *(undefined8 *)(piVar12 + 4);
          *(undefined8 *)(param_1 + 0x128) = 0;
          uVar13 = 0x3a;
          FUN_006c06b0(param_1,0x11,uVar3);
          *(undefined8 *)(param_1 + 0x128) = uVar2;
          puVar11 = &DAT_00821383;
          lVar5 = *(long *)(param_1 + 0x100);
          while( true ) {
            if (lVar5 == 0xff) {
              *(undefined1 *)(param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
              lVar4 = 1;
              lVar5 = 0;
            }
            else {
              lVar4 = lVar5 + 1;
            }
            puVar11 = puVar11 + 1;
            *(long *)(param_1 + 0x100) = lVar4;
            *(undefined1 *)(param_1 + lVar5) = uVar13;
            *(undefined1 *)(param_1 + 0x108) = uVar13;
            if (puVar11 == &DAT_00821385) break;
            uVar13 = *puVar11;
            lVar5 = lVar4;
          }
          piVar12 = *(int **)(param_3[1] + 0x18);
          iVar7 = *piVar12;
          if (iVar7 == 0x48) {
            pcVar8 = "{default arg#";
            cVar14 = '{';
            while( true ) {
              pcVar8 = pcVar8 + 1;
              if (lVar4 == 0xff) {
                *(undefined1 *)(param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
                lVar5 = 1;
                lVar4 = 0;
              }
              else {
                lVar5 = lVar4 + 1;
              }
              *(long *)(param_1 + 0x100) = lVar5;
              *(char *)(param_1 + lVar4) = cVar14;
              *(char *)(param_1 + 0x108) = cVar14;
              if (pcVar8 == "") break;
              cVar14 = *pcVar8;
              lVar4 = lVar5;
            }
            FUN_00771b70(local_68,1,0x19,"%d",piVar12[6] + 1);
            lVar4 = thunk_FUN_007129d0(local_68);
            lVar5 = *(long *)(param_1 + 0x100);
            if (lVar4 != 0) {
              lVar6 = lVar5;
              do {
                uVar13 = *puVar9;
                if (lVar6 == 0xff) {
                  *(undefined1 *)(param_1 + 0xff) = 0;
                  (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                  *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
                  lVar5 = 1;
                  lVar6 = 0;
                }
                else {
                  lVar5 = lVar6 + 1;
                }
                puVar9 = puVar9 + 1;
                *(long *)(param_1 + 0x100) = lVar5;
                *(undefined1 *)(param_1 + lVar6) = uVar13;
                *(undefined1 *)(param_1 + 0x108) = uVar13;
                lVar6 = lVar5;
              } while (puVar9 != local_68 + lVar4);
            }
            puVar10 = &DAT_00821382;
            uVar13 = 0x7d;
            while( true ) {
              if (lVar5 == 0xff) {
                *(undefined1 *)(param_1 + 0xff) = 0;
                (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
                *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
                lVar4 = 1;
                lVar5 = 0;
              }
              else {
                lVar4 = lVar5 + 1;
              }
              puVar10 = puVar10 + 1;
              *(long *)(param_1 + 0x100) = lVar4;
              *(undefined1 *)(param_1 + lVar5) = uVar13;
              *(undefined1 *)(param_1 + 0x108) = uVar13;
              if (puVar10 == &DAT_00821385) break;
              uVar13 = *puVar10;
              lVar5 = lVar4;
            }
            piVar12 = *(int **)(piVar12 + 4);
            iVar7 = *piVar12;
          }
          while ((iVar7 - 0x1cU < 0x36 &&
                 ((0x3400000000001fU >> ((ulong)(iVar7 - 0x1cU) & 0x3f) & 1) != 0))) {
            piVar12 = *(int **)(piVar12 + 4);
            iVar7 = *piVar12;
          }
          FUN_006c06b0(param_1,0x11,piVar12);
          *(undefined8 *)(param_1 + 0x120) = uVar1;
          break;
        }
        FUN_006c0770(param_1,0x11);
        *(undefined8 *)(param_1 + 0x120) = uVar1;
      }
LAB_006c149a:
      param_3 = (long *)*param_3;
    } while (param_3 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

