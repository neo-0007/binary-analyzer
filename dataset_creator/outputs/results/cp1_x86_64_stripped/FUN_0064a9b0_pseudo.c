
long * FUN_0064a9b0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4,long *param_5,
                   undefined4 *param_6,long param_7,long param_8,long param_9,uint *param_10)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  byte bVar11;
  byte bVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar16;
  bool bVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  byte bVar21;
  byte bVar22;
  long in_FS_OFFSET;
  char cVar23;
  char cVar24;
  bool bVar25;
  undefined1 auStack_98 [15];
  char local_89;
  undefined4 *local_88;
  uint *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar14 = auStack_98;
  local_80 = param_10;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (long *)CONCAT44(local_68._4_4_,(int)param_3);
  local_88 = param_6;
  local_78 = param_3;
  local_70 = param_4;
  local_60 = param_2;
  local_58 = param_2;
  local_50 = param_5;
  plVar7 = (long *)FUN_0067c1e0(param_9 + 0xd0);
  plVar9 = local_60;
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
  cVar23 = (int)local_78 == -1;
  bVar17 = local_60 != (long *)0x0 && (bool)cVar23;
  bVar25 = (bool)cVar23;
  if (bVar17) {
    if ((ulong)local_60[2] < (ulong)local_60[3]) {
      bVar25 = false;
    }
    else {
      local_58 = local_60;
      pcVar2 = *(code **)(*local_60 + 0x48);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64aeed;
      local_89 = cVar23;
      local_60 = plVar7;
      iVar6 = (*pcVar2)(plVar9);
      plVar9 = (long *)0x0;
      if (iVar6 != -1) {
        plVar9 = local_58;
      }
      plVar7 = local_60;
      local_58 = plVar9;
      cVar23 = local_89;
      bVar25 = iVar6 == -1 && bVar17;
    }
  }
  cVar24 = (int)local_50 == -1;
  local_60 = (long *)CONCAT71(local_60._1_7_,cVar24);
  bVar17 = param_4 != (long *)0x0 && (bool)cVar24;
  if (bVar17) {
    if ((ulong)param_4[2] < (ulong)param_4[3]) {
      cVar24 = '\0';
    }
    else {
      local_70 = (long *)CONCAT71(local_70._1_7_,bVar17);
      pcVar2 = *(code **)(*param_4 + 0x48);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64aea4;
      local_89 = cVar23;
      local_50 = plVar7;
      iVar6 = (*pcVar2)(param_4);
      cVar24 = (char)local_70;
      if (iVar6 != -1) {
        cVar24 = '\0';
      }
      local_70 = (long *)0x0;
      plVar7 = local_50;
      cVar23 = local_89;
      if (iVar6 != -1) {
        local_70 = param_4;
      }
    }
  }
  plVar9 = local_58;
  if (bVar25 != (bool)cVar24) {
    if ((local_58 == (long *)0x0) || (cVar23 == '\0')) {
      local_58 = plVar9;
      cVar23 = (char)local_78;
    }
    else if ((char *)local_58[2] < (char *)local_58[3]) {
      cVar23 = *(char *)local_58[2];
      local_58 = plVar9;
    }
    else {
      pcVar2 = *(code **)(*local_58 + 0x48);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64af26;
      local_50 = plVar7;
      iVar6 = (*pcVar2)(local_58);
      bVar25 = iVar6 == -1;
      if (bVar25) {
        iVar6 = -1;
      }
      cVar23 = (char)iVar6;
      plVar7 = local_50;
      local_58 = (long *)0x0;
      if (!bVar25) {
        local_58 = plVar9;
      }
    }
    if (param_8 != 0) {
      lVar18 = 0;
      uVar19 = 0;
      local_50 = (long *)((ulong)(puVar14 + lVar3 + 0xf) & 0xfffffffffffffff0);
      do {
        while (**(char **)(param_7 + lVar18 * 8) == cVar23) {
LAB_0064ab44:
          *(int *)((long)local_50 + uVar19 * 4) = (int)lVar18;
          uVar19 = uVar19 + 1;
          lVar18 = lVar18 + 1;
          if (param_8 == lVar18) goto LAB_0064ab5a;
        }
        pcVar2 = *(code **)(*plVar7 + 0x10);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64ab2a;
        cVar24 = (*pcVar2)(plVar7);
        if (cVar24 == cVar23) goto LAB_0064ab44;
        lVar18 = lVar18 + 1;
      } while (param_8 != lVar18);
LAB_0064ab5a:
      plVar9 = local_50;
      local_50 = (long *)0x0;
      if (1 < uVar19) {
LAB_0064ab80:
        lVar18 = *plVar9;
        uVar1 = *(undefined8 *)(param_7 + (long)(int)lVar18 * 8);
        *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64ab8c;
        plVar7 = (long *)thunk_FUN_007129d0(uVar1);
        uVar13 = 1;
        local_68 = (long *)(long)(int)lVar18;
        do {
          uVar1 = *(undefined8 *)(param_7 + (long)*(int *)((long)plVar9 + uVar13 * 4) * 8);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64abad;
          plVar8 = (long *)thunk_FUN_007129d0(uVar1);
          plVar20 = local_68;
          if (plVar8 < plVar7) {
            plVar7 = plVar8;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar19);
        if ((ulong)local_58[2] < (ulong)local_58[3]) {
          local_58[2] = local_58[2] + 1;
        }
        else {
          pcVar2 = *(code **)(*local_58 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64ade2;
          (*pcVar2)();
        }
        local_50 = (long *)((long)local_50 + 1);
        if (local_50 < plVar7) {
          bVar25 = false;
          plVar7 = local_58;
          if ((ulong)local_58[3] <= (ulong)local_58[2]) {
            pcVar2 = *(code **)(*local_58 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64ae58;
            iVar6 = (*pcVar2)(local_58);
            bVar25 = iVar6 == -1;
            plVar7 = (long *)0x0;
            if (!bVar25) {
              plVar7 = local_58;
            }
          }
          local_58 = plVar7;
          bVar11 = local_70 != (long *)0x0 & (byte)local_60;
          bVar12 = (byte)local_60;
          plVar7 = local_70;
          if (bVar11 != 0) {
            if ((ulong)local_70[2] < (ulong)local_70[3]) {
              if (bVar25 != false) goto LAB_0064ac23;
              goto LAB_0064ad90;
            }
            local_68 = (long *)CONCAT71(local_68._1_7_,bVar11);
            pcVar2 = *(code **)(*local_70 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64ae2a;
            iVar6 = (*pcVar2)(local_70);
            bVar12 = (byte)local_68;
            if (iVar6 != -1) {
              bVar12 = 0;
            }
            plVar7 = (long *)0x0;
            if (iVar6 != -1) {
              plVar7 = local_70;
            }
          }
          local_70 = plVar7;
          if (bVar25 != (bool)bVar12) {
LAB_0064ac23:
            uVar13 = 0;
            plVar7 = local_50;
            do {
              cVar23 = *(char *)(*(long *)(param_7 + (long)plVar20 * 8) + (long)plVar7);
              cVar24 = -1;
              if (local_58 != (long *)0x0) {
                if ((char *)local_58[2] < (char *)local_58[3]) {
                  cVar24 = *(char *)local_58[2];
                }
                else {
                  pcVar2 = *(code **)(*local_58 + 0x48);
                  *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64adb1;
                  local_68 = plVar7;
                  iVar6 = (*pcVar2)(local_58);
                  cVar24 = (char)iVar6;
                  plVar7 = local_68;
                  if (iVar6 == -1) {
                    cVar24 = -1;
                    local_58 = (long *)0x0;
                  }
                }
              }
              if (cVar23 == cVar24) {
                uVar13 = uVar13 + 1;
                if (uVar19 <= uVar13) goto LAB_0064ac77;
              }
              else {
                uVar19 = uVar19 - 1;
                *(int *)((long)plVar9 + uVar13 * 4) = *(int *)((long)plVar9 + uVar19 * 4);
                if (uVar19 <= uVar13) goto LAB_0064ac77;
              }
              plVar20 = (long *)(long)*(int *)((long)plVar9 + uVar13 * 4);
            } while( true );
          }
        }
        goto LAB_0064ad90;
      }
      goto LAB_0064ac8f;
    }
  }
LAB_0064aaac:
  *local_80 = *local_80 | 4;
LAB_0064aab3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar14 + lVar3 + -8) = &UNK_0064b07f;
    FUN_00771f60();
  }
  return local_58;
LAB_0064ac77:
  if (uVar19 < 2) goto code_r0x0064ac85;
  goto LAB_0064ab80;
code_r0x0064ac85:
  local_68 = (long *)CONCAT44(local_68._4_4_,0xffffffff);
LAB_0064ac8f:
  if (uVar19 == 1) {
    if ((ulong)local_58[2] < (ulong)local_58[3]) {
      local_58[2] = local_58[2] + 1;
    }
    else {
      pcVar2 = *(code **)(*local_58 + 0x50);
      *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64b06a;
      (*pcVar2)();
    }
    plVar7 = *(long **)(param_7 + (long)(int)*plVar9 * 8);
    local_68 = (long *)CONCAT44(local_68._4_4_,(int)*plVar9);
    plVar8 = (long *)((long)local_50 + 1);
    *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64accd;
    plVar9 = (long *)thunk_FUN_007129d0(plVar7);
    plVar20 = local_58;
    if (plVar8 < plVar9) {
      bVar12 = (byte)local_60;
      plVar16 = local_70;
      do {
        bVar11 = false;
        if ((ulong)plVar20[3] <= (ulong)plVar20[2]) {
          pcVar2 = *(code **)(*plVar20 + 0x48);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64b040;
          local_60 = plVar9;
          local_58 = plVar16;
          local_50 = plVar7;
          iVar6 = (*pcVar2)(plVar20);
          bVar11 = iVar6 == -1;
          plVar9 = local_60;
          plVar16 = local_58;
          plVar7 = local_50;
          if ((bool)bVar11) {
            plVar20 = (long *)0x0;
          }
        }
        bVar22 = plVar16 != (long *)0x0 & bVar12;
        bVar21 = bVar12;
        if (bVar22 != 0) {
          if ((ulong)plVar16[2] < (ulong)plVar16[3]) {
            bVar21 = 0;
          }
          else {
            local_58 = (long *)CONCAT71(local_58._1_7_,bVar11);
            pcVar2 = *(code **)(*plVar16 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64b006;
            local_70 = plVar9;
            local_60 = plVar7;
            local_50 = plVar16;
            iVar6 = (*pcVar2)(plVar16);
            bVar11 = (byte)local_58;
            plVar9 = local_70;
            plVar7 = local_60;
            if (iVar6 == -1) {
              plVar16 = (long *)0x0;
              bVar21 = bVar22;
            }
            else {
              plVar16 = local_50;
              bVar21 = 0;
            }
          }
        }
        if (bVar11 == bVar21) {
LAB_0064af62:
          local_68 = (long *)CONCAT44(local_68._4_4_,0xffffffff);
          local_58 = plVar20;
          goto LAB_0064aaac;
        }
        cVar23 = *(char *)((long)plVar7 + (long)plVar8);
        cVar24 = -1;
        if (plVar20 == (long *)0x0) {
LAB_0064ad10:
          if (cVar23 != cVar24) goto LAB_0064af62;
          pcVar10 = (char *)plVar20[2];
          if (pcVar10 < (char *)plVar20[3]) goto LAB_0064ad27;
          pcVar2 = *(code **)(*plVar20 + 0x50);
          *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64af87;
          local_60 = plVar9;
          local_58 = plVar16;
          local_50 = plVar7;
          (*pcVar2)(plVar20);
          plVar9 = local_60;
          plVar16 = local_58;
          plVar7 = local_50;
        }
        else {
          pcVar10 = (char *)plVar20[2];
          if ((char *)plVar20[3] <= pcVar10) {
            local_50 = (long *)CONCAT71(local_50._1_7_,cVar23);
            pcVar2 = *(code **)(*plVar20 + 0x48);
            *(undefined8 *)(puVar14 + lVar3 + -8) = 0x64afc9;
            local_70 = plVar9;
            local_60 = plVar16;
            local_58 = plVar7;
            iVar6 = (*pcVar2)(plVar20);
            cVar24 = -1;
            plVar9 = local_70;
            plVar16 = local_60;
            plVar7 = local_58;
            cVar23 = (char)local_50;
            if (iVar6 == -1) {
              plVar20 = (long *)0x0;
            }
            else {
              cVar24 = (char)iVar6;
            }
            goto LAB_0064ad10;
          }
          if (cVar23 != *pcVar10) goto LAB_0064af62;
LAB_0064ad27:
          plVar20[2] = (long)(pcVar10 + 1);
        }
        plVar8 = (long *)((long)plVar8 + 1);
      } while (plVar8 != plVar9);
    }
    else if (plVar8 != plVar9) {
LAB_0064ad90:
      local_68 = (long *)CONCAT44(local_68._4_4_,0xffffffff);
      goto LAB_0064aaac;
    }
    local_58 = plVar20;
    uVar5 = local_68._0_4_;
    local_68 = (long *)CONCAT44(local_68._4_4_,0xffffffff);
    *local_88 = uVar5;
    goto LAB_0064aab3;
  }
  goto LAB_0064aaac;
}

