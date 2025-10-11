
void d_print_mod_list(long param_1,undefined8 param_2,long *param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  size_t sVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  int *piVar12;
  undefined1 uVar13;
  char cVar14;
  long in_FS_OFFSET;
  char local_68 [40];
  long local_40;
  
  pcVar9 = local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != (long *)0x0) {
    do {
      if (*(int *)(param_1 + 0x130) != 0) break;
      if ((int)param_3[2] == 0) {
        piVar12 = (int *)param_3[1];
        iVar7 = *piVar12;
        if (param_4 == 0) {
          if (iVar7 - 0x1cU < 0x36) {
            if ((0x3400000000001fU >> ((ulong)(iVar7 - 0x1cU) & 0x3f) & 1) != 0) goto LAB_006bf41a;
            goto LAB_006bf3d6;
          }
          *(undefined4 *)(param_3 + 2) = 1;
          uVar1 = *(undefined8 *)(param_1 + 0x120);
          *(long *)(param_1 + 0x120) = param_3[3];
        }
        else {
LAB_006bf3d6:
          *(undefined4 *)(param_3 + 2) = 1;
          uVar1 = *(undefined8 *)(param_1 + 0x120);
          *(long *)(param_1 + 0x120) = param_3[3];
          if (iVar7 == 0x29) {
            d_print_function_type(param_1,0x11,piVar12,*param_3);
            *(undefined8 *)(param_1 + 0x120) = uVar1;
            break;
          }
        }
        if (iVar7 == 0x2a) {
          d_print_array_type(param_1,0x11,piVar12,*param_3);
          *(undefined8 *)(param_1 + 0x120) = uVar1;
          break;
        }
        if (iVar7 == 2) {
          uVar2 = *(undefined8 *)(param_1 + 0x128);
          uVar3 = *(undefined8 *)(piVar12 + 4);
          *(undefined8 *)(param_1 + 0x128) = 0;
          uVar13 = 0x3a;
          d_print_comp(param_1,0x11,uVar3);
          *(undefined8 *)(param_1 + 0x128) = uVar2;
          puVar11 = &DAT_00817c0b;
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
            if (puVar11 == &DAT_00817c0d) break;
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
            ___sprintf_chk(local_68,1,0x19,"%d",piVar12[6] + 1);
            sVar6 = strlen(local_68);
            lVar5 = *(long *)(param_1 + 0x100);
            if (sVar6 != 0) {
              lVar4 = lVar5;
              do {
                cVar14 = *pcVar9;
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
                pcVar9 = pcVar9 + 1;
                *(long *)(param_1 + 0x100) = lVar5;
                *(char *)(param_1 + lVar4) = cVar14;
                *(char *)(param_1 + 0x108) = cVar14;
                lVar4 = lVar5;
              } while (pcVar9 != local_68 + sVar6);
            }
            puVar10 = &DAT_00817c0a;
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
              if (puVar10 == &DAT_00817c0d) break;
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
          d_print_comp(param_1,0x11,piVar12);
          *(undefined8 *)(param_1 + 0x120) = uVar1;
          break;
        }
        d_print_mod(param_1,0x11);
        *(undefined8 *)(param_1 + 0x120) = uVar1;
      }
LAB_006bf41a:
      param_3 = (long *)*param_3;
    } while (param_3 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

