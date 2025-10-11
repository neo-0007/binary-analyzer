
bool d_demangle_callback_constprop_0(char *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 *puVar15;
  undefined1 *puVar17;
  undefined1 *puVar19;
  char **ppcVar20;
  char *pcVar21;
  long in_FS_OFFSET;
  bool bVar22;
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
  undefined8 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar18;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_248 = param_3;
  local_240 = param_2;
  if ((*param_1 != '_') || (iVar6 = 1, param_1[1] != 'Z')) {
    iVar5 = strncmp(param_1,"_GLOBAL_",8);
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
    sVar7 = strlen(param_1);
    local_210 = param_1 + sVar7;
    local_1dc = (int)sVar7;
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
      bVar22 = false;
LAB_006c0008:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return bVar22;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    puVar2 = &local_248;
    puVar13 = &local_248;
    puVar14 = &local_248;
    while (puVar14 !=
           (undefined8 *)((long)&local_248 - ((long)(int)local_1ec << 5 & 0xfffffffffffff000U))) {
      puVar13 = (undefined8 *)((long)puVar2 + -0x1000);
      *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
      puVar14 = (undefined8 *)((long)puVar2 + -0x1000);
      puVar2 = (undefined8 *)((long)puVar2 + -0x1000);
    }
    uVar10 = (ulong)((uint)((long)(int)local_1ec << 5) & 0xfff);
    lVar8 = -uVar10;
    puVar9 = (undefined1 *)((long)puVar13 + lVar8);
    local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
    puVar15 = (undefined1 *)((long)puVar13 + lVar8);
    puVar16 = (undefined1 *)((long)puVar13 + lVar8);
    if (uVar10 != 0) {
      *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
    }
    uVar10 = (long)local_1dc * 8 + 0xf;
    puVar18 = (undefined1 *)((long)puVar13 + lVar8);
    while (puVar16 != (undefined1 *)((long)puVar13 + (lVar8 - (uVar10 & 0xfffffffffffff000)))) {
      puVar15 = puVar18 + -0x1000;
      *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
      puVar16 = puVar18 + -0x1000;
      puVar18 = puVar18 + -0x1000;
    }
    uVar10 = (ulong)((uint)uVar10 & 0xff0);
    lVar1 = -uVar10;
    local_1e8 = puVar15 + lVar1;
    puVar17 = puVar15 + lVar1;
    puVar18 = puVar15 + lVar1;
    if (uVar10 != 0) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    if (iVar6 == 1) {
      puVar9 = (undefined1 *)((long)puVar13 + lVar8);
      puVar4 = puVar15 + lVar1;
      if ((*param_1 == '_') &&
         (local_200 = local_238, puVar9 = (undefined1 *)((long)puVar13 + lVar8),
         puVar4 = puVar15 + lVar1, param_1[1] == 'Z')) {
        local_200 = param_1 + 2;
        local_220 = &local_218;
        if ((param_1[2] == 'G') || (param_1[2] == 'T')) {
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bffb3;
          lVar8 = d_special_name();
        }
        else {
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfe0e;
          local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
          local_1e8 = puVar15 + lVar1;
          lVar8 = d_encoding_part_0(local_220,1);
        }
        cVar11 = *local_200;
        if ((local_208 & 1) != 0) {
          while (cVar11 == '.') {
            cVar11 = local_200[1];
            if (((byte)(cVar11 + 0x9fU) < 0x1a) || (cVar11 == '_')) {
              cVar11 = local_200[2];
              local_200 = local_200 + 2;
              if (0x19 < (byte)(cVar11 + 0x9fU)) goto LAB_006bffe8;
              do {
                do {
                  cVar11 = local_200[1];
                  local_200 = local_200 + 1;
                } while ((byte)(cVar11 + 0x9fU) < 0x1a);
LAB_006bffe8:
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
                if (9 < (byte)(local_200[1] - 0x30U)) goto LAB_006bfe9d;
                cVar11 = local_200[2];
                local_200 = local_200 + 2;
                if (9 < (byte)(cVar11 - 0x30U)) break;
                do {
                  pcVar21 = local_200 + 1;
                  local_200 = local_200 + 1;
                } while ((byte)(*pcVar21 - 0x30U) < 10);
                if (*pcVar21 != '.') goto LAB_006bfe9d;
              }
            }
LAB_006bfe9d:
            *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfead;
            d_make_name();
            *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfebd;
            lVar8 = d_make_comp();
            cVar11 = *local_200;
          }
        }
        goto LAB_006bfd74;
      }
    }
    else {
      if (iVar6 - 2U < 2) {
        pcVar21 = param_1 + 0xb;
        if ((param_1[0xb] == '_') && (param_1[0xc] == 'Z')) {
          local_200 = param_1 + 0xd;
          local_220 = &local_218;
          if ((param_1[0xd] == 'G') || (param_1[0xd] == 'T')) {
            *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bff91;
            local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
            local_1e8 = puVar15 + lVar1;
            puVar9 = (undefined1 *)d_special_name();
            ppcVar20 = local_220;
            pcVar21 = local_200;
          }
          else {
            *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bff13;
            local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
            local_1e8 = puVar15 + lVar1;
            puVar9 = (undefined1 *)d_encoding_part_0(local_220,0);
            ppcVar20 = local_220;
            pcVar21 = local_200;
          }
        }
        else {
          local_220 = (char **)CONCAT44(local_220._4_4_,local_1ec);
          *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfcf6;
          local_228 = (ulong)((long)puVar13 + lVar8 + 7) >> 3;
          local_200 = pcVar21;
          local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
          local_1e8 = puVar15 + lVar1;
          sVar7 = strlen(pcVar21);
          if (0 < (int)local_220) {
            local_1f0 = 1;
            *(undefined8 *)(local_228 * 8 + 4) = 0;
            if (0 < (int)sVar7) {
              *(char **)(local_228 * 8 + 0x10) = pcVar21;
              *(undefined4 *)(local_228 * 8) = 0;
              *(int *)(local_228 * 8 + 0x18) = (int)sVar7;
              ppcVar20 = &local_218;
              goto LAB_006bfd4a;
            }
          }
          puVar9 = (undefined1 *)0x0;
          ppcVar20 = &local_218;
        }
LAB_006bfd4a:
        *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfd5a;
        lVar8 = d_make_comp(ppcVar20,local_22c,puVar9,0);
        *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfd65;
        sVar7 = strlen(pcVar21);
        local_200 = pcVar21 + sVar7;
        cVar11 = *local_200;
      }
      else {
        *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6bfdac;
        local_1f8 = (undefined1 *)((long)puVar13 + lVar8);
        local_1e8 = puVar15 + lVar1;
        lVar8 = d_type(&local_218);
        cVar11 = *local_200;
      }
LAB_006bfd74:
      puVar9 = local_1f8;
      puVar4 = local_1e8;
      if ((lVar8 != 0) && (cVar11 == '\0')) {
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
        *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6c00b7;
        d_count_templates_scopes(local_1b8,lVar8);
        if (local_88._4_4_ < 0x800) {
          local_88 = local_88 & 0xffffffff;
        }
        lVar12 = (long)local_60._4_4_;
        local_48 = 0;
        iVar6 = local_50._4_4_ * local_60._4_4_;
        if (local_60._4_4_ < 1) {
          lVar12 = 1;
        }
        local_50 = CONCAT44(iVar6,(undefined4)local_50);
        puVar9 = puVar15 + lVar1;
        while (puVar17 != puVar15 + (lVar1 - (lVar12 << 4 & 0xfffffffffffff000U))) {
          puVar18 = puVar9 + -0x1000;
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
          puVar17 = puVar9 + -0x1000;
          puVar9 = puVar9 + -0x1000;
        }
        uVar10 = (ulong)((uint)(lVar12 << 4) & 0xfff);
        lVar12 = -uVar10;
        puVar9 = puVar18 + lVar12;
        puVar19 = puVar18 + lVar12;
        local_68 = puVar18 + lVar12;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
        }
        if (iVar6 < 1) {
          iVar6 = 1;
        }
        puVar4 = puVar18 + lVar12;
        while (puVar19 != puVar18 + (lVar12 - ((long)iVar6 << 4 & 0xfffffffffffff000U))) {
          puVar9 = puVar4 + -0x1000;
          *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
          puVar19 = puVar4 + -0x1000;
          puVar4 = puVar4 + -0x1000;
        }
        uVar10 = (ulong)((uint)((long)iVar6 << 4) & 0xfff);
        lVar12 = -uVar10;
        local_58 = puVar9 + lVar12;
        if (uVar10 != 0) {
          *(undefined8 *)(puVar9 + -8) = *(undefined8 *)(puVar9 + -8);
        }
        *(undefined8 *)(puVar9 + lVar12 + -8) = 0x6c018f;
        d_print_comp(local_1b8,0x11,lVar8);
        uVar3 = local_a0;
        lVar8 = local_b8;
        local_1b8[local_b8] = 0;
        *(undefined8 *)(puVar15 + lVar1 + -8) = 0x6c01b1;
        (*local_a8)(local_1b8,lVar8,uVar3);
        bVar22 = (int)local_88 == 0;
        goto LAB_006c0008;
      }
    }
    local_1e8 = puVar4;
    local_1f8 = puVar9;
    if (local_1c4 != -1) {
      bVar22 = false;
      goto LAB_006c0008;
    }
    local_1c4 = 0;
  } while( true );
}

