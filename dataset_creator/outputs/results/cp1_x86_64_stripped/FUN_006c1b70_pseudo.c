
bool FUN_006c1b70(char *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  char cVar11;
  undefined8 *puVar12;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar18;
  char **ppcVar19;
  char *pcVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 local_248;
  code *local_240;
  char *local_238;
  int local_22c;
  ulong local_228;
  char **local_220;
  char *local_218;
  char *local_210;
  uint local_208;
  char *local_200;
  undefined1 *local_1f8;
  undefined4 local_1f0;
  uint local_1ec;
  undefined1 *local_1e8;
  undefined4 local_1e0;
  int local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined1 local_1b8 [256];
  long local_b8;
  undefined1 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  undefined8 *puVar13;
  undefined1 *puVar15;
  undefined1 *puVar17;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248 = param_3;
  local_240 = param_2;
  if ((*param_1 != '_') || (iVar6 = 1, param_1[1] != 'Z')) {
    iVar5 = thunk_FUN_00712ab0(param_1,"_GLOBAL_",8);
    iVar6 = 0;
    if ((((iVar5 == 0) &&
         ((iVar6 = 0, (byte)((byte)param_1[8] - 0x24) < 0x3c &&
          (iVar6 = 0, (0xf7fffffffffffbfeU >> ((ulong)((byte)param_1[8] - 0x24) & 0x3f) & 1) == 0)))
         ) && ((cVar11 = param_1[9], cVar11 == 'D' || (cVar11 == 'I')))) &&
       (iVar6 = 0, param_1[10] == '_')) {
      iVar6 = (cVar11 != 'I') + 2;
    }
  }
  local_1c4 = 1;
  local_22c = (iVar6 != 2) + 0x45;
  local_238 = param_1 + 1;
  do {
    lVar7 = thunk_FUN_007129d0(param_1);
    local_210 = param_1 + lVar7;
    local_1dc = (int)lVar7;
    local_1ec = local_1dc * 2;
    local_208 = 0x11;
    local_1f0 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_218 = param_1;
    local_200 = param_1;
    if (0x800 < local_1ec) {
      bVar21 = false;
LAB_006c2088:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar21;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00771f60();
    }
    puVar2 = &local_248;
    puVar12 = &local_248;
    puVar13 = &local_248;
    while (puVar13 !=
           (undefined8 *)((long)&local_248 - ((long)(int)local_1ec << 5 & 0xfffffffffffff000U))) {
      puVar12 = (undefined8 *)((long)puVar2 + -0x1000);
      *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
      puVar13 = (undefined8 *)((long)puVar2 + -0x1000);
      puVar2 = (undefined8 *)((long)puVar2 + -0x1000);
    }
    uVar10 = (ulong)((uint)((long)(int)local_1ec << 5) & 0xfff);
    lVar7 = -uVar10;
    puVar9 = (undefined1 *)((long)puVar12 + lVar7);
    local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
    puVar14 = (undefined1 *)((long)puVar12 + lVar7);
    puVar15 = (undefined1 *)((long)puVar12 + lVar7);
    if (uVar10 != 0) {
      *(undefined8 *)((long)puVar12 + -8) = *(undefined8 *)((long)puVar12 + -8);
    }
    uVar10 = (long)local_1dc * 8 + 0xf;
    puVar17 = (undefined1 *)((long)puVar12 + lVar7);
    while (puVar15 != (undefined1 *)((long)puVar12 + (lVar7 - (uVar10 & 0xfffffffffffff000)))) {
      puVar14 = puVar17 + -0x1000;
      *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
      puVar15 = puVar17 + -0x1000;
      puVar17 = puVar17 + -0x1000;
    }
    uVar10 = (ulong)((uint)uVar10 & 0xff0);
    lVar1 = -uVar10;
    local_1e8 = puVar14 + lVar1;
    puVar16 = puVar14 + lVar1;
    puVar17 = puVar14 + lVar1;
    if (uVar10 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    if (iVar6 == 1) {
      puVar9 = (undefined1 *)((long)puVar12 + lVar7);
      puVar4 = puVar14 + lVar1;
      if ((*param_1 == '_') &&
         (local_200 = local_238, puVar9 = (undefined1 *)((long)puVar12 + lVar7),
         puVar4 = puVar14 + lVar1, param_1[1] == 'Z')) {
        local_200 = param_1 + 2;
        local_220 = &local_218;
        if ((param_1[2] == 'G') || (param_1[2] == 'T')) {
          *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c2033;
          lVar7 = FUN_006bbc90();
        }
        else {
          *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1e8e;
          local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
          local_1e8 = puVar14 + lVar1;
          lVar7 = FUN_006bc6e0(local_220,1);
        }
        cVar11 = *local_200;
        if ((local_208 & 1) != 0) {
          while (cVar11 == '.') {
            cVar11 = local_200[1];
            if (((byte)(cVar11 + 0x9fU) < 0x1a) || (cVar11 == '_')) {
              cVar11 = local_200[2];
              local_200 = local_200 + 2;
              if (0x19 < (byte)(cVar11 + 0x9fU)) goto LAB_006c2068;
              do {
                do {
                  cVar11 = local_200[1];
                  local_200 = local_200 + 1;
                } while ((byte)(cVar11 + 0x9fU) < 0x1a);
LAB_006c2068:
              } while (cVar11 == '_');
            }
            else {
              if (9 < (byte)(cVar11 - 0x30U)) {
                cVar11 = *local_200;
                break;
              }
              cVar11 = *local_200;
            }
            while (cVar11 == '.') {
              while( true ) {
                if (9 < (byte)(local_200[1] - 0x30U)) goto LAB_006c1f1d;
                cVar11 = local_200[2];
                local_200 = local_200 + 2;
                if (9 < (byte)(cVar11 - 0x30U)) break;
                do {
                  pcVar20 = local_200 + 1;
                  local_200 = local_200 + 1;
                } while ((byte)(*pcVar20 - 0x30U) < 10);
                if (*pcVar20 != '.') goto LAB_006c1f1d;
              }
            }
LAB_006c1f1d:
            *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1f2d;
            FUN_006b8c70();
            *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1f3d;
            lVar7 = FUN_006b8b90();
            cVar11 = *local_200;
          }
        }
        goto LAB_006c1df4;
      }
    }
    else {
      if (iVar6 - 2U < 2) {
        pcVar20 = param_1 + 0xb;
        if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
          local_200 = param_1 + 0xd;
          local_220 = &local_218;
          if ((param_1[0xd] == 'G') || (param_1[0xd] == 'T')) {
            *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c2011;
            local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
            local_1e8 = puVar14 + lVar1;
            puVar9 = (undefined1 *)FUN_006bbc90();
            ppcVar19 = local_220;
            pcVar20 = local_200;
          }
          else {
            *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1f93;
            local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
            local_1e8 = puVar14 + lVar1;
            puVar9 = (undefined1 *)FUN_006bc6e0(local_220,0);
            ppcVar19 = local_220;
            pcVar20 = local_200;
          }
        }
        else {
          local_220 = (char **)CONCAT44(local_220._4_4_,local_1ec);
          *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1d76;
          local_228 = (ulong)((long)puVar12 + lVar7 + 7) >> 3;
          local_200 = pcVar20;
          local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
          local_1e8 = puVar14 + lVar1;
          iVar5 = thunk_FUN_007129d0(pcVar20);
          if (0 < (int)local_220) {
            local_1f0 = 1;
            *(undefined8 *)(local_228 * 8 + 4) = 0;
            if (0 < iVar5) {
              *(char **)(local_228 * 8 + 0x10) = pcVar20;
              *(undefined4 *)(local_228 * 8) = 0;
              *(int *)(local_228 * 8 + 0x18) = iVar5;
              ppcVar19 = &local_218;
              goto LAB_006c1dca;
            }
          }
          puVar9 = (undefined1 *)0x0;
          ppcVar19 = &local_218;
        }
LAB_006c1dca:
        *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1dda;
        lVar7 = FUN_006b8b90(ppcVar19,local_22c,puVar9,0);
        *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1de5;
        lVar8 = thunk_FUN_007129d0(pcVar20);
        local_200 = pcVar20 + lVar8;
        cVar11 = *local_200;
      }
      else {
        *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c1e2c;
        local_1f8 = (undefined1 *)((long)puVar12 + lVar7);
        local_1e8 = puVar14 + lVar1;
        lVar7 = FUN_006b9850(&local_218);
        cVar11 = *local_200;
      }
LAB_006c1df4:
      puVar9 = local_1f8;
      puVar4 = local_1e8;
      if ((lVar7 != 0) && (cVar11 == '\0')) {
        local_b8 = 0;
        local_b0 = 0;
        local_a8 = local_240;
        local_98 = 0;
        local_a0 = local_248;
        local_90 = 0;
        local_88 = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        local_60 = 0;
        local_50 = 0;
        *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c2137;
        FUN_006b8ed0(local_1b8,lVar7);
        if (local_88._4_4_ < 0x800) {
          local_88 = local_88 & 0xffffffff;
        }
        lVar8 = (long)local_60._4_4_;
        local_48 = 0;
        iVar6 = local_50._4_4_ * local_60._4_4_;
        if (local_60._4_4_ < 1) {
          lVar8 = 1;
        }
        local_50 = CONCAT44(iVar6,(undefined4)local_50);
        puVar9 = puVar14 + lVar1;
        while (puVar16 != puVar14 + (lVar1 - (lVar8 << 4 & 0xfffffffffffff000U))) {
          puVar17 = puVar9 + -0x1000;
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
          puVar16 = puVar9 + -0x1000;
          puVar9 = puVar9 + -0x1000;
        }
        uVar10 = (ulong)((uint)(lVar8 << 4) & 0xfff);
        lVar8 = -uVar10;
        puVar9 = puVar17 + lVar8;
        puVar18 = puVar17 + lVar8;
        local_68 = puVar17 + lVar8;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar17 + -8) = *(undefined8 *)(puVar17 + -8);
        }
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        puVar4 = puVar17 + lVar8;
        while (puVar18 != puVar17 + (lVar8 - ((long)iVar6 << 4 & 0xfffffffffffff000U))) {
          puVar9 = puVar4 + -0x1000;
          *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
          puVar18 = puVar4 + -0x1000;
          puVar4 = puVar4 + -0x1000;
        }
        uVar10 = (ulong)((uint)((long)iVar6 << 4) & 0xfff);
        lVar8 = -uVar10;
        local_58 = puVar9 + lVar8;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        }
        *(undefined8 *)(puVar9 + lVar8 + -8) = 0x6c220f;
        FUN_006c06b0(local_1b8,0x11,lVar7);
        uVar3 = local_a0;
        lVar7 = local_b8;
        local_1b8[local_b8] = 0;
        *(undefined8 *)(puVar14 + lVar1 + -8) = 0x6c2231;
        (*local_a8)(local_1b8,lVar7,uVar3);
        bVar21 = (int)local_88 == 0;
        goto LAB_006c2088;
      }
    }
    local_1e8 = puVar4;
    local_1f8 = puVar9;
    if (local_1c4 != -1) {
      bVar21 = false;
      goto LAB_006c2088;
    }
    local_1c4 = 0;
  } while( true );
}

