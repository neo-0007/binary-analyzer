
long * FUN_00687660(undefined8 param_1,long *param_2,ulong param_3,long *param_4,undefined8 param_5,
                   int *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  undefined1 *puVar14;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long in_FS_OFFSET;
  undefined1 auStack_a8 [15];
  char local_99;
  int *local_98;
  long **local_90;
  long **local_88;
  uint *local_80;
  ulong local_78;
  long *local_70;
  long *local_68;
  undefined8 local_60;
  long *local_58;
  ulong local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar14 = auStack_a8;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = param_6;
  local_68 = param_4;
  local_60 = param_5;
  local_58 = param_2;
  local_50 = param_3;
  plVar9 = (long *)FUN_0067c1e0(param_9 + 0xd0);
  uVar10 = param_8 * 4 + 0x17;
  puVar15 = auStack_a8;
  puVar4 = auStack_a8;
  while (puVar15 != auStack_a8 + -(uVar10 & 0xfffffffffffff000)) {
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
  local_88 = &local_58;
  piVar16 = (int *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
  local_90 = &local_68;
  *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68772a;
  cVar5 = FUN_00681960(local_88);
  if (cVar5 == '\0') {
    *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68776a;
    cVar5 = FUN_00681a20(local_88);
    if (param_8 != 0) {
      lVar17 = 0;
      plVar18 = (long *)0x0;
LAB_0068779f:
      do {
        if (**(char **)(param_7 + lVar17 * 8) != cVar5) {
          local_70 = (long *)CONCAT71(local_70._1_7_,cVar5);
          pcVar2 = *(code **)(*plVar9 + 0x10);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68778d;
          cVar6 = (*pcVar2)(plVar9);
          cVar5 = (char)local_70;
          if ((char)local_70 != cVar6) {
            lVar17 = lVar17 + 1;
            if (param_8 == lVar17) break;
            goto LAB_0068779f;
          }
        }
        piVar16[(long)plVar18] = (int)lVar17;
        plVar18 = (long *)((long)plVar18 + 1);
        lVar17 = lVar17 + 1;
      } while (param_8 != lVar17);
      local_78 = 0;
      while ((long *)0x1 < plVar18) {
        lVar17 = (long)*piVar16;
        uVar1 = *(undefined8 *)(param_7 + lVar17 * 8);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6877de;
        uVar10 = thunk_FUN_007129d0(uVar1);
        plVar9 = (long *)0x1;
        do {
          uVar1 = *(undefined8 *)(param_7 + (long)piVar16[(long)plVar9] * 8);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687801;
          local_70 = plVar9;
          uVar11 = thunk_FUN_007129d0(uVar1);
          if (uVar11 < uVar10) {
            uVar10 = uVar11;
          }
          plVar9 = (long *)((long)local_70 + 1);
        } while (plVar9 < plVar18);
        if ((ulong)local_58[2] < (ulong)local_58[3]) {
          local_58[2] = local_58[2] + 1;
          plVar9 = local_58;
        }
        else {
          local_70 = local_58;
          pcVar2 = *(code **)(*local_58 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68793a;
          (*pcVar2)();
          plVar9 = local_70;
        }
        local_78 = local_78 + 1;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        if (uVar10 <= local_78) goto LAB_00687730;
        cVar5 = '\0';
        if ((ulong)plVar9[3] <= (ulong)plVar9[2]) {
          local_70 = (long *)((ulong)local_70 & 0xffffffffffffff00);
          pcVar2 = *(code **)(*plVar9 + 0x48);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687958;
          iVar8 = (*pcVar2)();
          cVar5 = (char)local_70;
          if (iVar8 == -1) {
            local_58 = (long *)0x0;
            cVar5 = '\x01';
          }
        }
        bVar7 = local_68 != (long *)0x0 && (int)local_60 == -1;
        cVar6 = (int)local_60 == -1;
        if ((bVar7) && (cVar6 = '\0', (ulong)local_68[3] <= (ulong)local_68[2])) {
          local_70 = (long *)CONCAT71(local_70._1_7_,cVar5);
          pcVar2 = *(code **)(*local_68 + 0x48);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6878ee;
          local_99 = bVar7;
          iVar8 = (*pcVar2)();
          cVar5 = (char)local_70;
          if (iVar8 == -1) {
            local_68 = (long *)0x0;
            cVar6 = local_99;
          }
        }
        if (cVar5 == cVar6) goto LAB_00687730;
        plVar9 = (long *)0x0;
        while( true ) {
          cVar6 = -1;
          cVar5 = *(char *)(*(long *)(param_7 + lVar17 * 8) + local_78);
          if (local_58 != (long *)0x0) {
            if ((char *)local_58[2] < (char *)local_58[3]) {
              cVar6 = *(char *)local_58[2];
            }
            else {
              local_70 = (long *)CONCAT71(local_70._1_7_,cVar5);
              pcVar2 = *(code **)(*local_58 + 0x48);
              *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687922;
              iVar8 = (*pcVar2)();
              cVar5 = (char)local_70;
              if (iVar8 == -1) {
                local_58 = (long *)0x0;
              }
              else {
                cVar6 = (char)iVar8;
              }
            }
          }
          if (cVar5 == cVar6) {
            plVar9 = (long *)((long)plVar9 + 1);
          }
          else {
            plVar18 = (long *)((long)plVar18 + -1);
            piVar16[(long)plVar9] = piVar16[(long)plVar18];
          }
          if (plVar18 <= plVar9) break;
          lVar17 = (long)piVar16[(long)plVar9];
        }
      }
      if (plVar18 == (long *)0x1) {
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68799e;
        FUN_0069d140(local_58);
        iVar8 = *piVar16;
        local_50 = CONCAT44(local_50._4_4_,0xffffffff);
        lVar17 = *(long *)(param_7 + (long)iVar8 * 8);
        uVar11 = local_78 + 1;
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x6879bf;
        uVar10 = thunk_FUN_007129d0(lVar17);
        if (uVar11 < uVar10) {
          do {
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687a0f;
            cVar5 = FUN_00681960(local_88,local_90);
            if (cVar5 != '\0') goto LAB_00687730;
            cVar5 = *(char *)(lVar17 + uVar11);
            uVar13 = local_50 & 0xffffffff;
            if ((local_58 == (long *)0x0) || ((int)local_50 != -1)) {
LAB_006879d0:
              if (cVar5 != (char)uVar13) goto LAB_00687730;
              pcVar12 = (char *)local_58[2];
              if (pcVar12 < (char *)local_58[3]) goto LAB_006879e7;
              pcVar2 = *(code **)(*local_58 + 0x50);
              *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687a4e;
              (*pcVar2)();
            }
            else {
              pcVar12 = (char *)local_58[2];
              if ((char *)local_58[3] <= pcVar12) {
                pcVar2 = *(code **)(*local_58 + 0x48);
                *(undefined8 *)(puVar14 + lVar3 + -8) = 0x687a6b;
                uVar13 = (*pcVar2)();
                if ((int)uVar13 == -1) {
                  local_58 = (long *)0x0;
                }
                goto LAB_006879d0;
              }
              if (cVar5 != *pcVar12) goto LAB_00687730;
LAB_006879e7:
              local_58[2] = (long)(pcVar12 + 1);
            }
            uVar11 = uVar11 + 1;
            local_50 = CONCAT44(local_50._4_4_,0xffffffff);
          } while (uVar11 != uVar10);
        }
        else if (uVar11 != uVar10) goto LAB_00687730;
        *local_98 = iVar8;
        goto LAB_00687737;
      }
    }
  }
LAB_00687730:
  *local_80 = *local_80 | 4;
LAB_00687737:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar14 + lVar3 + -8) = 0x68798b;
  FUN_00771f60();
}

