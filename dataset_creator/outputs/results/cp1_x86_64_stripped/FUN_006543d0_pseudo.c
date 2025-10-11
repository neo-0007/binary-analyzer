
undefined1  [16]
FUN_006543d0(undefined8 param_1,long *param_2,ulong param_3,long *param_4,int param_5,long param_6,
            uint *param_7,ulong *param_8)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  int *piVar14;
  ulong uVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  bool bVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  bool bVar24;
  int iVar25;
  long lVar26;
  long in_FS_OFFSET;
  bool bVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  long *local_d8;
  uint local_c8;
  bool local_79;
  undefined1 *local_68;
  ulong local_60;
  undefined1 local_58;
  undefined7 uStack_57;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = (uint)param_3;
  lVar10 = FUN_00625ba0(&DAT_009453c8);
  plVar2 = (long *)(*(long *)(*(long *)(param_6 + 0xd0) + 0x18) + lVar10 * 8);
  lVar26 = *plVar2;
  if (lVar26 == 0) {
                    /* try { // try from 00654e45 to 00654e49 has its CatchHandler @ 00655210 */
    puVar16 = (undefined8 *)FUN_006c31f0(0x150);
    *(undefined4 *)(puVar16 + 1) = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    *puVar16 = &PTR_FUN_00934008;
    *(undefined1 *)(puVar16 + 4) = 0;
    puVar16[5] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    *(undefined1 *)(puVar16 + 0x29) = 0;
                    /* try { // try from 00654eb2 to 00654eb6 has its CatchHandler @ 00655207 */
    FUN_006a52e0(puVar16,param_6 + 0xd0);
    FUN_00626180(*(undefined8 *)(param_6 + 0xd0),puVar16,lVar10);
    lVar26 = *plVar2;
  }
  uVar18 = *(uint *)(param_6 + 0x18);
  uVar17 = uVar18 & 0x4a;
  uVar22 = 8;
  if (uVar17 != 0x40) {
    uVar22 = 0x10;
    if (uVar17 != 8) {
      uVar22 = 10;
    }
  }
  bVar27 = local_c8 == 0xffffffff;
  bVar24 = param_2 != (long *)0x0 && bVar27;
  bVar6 = bVar27;
  if (bVar24) {
    if ((int *)param_2[2] < (int *)param_2[3]) {
      iVar25 = *(int *)param_2[2];
    }
    else {
      iVar25 = (**(code **)(*param_2 + 0x48))(param_2);
    }
    plVar2 = (long *)0x0;
    if (iVar25 != -1) {
      plVar2 = param_2;
    }
    param_2 = plVar2;
    bVar6 = iVar25 == -1 && bVar24;
  }
  uVar18 = uVar18 & 0x4a;
  bVar28 = param_5 == -1;
  bVar24 = param_4 != (long *)0x0 && bVar28;
  local_d8 = param_4;
  bVar20 = bVar28;
  if (bVar24) {
    if ((int *)param_4[2] < (int *)param_4[3]) {
      iVar25 = *(int *)param_4[2];
    }
    else {
      iVar25 = (**(code **)(*param_4 + 0x48))(param_4);
    }
    local_d8 = (long *)0x0;
    if (iVar25 != -1) {
      local_d8 = param_4;
    }
    bVar20 = iVar25 == -1 && bVar24;
  }
  if (bVar6 == bVar20) {
    local_79 = false;
    cVar7 = *(char *)(lVar26 + 0x20);
    uVar17 = 0;
    iVar25 = 0;
    bVar6 = true;
    bVar24 = false;
  }
  else {
    uVar17 = local_c8;
    if ((param_2 != (long *)0x0) && (bVar27)) {
      if ((uint *)param_2[2] < (uint *)param_2[3]) {
        uVar17 = *(uint *)param_2[2];
      }
      else {
        uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (uVar17 == 0xffffffff) {
        param_2 = (long *)0x0;
      }
    }
    local_79 = *(uint *)(lVar26 + 0xe0) == uVar17;
    cVar7 = *(char *)(lVar26 + 0x20);
    if ((((local_79) || (*(uint *)(lVar26 + 0xe4) == uVar17)) &&
        ((cVar7 == '\0' || (*(uint *)(lVar26 + 0x4c) != uVar17)))) &&
       (*(uint *)(lVar26 + 0x48) != uVar17)) {
      piVar13 = (int *)param_2[3];
      if ((int *)param_2[2] < piVar13) {
        piVar14 = (int *)param_2[2] + 1;
        param_2[2] = (long)piVar14;
      }
      else {
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar14 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
      }
      if (piVar14 < piVar13) {
        iVar25 = *piVar14;
      }
      else {
        iVar25 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      if (iVar25 == -1) {
        param_2 = (long *)0x0;
      }
      bVar24 = local_d8 != (long *)0x0 && bVar28;
      bVar6 = bVar28;
      if (bVar24) {
        if ((int *)local_d8[2] < (int *)local_d8[3]) {
          iVar9 = *(int *)local_d8[2];
        }
        else {
          iVar9 = (**(code **)(*local_d8 + 0x48))();
        }
        plVar2 = (long *)0x0;
        if (iVar9 != -1) {
          plVar2 = local_d8;
        }
        local_d8 = plVar2;
        bVar6 = iVar9 == -1 && bVar24;
      }
      if ((iVar25 == -1) == bVar6) {
        bVar6 = true;
        cVar7 = *(char *)(lVar26 + 0x20);
        iVar25 = 0;
        bVar24 = false;
        local_c8 = 0xffffffff;
        goto joined_r0x0065468e;
      }
      uVar17 = 0xffffffff;
      if (param_2 != (long *)0x0) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar17 = *(uint *)param_2[2];
        }
        else {
          uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar17 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      local_c8 = 0xffffffff;
      cVar7 = *(char *)(lVar26 + 0x20);
    }
    iVar25 = 0;
    bVar24 = false;
    do {
      if (((cVar7 != '\0') && (*(uint *)(lVar26 + 0x4c) == uVar17)) ||
         (*(uint *)(lVar26 + 0x48) == uVar17)) break;
      if (*(uint *)(lVar26 + 0xf0) == uVar17) {
        bVar6 = (bool)(bVar24 ^ 1U | uVar22 == 10);
        if (!bVar6) goto LAB_006545ee;
        bVar24 = uVar18 == 0 || uVar22 == 8;
        if (uVar18 != 0 && uVar22 != 8) {
          iVar25 = iVar25 + 1;
          goto LAB_00654623;
        }
        piVar14 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
        iVar25 = 0;
        uVar22 = 8;
        if (piVar13 <= piVar14) goto LAB_006548c8;
LAB_00654634:
        piVar14 = piVar14 + 1;
        param_2[2] = (long)piVar14;
        if (piVar14 < piVar13) goto LAB_00654645;
LAB_006548f0:
        iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
      }
      else {
        if (!bVar24) break;
LAB_006545ee:
        if ((*(uint *)(lVar26 + 0xe8) != uVar17) && (*(uint *)(lVar26 + 0xec) != uVar17)) {
          bVar24 = true;
          bVar6 = false;
          goto joined_r0x0065468e;
        }
        bVar6 = uVar22 == 0x10 || uVar18 == 0;
        if (uVar22 != 0x10 && uVar18 != 0) {
          bVar24 = true;
          uVar18 = uVar22;
          goto LAB_006546a1;
        }
        iVar25 = 0;
        bVar6 = false;
        uVar22 = 0x10;
LAB_00654623:
        piVar14 = (int *)param_2[2];
        piVar13 = (int *)param_2[3];
        bVar24 = bVar6;
        if (piVar14 < piVar13) goto LAB_00654634;
LAB_006548c8:
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar14 = (int *)param_2[2];
        if ((int *)param_2[3] <= piVar14) goto LAB_006548f0;
LAB_00654645:
        iVar9 = *piVar14;
      }
      if (iVar9 == -1) {
        param_2 = (long *)0x0;
      }
      bVar27 = local_d8 != (long *)0x0 && bVar28;
      bVar6 = bVar28;
      if (bVar27) {
        if ((int *)local_d8[2] < (int *)local_d8[3]) {
          iVar8 = *(int *)local_d8[2];
        }
        else {
          iVar8 = (**(code **)(*local_d8 + 0x48))();
        }
        plVar2 = (long *)0x0;
        if (iVar8 != -1) {
          plVar2 = local_d8;
        }
        local_d8 = plVar2;
        bVar6 = iVar8 == -1 && bVar27;
      }
      if ((iVar9 == -1) == bVar6) {
        local_c8 = 0xffffffff;
        cVar7 = *(char *)(lVar26 + 0x20);
        bVar6 = true;
        goto joined_r0x0065468e;
      }
      uVar17 = 0xffffffff;
      if (param_2 != (long *)0x0) {
        if ((uint *)param_2[2] < (uint *)param_2[3]) {
          uVar17 = *(uint *)param_2[2];
        }
        else {
          uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (uVar17 == 0xffffffff) {
          param_2 = (long *)0x0;
        }
      }
      cVar7 = *(char *)(lVar26 + 0x20);
      local_c8 = 0xffffffff;
    } while (bVar24);
    bVar6 = false;
  }
joined_r0x0065468e:
  uVar18 = uVar22;
  if (uVar22 == 0x10) {
    uVar18 = 0x16;
  }
LAB_006546a1:
  local_58 = 0;
  local_60 = 0;
  local_68 = &local_58;
  if (cVar7 != '\0') {
    FUN_0069e840(&local_68,0x20);
  }
  uVar21 = (ulong)(int)uVar22;
  uVar11 = (ulong)local_79 + 0x7fffffffffffffff;
  uVar12 = uVar11 / uVar21;
  bVar4 = *(byte *)(lVar26 + 0x148);
  if (bVar4 == 0) {
    bVar3 = 0;
    if (bVar6 == false) {
      uVar23 = 0;
LAB_0065473b:
      if (uVar18 < 0xb) {
        if (((int)uVar17 < 0x30) || ((int)(uVar18 + 0x30) <= (int)uVar17)) goto LAB_00654b70;
        uVar22 = uVar17 - 0x30;
LAB_0065475c:
        if (uVar12 < uVar23) goto LAB_00654767;
LAB_00654990:
        uVar19 = uVar21 * uVar23;
        uVar23 = (long)(int)uVar22 + uVar19;
        piVar13 = (int *)param_2[2];
        piVar14 = (int *)param_2[3];
        iVar25 = iVar25 + 1;
        bVar3 = bVar3 | uVar11 - (long)(int)uVar22 < uVar19;
        if (piVar14 <= piVar13) goto LAB_006549c6;
LAB_0065477d:
        piVar13 = piVar13 + 1;
        param_2[2] = (long)piVar13;
LAB_00654785:
        if (piVar13 < piVar14) {
          iVar9 = *piVar13;
        }
        else {
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar9 == -1) {
          param_2 = (long *)0x0;
        }
        bVar20 = local_d8 != (long *)0x0 && bVar28;
        bVar27 = bVar28;
        if (bVar20) {
          if ((int *)local_d8[2] < (int *)local_d8[3]) {
            iVar8 = *(int *)local_d8[2];
          }
          else {
            iVar8 = (**(code **)(*local_d8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar8 != -1) {
            plVar2 = local_d8;
          }
          local_d8 = plVar2;
          bVar27 = iVar8 == -1 && bVar20;
        }
        if ((iVar9 == -1) == bVar27) goto code_r0x006547c6;
        if (param_2 == (long *)0x0) {
          uVar17 = 0xffffffff;
        }
        else {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar17 = *(uint *)param_2[2];
          }
          else {
                    /* try { // try from 00655028 to 0065503a has its CatchHandler @ 006551fe */
            uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar17 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        local_c8 = 0xffffffff;
        goto LAB_0065473b;
      }
      uVar22 = uVar17 - 0x30;
      if (uVar22 < 10) goto LAB_0065475c;
      if (uVar17 - 0x61 < 6) {
        uVar22 = uVar17 - 0x57;
        if (uVar23 <= uVar12) goto LAB_00654990;
LAB_00654767:
        piVar13 = (int *)param_2[2];
        piVar14 = (int *)param_2[3];
        bVar3 = 1;
        if (piVar13 < piVar14) goto LAB_0065477d;
LAB_006549c6:
                    /* try { // try from 006549cc to 00654d86 has its CatchHandler @ 006551fe */
        (**(code **)(*param_2 + 0x50))(param_2);
        piVar13 = (int *)param_2[2];
        piVar14 = (int *)param_2[3];
        goto LAB_00654785;
      }
      if (uVar17 - 0x41 < 6) {
        uVar22 = uVar17 - 0x37;
        goto LAB_0065475c;
      }
LAB_00654b70:
      bVar4 = 0;
      bVar5 = bVar6;
    }
    else {
      uVar23 = 0;
      bVar4 = bVar6;
      bVar5 = 0;
    }
  }
  else {
    if (bVar6 == false) {
      bVar3 = 0;
      uVar23 = 0;
      do {
        uVar19 = local_60;
        bVar5 = *(byte *)(lVar26 + 0x20);
        if ((bVar5 == 0) || (*(uint *)(lVar26 + 0x4c) != uVar17)) {
          if ((uVar17 == *(uint *)(lVar26 + 0x48)) ||
             (lVar10 = thunk_FUN_00756540(lVar26 + 0xf0,uVar17,uVar18), lVar10 == 0))
          goto LAB_00654b70;
          iVar9 = (int)(lVar10 - (lVar26 + 0xf0) >> 2);
          if (0xf < iVar9) {
            iVar9 = iVar9 + -6;
          }
          if (uVar23 <= uVar12) {
            uVar19 = uVar21 * uVar23;
            uVar23 = (long)iVar9 + uVar19;
            bVar3 = bVar3 | uVar11 - (long)iVar9 < uVar19;
            iVar25 = iVar25 + 1;
            goto LAB_00654c21;
          }
          piVar13 = (int *)param_2[3];
          piVar14 = (int *)param_2[2];
          bVar3 = bVar4;
          if (piVar13 <= piVar14) goto LAB_00654ca6;
LAB_00654c2e:
          piVar14 = piVar14 + 1;
          param_2[2] = (long)piVar14;
        }
        else {
          if (iVar25 == 0) {
            bVar4 = 0;
            goto LAB_006547e3;
          }
          uVar1 = local_60 + 1;
          uVar15 = 0xf;
          if (local_68 != &local_58) {
            uVar15 = CONCAT71(uStack_57,local_58);
          }
          if (uVar15 < uVar1) {
                    /* try { // try from 00654f82 to 00655006 has its CatchHandler @ 006551fe */
            FUN_0069e300(&local_68,local_60,0,0,1);
          }
          local_68[uVar19] = (char)iVar25;
          local_68[uVar1] = 0;
          iVar25 = 0;
          local_60 = uVar1;
LAB_00654c21:
          piVar14 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
          if (piVar14 < piVar13) goto LAB_00654c2e;
LAB_00654ca6:
          (**(code **)(*param_2 + 0x50))(param_2);
          piVar14 = (int *)param_2[2];
          piVar13 = (int *)param_2[3];
        }
        if (piVar14 < piVar13) {
          iVar9 = *piVar14;
        }
        else {
                    /* try { // try from 006550d0 to 006550e2 has its CatchHandler @ 006551fe */
          iVar9 = (**(code **)(*param_2 + 0x48))(param_2);
        }
        if (iVar9 == -1) {
          param_2 = (long *)0x0;
        }
        bVar20 = local_d8 != (long *)0x0 && bVar28;
        bVar27 = bVar28;
        if (bVar20) {
          if ((int *)local_d8[2] < (int *)local_d8[3]) {
            iVar8 = *(int *)local_d8[2];
          }
          else {
            iVar8 = (**(code **)(*local_d8 + 0x48))();
          }
          plVar2 = (long *)0x0;
          if (iVar8 != -1) {
            plVar2 = local_d8;
          }
          local_d8 = plVar2;
          bVar27 = iVar8 == -1 && bVar20;
        }
        if (bVar27 == (iVar9 == -1)) goto code_r0x00654c73;
        if (param_2 == (long *)0x0) {
          uVar17 = 0xffffffff;
        }
        else {
          if ((uint *)param_2[2] < (uint *)param_2[3]) {
            uVar17 = *(uint *)param_2[2];
          }
          else {
            uVar17 = (**(code **)(*param_2 + 0x48))(param_2);
          }
          if (uVar17 == 0xffffffff) {
            param_2 = (long *)0x0;
          }
        }
        local_c8 = 0xffffffff;
      } while( true );
    }
    bVar3 = 0;
    uVar23 = 0;
    bVar5 = 0;
    bVar4 = bVar6;
  }
LAB_006547e3:
  uVar11 = local_60;
  if (local_60 == 0) {
    if ((bVar24) || (iVar25 != 0)) {
LAB_00654acd:
      if (bVar5 == 0) {
        if (bVar3 == 0) {
          uVar11 = -uVar23;
          if (local_79 == false) {
            uVar11 = uVar23;
          }
          *param_8 = uVar11;
        }
        else {
          uVar11 = 0x8000000000000000;
          if (local_79 == false) {
            uVar11 = 0x7fffffffffffffff;
          }
          *param_8 = uVar11;
          *param_7 = 4;
        }
        goto LAB_00654818;
      }
    }
  }
  else {
    uVar12 = local_60 + 1;
    uVar21 = 0xf;
    if (local_68 != &local_58) {
      uVar21 = CONCAT71(uStack_57,local_58);
    }
    if (uVar21 < uVar12) {
      FUN_0069e300(&local_68,local_60,0,0,1);
    }
    local_68[uVar11] = (char)iVar25;
    local_68[uVar11 + 1] = 0;
    local_60 = uVar12;
    cVar7 = FUN_006c7dc0(*(undefined8 *)(lVar26 + 0x10),*(undefined8 *)(lVar26 + 0x18),&local_68);
    if (cVar7 == '\0') {
      *param_7 = 4;
    }
    if (((iVar25 != 0) || (bVar24)) || (local_60 != 0)) goto LAB_00654acd;
  }
  *param_8 = 0;
  *param_7 = 4;
LAB_00654818:
  if (bVar4 != 0) {
    *param_7 = *param_7 | 2;
  }
  if (local_68 != &local_58) {
    thunk_FUN_007104f0();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar29._8_8_ = param_3 & 0xffffffff00000000 | (ulong)local_c8;
    auVar29._0_8_ = param_2;
    return auVar29;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
code_r0x00654c73:
  local_c8 = 0xffffffff;
  bVar5 = bVar6;
  goto LAB_006547e3;
code_r0x006547c6:
  local_c8 = 0xffffffff;
  bVar4 = 1;
  bVar5 = bVar6;
  goto LAB_006547e3;
}

