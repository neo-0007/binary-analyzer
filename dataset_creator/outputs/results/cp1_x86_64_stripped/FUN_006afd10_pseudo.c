
long * FUN_006afd10(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5,int *param_6,long param_7,long param_8,long param_9,
                   uint *param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  char cVar12;
  byte bVar13;
  undefined1 *puVar14;
  int *piVar16;
  long lVar17;
  long *plVar18;
  byte bVar19;
  long *plVar20;
  long in_FS_OFFSET;
  byte bVar21;
  undefined1 auStack_98 [12];
  int local_8c;
  int *local_88;
  uint *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar14 = auStack_98;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  plVar9 = (long *)FUN_006a4ba0(param_9 + 0xd0);
  uVar10 = param_8 * 4 + 0x17;
  puVar15 = auStack_98;
  puVar4 = auStack_98;
  while (puVar15 != auStack_98 + -(uVar10 & 0xfffffffffffff000)) {
    puVar14 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar15 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar10 = (ulong)((uint)uVar10 & 0xff0);
  lVar3 = -uVar10;
  if (uVar10 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  piVar16 = (int *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afdcc;
  cVar5 = FUN_006aa060(&local_58,&local_68);
  if (cVar5 == '\0') {
    *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afe09;
    iVar7 = FUN_006aa130(&local_58);
    if (param_8 != 0) {
      lVar17 = 0;
      plVar20 = (long *)0x0;
LAB_006afe3e:
      do {
        if (**(int **)(param_7 + lVar17 * 8) != iVar7) {
          local_70 = (long *)CONCAT44(local_70._4_4_,iVar7);
          pcVar2 = *(code **)(*plVar9 + 0x30);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afe2d;
          iVar8 = (*pcVar2)(plVar9);
          iVar7 = (int)local_70;
          if ((int)local_70 != iVar8) {
            lVar17 = lVar17 + 1;
            if (param_8 == lVar17) break;
            goto LAB_006afe3e;
          }
        }
        piVar16[(long)plVar20] = (int)lVar17;
        plVar20 = (long *)((long)plVar20 + 1);
        lVar17 = lVar17 + 1;
      } while (param_8 != lVar17);
      local_78 = 0;
      while ((long *)0x1 < plVar20) {
        lVar17 = (long)*piVar16;
        uVar1 = *(undefined8 *)(param_7 + lVar17 * 8);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afe7e;
        uVar10 = thunk_FUN_007564d0(uVar1);
        plVar9 = (long *)0x1;
        do {
          uVar1 = *(undefined8 *)(param_7 + (long)piVar16[(long)plVar9] * 8);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afea1;
          local_70 = plVar9;
          uVar11 = thunk_FUN_007564d0(uVar1);
          if (uVar11 < uVar10) {
            uVar10 = uVar11;
          }
          plVar9 = (long *)((long)local_70 + 1);
        } while (plVar9 < plVar20);
        if ((ulong)local_58[2] < (ulong)local_58[3]) {
          local_58[2] = local_58[2] + 4;
          plVar9 = local_58;
        }
        else {
          local_70 = local_58;
          pcVar2 = *(code **)(*local_58 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6afff2;
          (*pcVar2)();
          plVar9 = local_70;
        }
        local_78 = local_78 + 1;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        if (uVar10 <= local_78) goto LAB_006afdd0;
        if ((int *)plVar9[2] < (int *)plVar9[3]) {
          iVar7 = *(int *)plVar9[2];
        }
        else {
          pcVar2 = *(code **)(*plVar9 + 0x48);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b002a;
          iVar7 = (*pcVar2)();
        }
        if (iVar7 == -1) {
          local_58 = (long *)0x0;
        }
        cVar12 = local_68 != (long *)0x0 && (int)local_60 == -1;
        cVar5 = (int)local_60 == -1;
        if ((bool)cVar12) {
          if ((int *)local_68[2] < (int *)local_68[3]) {
            iVar8 = *(int *)local_68[2];
          }
          else {
            local_70 = (long *)CONCAT71(local_70._1_7_,cVar12);
            pcVar2 = *(code **)(*local_68 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b001c;
            iVar8 = (*pcVar2)();
            cVar12 = (byte)local_70;
          }
          cVar5 = '\0';
          if (iVar8 == -1) {
            local_68 = (long *)0x0;
            cVar5 = cVar12;
          }
        }
        if ((iVar7 == -1) == (bool)cVar5) goto LAB_006afdd0;
        plVar18 = (long *)0x0;
        plVar9 = (long *)(local_78 * 4);
        while( true ) {
          iVar8 = -1;
          iVar7 = *(int *)(*(long *)(param_7 + lVar17 * 8) + (long)plVar9);
          if (local_58 != (long *)0x0) {
            if ((int *)local_58[2] < (int *)local_58[3]) {
              iVar8 = *(int *)local_58[2];
            }
            else {
              pcVar2 = *(code **)(*local_58 + 0x48);
              *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6affda;
              local_70 = plVar9;
              iVar8 = (*pcVar2)();
              plVar9 = local_70;
            }
            if (iVar8 == -1) {
              local_58 = (long *)0x0;
            }
          }
          if (iVar7 == iVar8) {
            plVar18 = (long *)((long)plVar18 + 1);
          }
          else {
            plVar20 = (long *)((long)plVar20 + -1);
            piVar16[(long)plVar18] = piVar16[(long)plVar20];
          }
          if (plVar20 <= plVar18) break;
          lVar17 = (long)piVar16[(long)plVar18];
        }
      }
      if (plVar20 == (long *)0x1) {
        local_70 = local_58;
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b0049;
        FUN_0069d900(local_58);
        local_8c = *piVar16;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        lVar17 = *(long *)(param_7 + (long)local_8c * 8);
        uVar11 = local_78 + 1;
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b006d;
        uVar10 = thunk_FUN_007564d0(lVar17);
        if (uVar11 < uVar10) {
          bVar21 = (int)local_60 == -1;
          plVar9 = local_70;
          do {
            bVar19 = 1;
            if (plVar9 != (long *)0x0) {
              if ((int *)plVar9[2] < (int *)plVar9[3]) {
                iVar7 = *(int *)plVar9[2];
              }
              else {
                local_70 = (long *)CONCAT71(local_70._1_7_,bVar21);
                pcVar2 = *(code **)(*plVar9 + 0x48);
                *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b01c9;
                iVar7 = (*pcVar2)(plVar9);
                bVar21 = (byte)local_70;
              }
              bVar19 = 0;
              if (iVar7 == -1) {
                local_58 = (long *)0x0;
                bVar19 = 1;
              }
            }
            bVar6 = local_68 != (long *)0x0 & bVar21;
            bVar13 = bVar21;
            if (bVar6 != 0) {
              if ((int *)local_68[2] < (int *)local_68[3]) {
                iVar7 = *(int *)local_68[2];
              }
              else {
                local_70 = (long *)CONCAT71(local_70._1_7_,bVar21);
                pcVar2 = *(code **)(*local_68 + 0x48);
                *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b01db;
                iVar7 = (*pcVar2)();
                bVar13 = (byte)local_70;
              }
              if (iVar7 == -1) {
                local_68 = (long *)0x0;
                bVar21 = bVar6;
              }
              else {
                bVar21 = 0;
              }
            }
            if (bVar21 == bVar19) goto LAB_006afdd0;
            iVar7 = *(int *)(lVar17 + uVar11 * 4);
            iVar8 = -1;
            if (local_58 != (long *)0x0) {
              if ((int *)local_58[2] < (int *)local_58[3]) {
                iVar8 = *(int *)local_58[2];
              }
              else {
                local_70 = (long *)CONCAT71(local_70._1_7_,bVar13);
                pcVar2 = *(code **)(*local_58 + 0x48);
                *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b01ed;
                iVar8 = (*pcVar2)();
                bVar13 = (byte)local_70;
              }
              if (iVar8 == -1) {
                local_58 = (long *)0x0;
              }
            }
            if (iVar7 != iVar8) goto LAB_006afdd0;
            if ((ulong)local_58[2] < (ulong)local_58[3]) {
              local_58[2] = local_58[2] + 4;
              plVar9 = local_58;
              bVar21 = bVar13;
            }
            else {
              local_78 = CONCAT71(local_78._1_7_,bVar13);
              local_70 = local_58;
              pcVar2 = *(code **)(*local_58 + 0x50);
              *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6b0189;
              (*pcVar2)(local_58);
              plVar9 = local_70;
              bVar21 = (byte)local_78;
            }
            uVar11 = uVar11 + 1;
            local_50 = CONCAT44(local_50._4_4_,0xffffffff);
          } while (uVar11 < uVar10);
        }
        if (uVar10 == uVar11) {
          *local_88 = local_8c;
          goto LAB_006afdd7;
        }
      }
    }
  }
LAB_006afdd0:
  *local_80 = *local_80 | 4;
LAB_006afdd7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + lVar3 + -8) = &UNK_006b01fd;
  FUN_00771f60();
}

