
void FUN_005be8b0(uint *param_1,uint *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint uVar18;
  long lVar19;
  uint *puVar20;
  long in_FS_OFFSET;
  uint *local_78;
  uint *local_70;
  uint local_48;
  uint local_44;
  long local_40;
  ulong uVar11;
  
  uVar13 = param_3 - 8;
  uVar9 = param_5[1];
  uVar7 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = *param_5;
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  uVar11 = (ulong)uVar9;
  local_70 = param_1;
  if (param_6 == 0) {
    if (-1 < (long)uVar13) {
      uVar13 = uVar13 >> 3;
      puVar5 = param_2 + uVar13 * 2 + 2;
      puVar12 = param_1;
      puVar20 = param_2;
      uVar4 = uVar7;
      do {
        uVar7 = *puVar12;
        uVar18 = puVar12[1];
        param_2 = puVar20 + 2;
        puVar12 = puVar12 + 2;
        uVar10 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar7 = uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 | uVar18 << 0x18;
        local_48 = uVar10;
        local_44 = uVar7;
        FUN_005be480(&local_48,param_4);
        uVar9 = uVar9 ^ local_48;
        uVar4 = local_44 ^ uVar4;
        *(char *)((long)puVar20 + 3) = (char)uVar9;
        *(char *)((long)puVar20 + 2) = (char)(uVar9 >> 8);
        *(char *)puVar20 = (char)(uVar9 >> 0x18);
        *(char *)((long)puVar20 + 6) = (char)(uVar4 >> 8);
        *(char *)(puVar20 + 1) = (char)(uVar4 >> 0x18);
        *(char *)((long)puVar20 + 1) = (char)(uVar9 >> 0x10);
        *(char *)((long)puVar20 + 5) = (char)(uVar4 >> 0x10);
        *(char *)((long)puVar20 + 7) = (char)uVar4;
        puVar20 = param_2;
        uVar9 = uVar10;
        uVar4 = uVar7;
      } while (puVar5 != param_2);
      uVar11 = (ulong)uVar10;
      local_70 = param_1 + uVar13 * 2 + 2;
      uVar13 = param_3 + -0x10 + uVar13 * -8;
    }
    uVar9 = uVar7;
    if (uVar13 != 0xfffffffffffffff8) {
      uVar9 = *local_70;
      uVar4 = local_70[1];
      uVar18 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar9 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
      local_48 = uVar18;
      local_44 = uVar9;
      FUN_005be480(&local_48,param_4);
      uVar7 = uVar7 ^ local_44;
      puVar6 = (undefined1 *)((long)param_2 + uVar13 + 8);
      uVar4 = (uint)uVar11 ^ local_48;
      switch(uVar13) {
      default:
        uVar11 = (ulong)uVar18;
        goto LAB_005beaf8;
      case 0xfffffffffffffff9:
        goto switchD_005bebbf_caseD_fffffff9;
      case 0xfffffffffffffffa:
        puVar15 = puVar6;
        goto LAB_005bebf3;
      case 0xfffffffffffffffb:
        goto switchD_005bebbf_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar6 = puVar6 + -1;
        *puVar6 = (char)(uVar7 >> 8);
      case 0xfffffffffffffffe:
        puVar6 = puVar6 + -1;
        *puVar6 = (char)(uVar7 >> 0x10);
      case 0xfffffffffffffffd:
        puVar6[-1] = (char)(uVar7 >> 0x18);
        puVar6 = puVar6 + -1;
      }
      puVar6[-1] = (char)uVar4;
      puVar6 = puVar6 + -1;
switchD_005bebbf_caseD_fffffffb:
      puVar6[-1] = (char)(uVar4 >> 8);
      puVar15 = puVar6 + -1;
LAB_005bebf3:
      puVar6 = puVar15 + -1;
      puVar15[-1] = (char)(uVar4 >> 0x10);
switchD_005bebbf_caseD_fffffff9:
      puVar6[-1] = (char)(uVar4 >> 0x18);
      uVar11 = (ulong)uVar18;
    }
LAB_005beaf8:
    uVar17 = (undefined1)(uVar11 >> 0x18);
    uVar14 = (undefined1)(uVar11 >> 0x10);
    uVar8 = (undefined1)(uVar9 >> 8);
    uVar16 = (undefined1)(uVar11 >> 8);
    uVar2 = (undefined1)(uVar9 >> 0x18);
    uVar3 = (undefined1)(uVar9 >> 0x10);
    goto LAB_005beb20;
  }
  local_78 = param_2;
  if (-1 < (long)uVar13) {
    uVar13 = uVar13 >> 3;
    local_78 = param_2 + uVar13 * 2 + 2;
    puVar12 = param_1;
    local_44 = uVar7;
    do {
      uVar9 = *puVar12;
      uVar7 = puVar12[1];
      puVar20 = param_2 + 2;
      puVar12 = puVar12 + 2;
      local_44 = local_44 ^
                 (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18);
      local_48 = (uint)uVar11 ^
                 (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18);
      FUN_005be050(&local_48,param_4);
      uVar11 = (ulong)local_48;
      *(char *)((long)param_2 + 3) = (char)local_48;
      *(char *)param_2 = (char)(local_48 >> 0x18);
      *(char *)((long)param_2 + 1) = (char)(local_48 >> 0x10);
      *(char *)((long)param_2 + 2) = (char)(local_48 >> 8);
      *(char *)(param_2 + 1) = (char)(local_44 >> 0x18);
      *(char *)((long)param_2 + 5) = (char)(local_44 >> 0x10);
      *(char *)((long)param_2 + 6) = (char)(local_44 >> 8);
      *(char *)((long)param_2 + 7) = (char)local_44;
      param_2 = puVar20;
    } while (puVar20 != local_78);
    local_70 = param_1 + uVar13 * 2 + 2;
    uVar13 = param_3 + -0x10 + uVar13 * -8;
    uVar7 = local_44;
  }
  uVar9 = uVar7;
  if (uVar13 == 0xfffffffffffffff8) goto LAB_005beaf8;
  lVar19 = (long)local_70 + uVar13 + 8;
  local_48 = (uint)uVar11;
  switch(uVar13) {
  default:
    goto switchD_005be9f5_default;
  case 0xfffffffffffffff9:
    uVar9 = 0;
    goto LAB_005bec60;
  case 0xfffffffffffffffa:
    uVar9 = 0;
    goto LAB_005bec52;
  case 0xfffffffffffffffb:
    uVar9 = 0;
    goto LAB_005bec43;
  case 0xfffffffffffffffc:
    goto LAB_005bec3b;
  case 0xfffffffffffffffd:
    uVar9 = 0;
    goto LAB_005bec29;
  case 0xfffffffffffffffe:
    uVar9 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar1 = (byte *)(lVar19 + -1);
    lVar19 = lVar19 + -1;
    uVar9 = (uint)*pbVar1 << 8;
  }
  pbVar1 = (byte *)(lVar19 + -1);
  lVar19 = lVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 0x10;
LAB_005bec29:
  pbVar1 = (byte *)(lVar19 + -1);
  lVar19 = lVar19 + -1;
  uVar7 = uVar7 ^ (uVar9 | (uint)*pbVar1 << 0x18);
LAB_005bec3b:
  uVar9 = (uint)*(byte *)(lVar19 + -1);
  lVar19 = lVar19 + -1;
LAB_005bec43:
  pbVar1 = (byte *)(lVar19 + -1);
  lVar19 = lVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 8;
LAB_005bec52:
  pbVar1 = (byte *)(lVar19 + -1);
  lVar19 = lVar19 + -1;
  uVar9 = uVar9 | (uint)*pbVar1 << 0x10;
LAB_005bec60:
  local_48 = (uint)uVar11 ^ (uVar9 | (uint)*(byte *)(lVar19 + -1) << 0x18);
switchD_005be9f5_default:
  local_44 = uVar7;
  FUN_005be050(&local_48,param_4);
  uVar11 = (ulong)local_48;
  *local_78 = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
              local_48 << 0x18;
  uVar2 = (undefined1)(local_44 >> 0x18);
  uVar17 = (undefined1)(local_48 >> 0x18);
  uVar16 = (undefined1)(local_48 >> 8);
  uVar14 = (undefined1)(local_48 >> 0x10);
  local_78[1] = local_44 >> 0x18 | (local_44 & 0xff0000) >> 8 | (local_44 & 0xff00) << 8 |
                local_44 << 0x18;
  uVar3 = (undefined1)(local_44 >> 0x10);
  uVar8 = (undefined1)(local_44 >> 8);
  uVar9 = local_44;
LAB_005beb20:
  *(undefined1 *)param_5 = uVar17;
  *(undefined1 *)((long)param_5 + 1) = uVar14;
  *(undefined1 *)((long)param_5 + 2) = uVar16;
  *(char *)((long)param_5 + 3) = (char)uVar11;
  *(undefined1 *)(param_5 + 1) = uVar2;
  *(undefined1 *)((long)param_5 + 5) = uVar3;
  *(undefined1 *)((long)param_5 + 6) = uVar8;
  *(char *)((long)param_5 + 7) = (char)uVar9;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

