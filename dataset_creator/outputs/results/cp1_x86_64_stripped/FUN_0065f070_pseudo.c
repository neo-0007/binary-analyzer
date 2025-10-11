
long * FUN_0065f070(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                   undefined4 *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  undefined1 *puVar14;
  bool bVar16;
  long lVar17;
  bool bVar18;
  ulong uVar19;
  byte bVar20;
  byte bVar21;
  long in_FS_OFFSET;
  char cVar22;
  char cVar23;
  undefined1 auStack_98 [15];
  char local_89;
  undefined4 *local_88;
  uint *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  undefined8 local_58;
  long *local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar14 = auStack_98;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)CONCAT44(local_58._4_4_,(int)param_3);
  local_88 = param_6;
  local_78 = param_3;
  local_70 = param_4;
  local_60 = param_2;
  local_50 = param_5;
  plVar7 = (long *)FUN_006a4ba0(param_9 + 0xd0);
  uVar19 = param_8 * 4 + 0x17;
  puVar15 = auStack_98;
  puVar4 = auStack_98;
  while (puVar15 != auStack_98 + -(uVar19 & 0xfffffffffffff000)) {
    puVar14 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar15 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar19 = (ulong)((uint)uVar19 & 0xff0);
  lVar3 = -uVar19;
  if (uVar19 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  cVar22 = (int)local_78 == -1;
  bVar16 = local_60 != (long *)0x0 && (bool)cVar22;
  bVar18 = (bool)cVar22;
  if (bVar16) {
    if ((int *)local_60[2] < (int *)local_60[3]) {
      iVar5 = *(int *)local_60[2];
    }
    else {
      pcVar2 = *(code **)(*local_60 + 0x48);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f5ef;
      local_89 = cVar22;
      local_68 = plVar7;
      iVar5 = (*pcVar2)(local_60);
      plVar7 = local_68;
      cVar22 = local_89;
    }
    param_2 = (long *)0x0;
    if (iVar5 != -1) {
      param_2 = local_60;
    }
    bVar18 = iVar5 == -1 && bVar16;
  }
  cVar23 = (int)local_50 == -1;
  local_68 = (long *)CONCAT71(local_68._1_7_,cVar23);
  bVar16 = param_4 != (long *)0x0 && (bool)cVar23;
  if (bVar16) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar5 = *(int *)param_4[2];
      cVar23 = bVar16;
    }
    else {
      local_70 = (long *)CONCAT71(local_70._1_7_,bVar16);
      local_60 = (long *)CONCAT71(local_60._1_7_,cVar22);
      pcVar2 = *(code **)(*param_4 + 0x48);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f5c7;
      local_50 = plVar7;
      iVar5 = (*pcVar2)(param_4);
      plVar7 = local_50;
      cVar22 = (byte)local_60;
      cVar23 = (char)local_70;
    }
    local_70 = (long *)0x0;
    if (iVar5 != -1) {
      cVar23 = '\0';
      local_70 = param_4;
    }
  }
  if ((bool)cVar23 != bVar18) {
    if ((param_2 == (long *)0x0) || (cVar22 == '\0')) {
      iVar5 = (int)local_78;
    }
    else {
      if ((int *)param_2[2] < (int *)param_2[3]) {
        iVar5 = *(int *)param_2[2];
      }
      else {
        pcVar2 = *(code **)(*param_2 + 0x48);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f611;
        local_50 = plVar7;
        iVar5 = (*pcVar2)(param_2);
        plVar7 = local_50;
      }
      if (iVar5 == -1) {
        param_2 = (long *)0x0;
      }
    }
    if (param_8 != 0) {
      lVar17 = 0;
      uVar19 = 0;
      local_60 = param_2;
      local_50 = (long *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
      do {
        while (**(int **)(param_7 + lVar17 * 8) == iVar5) {
LAB_0065f203:
          *(int *)((long)local_50 + uVar19 * 4) = (int)lVar17;
          uVar19 = uVar19 + 1;
          lVar17 = lVar17 + 1;
          if (param_8 == lVar17) goto LAB_0065f219;
        }
        pcVar2 = *(code **)(*plVar7 + 0x30);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f1e9;
        iVar6 = (*pcVar2)(plVar7);
        if (iVar5 == iVar6) goto LAB_0065f203;
        lVar17 = lVar17 + 1;
      } while (param_8 != lVar17);
LAB_0065f219:
      plVar7 = local_50;
      local_50 = (long *)0x0;
      param_2 = local_60;
      if (1 < uVar19) {
        local_58 = local_60;
LAB_0065f248:
        lVar17 = *plVar7;
        uVar1 = *(undefined8 *)(param_7 + (long)(int)lVar17 * 8);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f257;
        plVar8 = (long *)thunk_FUN_007564d0(uVar1);
        uVar13 = 1;
        local_60 = (long *)(long)(int)lVar17;
        do {
          uVar1 = *(undefined8 *)(param_7 + (long)*(int *)((long)plVar7 + uVar13 * 4) * 8);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f27d;
          plVar9 = (long *)thunk_FUN_007564d0(uVar1);
          plVar10 = local_60;
          if (plVar9 < plVar8) {
            plVar8 = plVar9;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar19);
        if ((ulong)local_58[2] < (ulong)local_58[3]) {
          local_58[2] = local_58[2] + 4;
        }
        else {
          pcVar2 = *(code **)(*local_58 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f50a;
          (*pcVar2)();
        }
        local_50 = (long *)((long)local_50 + 1);
        param_2 = local_58;
        if (local_50 < plVar8) {
          if ((int *)local_58[2] < (int *)local_58[3]) {
            iVar5 = *(int *)local_58[2];
          }
          else {
            pcVar2 = *(code **)(*local_58 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f58b;
            iVar5 = (*pcVar2)();
          }
          plVar8 = (long *)0x0;
          if (iVar5 != -1) {
            plVar8 = local_58;
          }
          bVar11 = local_70 != (long *)0x0 & (byte)local_68;
          bVar12 = (byte)local_68;
          plVar9 = local_70;
          local_58 = plVar8;
          if (bVar11 != 0) {
            if ((int *)local_70[2] < (int *)local_70[3]) {
              iVar6 = *(int *)local_70[2];
            }
            else {
              local_60 = (long *)CONCAT71(local_60._1_7_,bVar11);
              pcVar2 = *(code **)(*local_70 + 0x48);
              *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f578;
              iVar6 = (*pcVar2)();
              bVar11 = (byte)local_60;
            }
            bVar12 = bVar11;
            plVar9 = (long *)0x0;
            if (iVar6 != -1) {
              bVar12 = 0;
              plVar9 = local_70;
            }
          }
          local_70 = plVar9;
          param_2 = local_58;
          if ((iVar5 == -1) != (bool)bVar12) {
            uVar13 = 0;
            plVar8 = (long *)((long)local_50 * 4);
            do {
              iVar6 = -1;
              iVar5 = *(int *)(*(long *)(param_7 + (long)plVar10 * 8) + (long)plVar8);
              if (param_2 != (long *)0x0) {
                if ((int *)param_2[2] < (int *)param_2[3]) {
                  iVar6 = *(int *)param_2[2];
                }
                else {
                  pcVar2 = *(code **)(*param_2 + 0x48);
                  *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f4e9;
                  local_60 = plVar8;
                  local_58 = param_2;
                  iVar6 = (*pcVar2)(param_2);
                  param_2 = local_58;
                  plVar8 = local_60;
                }
                if (iVar6 == -1) {
                  param_2 = (long *)0x0;
                }
              }
              if (iVar5 == iVar6) {
                uVar13 = uVar13 + 1;
                if (uVar19 <= uVar13) goto LAB_0065f373;
              }
              else {
                uVar19 = uVar19 - 1;
                *(int *)((long)plVar7 + uVar13 * 4) = *(int *)((long)plVar7 + uVar19 * 4);
                if (uVar19 <= uVar13) goto LAB_0065f373;
              }
              plVar10 = (long *)(long)*(int *)((long)plVar7 + uVar13 * 4);
            } while( true );
          }
        }
        goto LAB_0065f494;
      }
      goto LAB_0065f38e;
    }
  }
LAB_0065f16b:
  *local_80 = *local_80 | 4;
LAB_0065f172:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar14 + lVar3 + -8) = &UNK_0065f6f8;
  FUN_00771f60();
LAB_0065f373:
  local_58 = param_2;
  if (uVar19 < 2) goto code_r0x0065f381;
  goto LAB_0065f248;
code_r0x0065f381:
  local_58._4_4_ = (undefined4)((ulong)param_2 >> 0x20);
  local_58 = (long *)CONCAT44(local_58._4_4_,0xffffffff);
LAB_0065f38e:
  if (uVar19 == 1) {
    if ((ulong)param_2[2] < (ulong)param_2[3]) {
      param_2[2] = param_2[2] + 4;
    }
    else {
      pcVar2 = *(code **)(*param_2 + 0x50);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f6ee;
      (*pcVar2)(param_2);
    }
    lVar17 = *(long *)(param_7 + (long)(int)*plVar7 * 8);
    local_60 = (long *)CONCAT44(local_60._4_4_,(int)*plVar7);
    plVar8 = (long *)((long)local_50 + 1);
    *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f3cb;
    plVar7 = (long *)thunk_FUN_007564d0(lVar17);
    if (plVar8 < plVar7) {
      bVar12 = (byte)local_68;
      plVar10 = local_70;
      do {
        if ((int *)param_2[2] < (int *)param_2[3]) {
          iVar5 = *(int *)param_2[2];
        }
        else {
          pcVar2 = *(code **)(*param_2 + 0x48);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f6d7;
          local_58 = plVar10;
          local_50 = plVar7;
          iVar5 = (*pcVar2)(param_2);
          plVar10 = local_58;
          plVar7 = local_50;
        }
        bVar11 = iVar5 == -1;
        if ((bool)bVar11) {
          param_2 = (long *)0x0;
        }
        bVar20 = plVar10 != (long *)0x0 & bVar12;
        bVar21 = bVar12;
        if (bVar20 != 0) {
          if ((int *)plVar10[2] < (int *)plVar10[3]) {
            iVar5 = *(int *)plVar10[2];
          }
          else {
            local_58 = (long *)CONCAT71(local_58._1_7_,bVar11);
            pcVar2 = *(code **)(*plVar10 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f696;
            local_68 = plVar7;
            local_50 = plVar10;
            iVar5 = (*pcVar2)(plVar10);
            plVar10 = local_50;
            plVar7 = local_68;
            bVar11 = (byte)local_58;
          }
          if (iVar5 == -1) {
            plVar10 = (long *)0x0;
            bVar21 = bVar20;
          }
          else {
            bVar21 = 0;
          }
        }
        if (bVar11 == bVar21) goto LAB_0065f494;
        iVar5 = *(int *)(lVar17 + (long)plVar8 * 4);
        iVar6 = -1;
        if (param_2 != (long *)0x0) {
          if ((int *)param_2[2] < (int *)param_2[3]) {
            iVar6 = *(int *)param_2[2];
          }
          else {
            pcVar2 = *(code **)(*param_2 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f6b6;
            local_58 = plVar10;
            local_50 = plVar7;
            iVar6 = (*pcVar2)(param_2);
            plVar10 = local_58;
            plVar7 = local_50;
          }
          if (iVar6 == -1) {
            param_2 = (long *)0x0;
          }
        }
        if (iVar5 != iVar6) goto LAB_0065f494;
        if ((ulong)param_2[2] < (ulong)param_2[3]) {
          param_2[2] = param_2[2] + 4;
        }
        else {
          pcVar2 = *(code **)(*param_2 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x65f653;
          local_58 = plVar10;
          local_50 = plVar7;
          (*pcVar2)(param_2);
          plVar10 = local_58;
          plVar7 = local_50;
        }
        plVar8 = (long *)((long)plVar8 + 1);
      } while (plVar8 < plVar7);
    }
    if (plVar7 == plVar8) {
      local_58 = (long *)CONCAT44(local_58._4_4_,0xffffffff);
      *local_88 = local_60._0_4_;
      goto LAB_0065f172;
    }
LAB_0065f494:
    local_58 = (long *)CONCAT44(local_58._4_4_,0xffffffff);
  }
  goto LAB_0065f16b;
}

