
long * FUN_00661f90(long *param_1,long *param_2,ulong param_3,long *param_4,ulong param_5,
                   long param_6,uint *param_7,undefined8 param_8,undefined4 *param_9,
                   undefined4 *param_10)

{
  long lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auVar18 [16];
  long *local_b8;
  ulong local_a0;
  ulong local_90;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 local_4c;
  long local_40;
  
  uVar13 = param_3 & 0xffffffff;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar6 = (long *)FUN_006a4ba0();
  *param_7 = 0;
  if (param_9 != param_10) {
    bVar15 = (int)param_5 == -1;
    local_b8 = param_4;
    local_a0 = param_3;
    local_90 = param_5;
    while( true ) {
      bVar16 = (int)uVar13 == -1;
      bVar9 = param_2 != (long *)0x0 && bVar16;
      bVar17 = bVar16;
      if (bVar9) {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar4 = *(int *)param_2[2];
        }
        else {
          iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar4 == -1) {
          param_2 = (long *)0x0;
        }
        bVar17 = iVar4 == -1 && bVar9;
      }
      bVar8 = local_b8 != (long *)0x0 && bVar15;
      bVar9 = bVar15;
      if (bVar8) {
        if ((int *)local_b8[2] < (int *)local_b8[3]) {
          iVar4 = *(int *)local_b8[2];
        }
        else {
          iVar4 = (**(code **)(*local_b8 + 0x48))();
        }
        plVar7 = (long *)0x0;
        if (iVar4 != -1) {
          plVar7 = local_b8;
        }
        local_b8 = plVar7;
        bVar9 = iVar4 == -1 && bVar8;
      }
      if (bVar9 == bVar17) break;
      cVar2 = (**(code **)(*plVar6 + 0x60))(plVar6,*param_9,0);
      if (cVar2 == '%') {
        puVar14 = param_9 + 1;
        if (param_10 == puVar14) {
LAB_00662670:
          *param_7 = 4;
          goto LAB_00662290;
        }
        cVar2 = (**(code **)(*plVar6 + 0x60))(plVar6,param_9[1],0);
        if (cVar2 == 'E') {
LAB_00662430:
          puVar14 = param_9 + 2;
          if (param_10 == puVar14) goto LAB_00662670;
          cVar3 = (**(code **)(*plVar6 + 0x60))(plVar6,param_9[2],0);
          iVar4 = (int)cVar2;
          cVar10 = cVar2;
        }
        else {
          iVar4 = 0;
          cVar3 = cVar2;
          cVar10 = '\0';
          if (cVar2 == 'O') goto LAB_00662430;
        }
        iVar12 = (int)cVar3;
        if (*(code **)(*param_1 + 0x40) == FUN_00661b20) {
          local_a0 = local_a0 & 0xffffffff00000000 | uVar13;
          local_90 = local_90 & 0xffffffff00000000 | param_5 & 0xffffffff;
          plVar7 = (long *)FUN_006a4ba0(param_6 + 0xd0);
          lVar1 = *plVar7;
          *param_7 = 0;
          local_58 = (**(code **)(lVar1 + 0x50))(plVar7,0x25);
          if (cVar10 == '\0') {
            local_50 = 0;
            local_54 = iVar12;
          }
          else {
            local_4c = 0;
            local_54 = iVar4;
            local_50 = iVar12;
          }
          auVar18 = FUN_006602b0(param_1,param_2,local_a0,local_b8,local_90,param_6,param_7,param_8,
                                 &local_58);
          plVar7 = auVar18._0_8_;
          bVar17 = auVar18._8_4_ == -1;
          uVar13 = auVar18._8_8_ & 0xffffffff;
          bVar9 = plVar7 != (long *)0x0 && bVar17;
          param_2 = plVar7;
          if (bVar9) {
            if ((int *)plVar7[2] < (int *)plVar7[3]) {
              iVar4 = *(int *)plVar7[2];
            }
            else {
              iVar4 = (**(code **)(*plVar7 + 0x48))(plVar7);
            }
            param_2 = (long *)0x0;
            if (iVar4 != -1) {
              param_2 = plVar7;
            }
            bVar17 = iVar4 == -1 && bVar9;
          }
          bVar9 = bVar15;
          if ((local_b8 != (long *)0x0) && (bVar15)) {
            if ((int *)local_b8[2] < (int *)local_b8[3]) {
              iVar4 = *(int *)local_b8[2];
            }
            else {
              iVar4 = (**(code **)(*local_b8 + 0x48))();
            }
            bVar9 = iVar4 == -1;
          }
          if (bVar9 == bVar17) {
            *param_7 = *param_7 | 2;
          }
        }
        else {
          local_a0 = local_a0 & 0xffffffff00000000 | uVar13;
          local_90 = local_90 & 0xffffffff00000000 | param_5 & 0xffffffff;
          auVar18 = (**(code **)(*param_1 + 0x40))
                              (param_1,param_2,local_a0,local_b8,local_90,param_6,param_7,param_8,
                               iVar12,iVar4);
          param_2 = auVar18._0_8_;
          uVar13 = auVar18._8_8_ & 0xffffffff;
        }
        param_9 = puVar14 + 1;
      }
      else {
        cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2000,*param_9);
        if (cVar2 != '\0') {
          do {
            param_9 = param_9 + 1;
            if (param_10 == param_9) break;
            cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2000,*param_9);
          } while (cVar2 != '\0');
          do {
            bVar17 = (int)uVar13 == -1;
            bVar9 = param_2 != (long *)0x0;
            if (bVar9 && bVar17) {
              if ((int *)param_2[2] < (int *)param_2[3]) {
                iVar4 = *(int *)param_2[2];
              }
              else {
                iVar4 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              if (iVar4 == -1) {
                param_2 = (long *)0x0;
              }
              bVar9 = iVar4 == -1 && (bVar9 && bVar17);
              if (local_b8 != (long *)0x0 && bVar15) goto LAB_006623b0;
LAB_00662322:
              if (bVar9 == bVar15) goto joined_r0x006620cd;
            }
            else {
              bVar9 = bVar17;
              if (local_b8 == (long *)0x0 || !bVar15) goto LAB_00662322;
LAB_006623b0:
              bVar16 = local_b8 != (long *)0x0;
              if ((int *)local_b8[2] < (int *)local_b8[3]) {
                iVar4 = *(int *)local_b8[2];
              }
              else {
                iVar4 = (**(code **)(*local_b8 + 0x48))(local_b8);
              }
              if (iVar4 == -1) {
                local_b8 = (long *)0x0;
              }
              if (bVar9 == (iVar4 == -1 && (bVar16 && bVar15))) goto joined_r0x006620cd;
            }
            uVar11 = uVar13;
            if ((param_2 != (long *)0x0) && (bVar17)) {
              if ((uint *)param_2[2] < (uint *)param_2[3]) {
                uVar5 = *(uint *)param_2[2];
              }
              else {
                uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
              }
              uVar11 = (ulong)uVar5;
              if (uVar5 == 0xffffffff) {
                param_2 = (long *)0x0;
              }
            }
            cVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2000,uVar11);
            if (cVar2 == '\0') goto joined_r0x006620cd;
            if ((ulong)param_2[2] < (ulong)param_2[3]) {
              param_2[2] = param_2[2] + 4;
            }
            else {
              (**(code **)(*param_2 + 0x50))(param_2);
            }
            uVar13 = 0xffffffff;
          } while( true );
        }
        uVar11 = uVar13;
        if ((param_2 == (long *)0x0) || (!bVar16)) {
LAB_00662069:
          iVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,uVar11);
          iVar12 = (**(code **)(*plVar6 + 0x40))(plVar6,*param_9);
          if (iVar4 != iVar12) {
LAB_00662088:
            iVar4 = (**(code **)(*plVar6 + 0x30))(plVar6,uVar13);
            iVar12 = (**(code **)(*plVar6 + 0x30))(plVar6,*param_9);
            if (iVar12 != iVar4) goto LAB_00662670;
          }
        }
        else {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar5 = *(uint *)param_2[2];
          }
          else {
            uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar5 == 0xffffffff) {
            param_2 = (long *)0x0;
            uVar11 = (ulong)uVar5;
            goto LAB_00662069;
          }
          iVar4 = (**(code **)(*plVar6 + 0x40))(plVar6,(ulong)uVar5);
          iVar12 = (**(code **)(*plVar6 + 0x40))(plVar6,*param_9);
          if (iVar12 != iVar4) {
            if ((uint *)param_2[2] < (uint *)param_2[3]) {
              uVar5 = *(uint *)param_2[2];
            }
            else {
              uVar5 = (**(code **)(*param_2 + 0x48))(param_2);
            }
            uVar13 = (ulong)uVar5;
            if (uVar5 == 0xffffffff) {
              param_2 = (long *)0x0;
            }
            goto LAB_00662088;
          }
        }
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          (**(code **)(*param_2 + 0x50))(param_2);
        }
        param_9 = param_9 + 1;
        uVar13 = 0xffffffff;
      }
joined_r0x006620cd:
      if ((param_9 == param_10) || (*param_7 != 0)) goto LAB_00662290;
    }
    *param_7 = 6;
  }
LAB_00662290:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

