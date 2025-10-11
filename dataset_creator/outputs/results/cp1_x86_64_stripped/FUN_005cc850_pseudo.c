
void FUN_005cc850(uint *param_1,uint *param_2,long param_3,undefined8 param_4,uint *param_5,
                 uint *param_6,uint *param_7,int param_8)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  long lVar7;
  uint *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  uint uVar21;
  uint *puVar22;
  long in_FS_OFFSET;
  uint *local_a0;
  ulong local_78;
  long local_70;
  uint *local_68;
  uint local_48;
  uint local_44;
  long local_40;
  
  local_78 = param_3 - 8;
  uVar13 = *param_5;
  uVar2 = param_7[1];
  uVar6 = *param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = *param_6;
  uVar4 = param_6[1];
  uVar10 = param_5[1];
  local_68 = param_1;
  if (param_8 == 0) {
    if ((long)local_78 < 1) {
      local_70 = param_3;
      uVar21 = uVar10;
      uVar17 = uVar13;
      if (local_78 == 0xfffffffffffffff8) goto LAB_005ccbcc;
    }
    else {
      uVar14 = param_3 - 9U >> 3;
      puVar8 = param_2 + uVar14 * 2 + 2;
      puVar16 = param_1;
      puVar22 = param_2;
      uVar17 = uVar13;
      do {
        uVar13 = *puVar16;
        param_2 = puVar22 + 2;
        uVar21 = puVar16[1];
        local_48 = uVar6 ^ uVar13;
        local_44 = uVar2 ^ uVar21;
        FUN_004ce920(&local_48,param_4,0);
        uVar17 = uVar3 ^ local_48 ^ uVar17;
        *(char *)puVar22 = (char)uVar17;
        uVar10 = uVar4 ^ local_44 ^ uVar10;
        *(char *)((long)puVar22 + 1) = (char)(uVar17 >> 8);
        *(char *)((long)puVar22 + 3) = (char)(uVar17 >> 0x18);
        *(char *)(puVar22 + 1) = (char)uVar10;
        *(char *)((long)puVar22 + 2) = (char)(uVar17 >> 0x10);
        *(char *)((long)puVar22 + 5) = (char)(uVar10 >> 8);
        *(char *)((long)puVar22 + 6) = (char)(uVar10 >> 0x10);
        *(char *)((long)puVar22 + 7) = (char)(uVar10 >> 0x18);
        puVar16 = puVar16 + 2;
        puVar22 = param_2;
        uVar10 = uVar21;
        uVar17 = uVar13;
      } while (puVar8 != param_2);
      local_68 = param_1 + uVar14 * 2 + 2;
      local_70 = uVar14 * -8 + local_78;
      local_78 = param_3 + -0x10 + uVar14 * -8;
    }
    uVar17 = *local_68;
    local_48 = uVar6 ^ uVar17;
    uVar10 = local_68[1];
    local_44 = uVar2 ^ uVar10;
    FUN_004ce920(&local_48,param_4,0);
    puVar9 = (undefined1 *)((long)param_2 + local_78 + 8);
    uVar13 = uVar13 ^ uVar3 ^ local_48;
    uVar21 = uVar4 ^ local_44 ^ uVar21;
    switch(local_70) {
    default:
      goto LAB_005ccbcc;
    case 1:
      goto switchD_005ccbb4_caseD_1;
    case 2:
      puVar11 = puVar9;
      goto LAB_005ccc72;
    case 3:
      goto LAB_005ccc65;
    case 4:
      goto switchD_005ccbb4_caseD_4;
    case 5:
      break;
    case 8:
      puVar9 = puVar9 + -1;
      *puVar9 = (char)(uVar21 >> 0x18);
    case 7:
      puVar9 = puVar9 + -1;
      *puVar9 = (char)(uVar21 >> 0x10);
    case 6:
      puVar9[-1] = (char)(uVar21 >> 8);
      puVar9 = puVar9 + -1;
    }
    puVar9[-1] = (char)uVar21;
    puVar9 = puVar9 + -1;
switchD_005ccbb4_caseD_4:
    puVar9[-1] = (char)(uVar13 >> 0x18);
    puVar9 = puVar9 + -1;
LAB_005ccc65:
    puVar9[-1] = (char)(uVar13 >> 0x10);
    puVar11 = puVar9 + -1;
LAB_005ccc72:
    puVar9 = puVar11 + -1;
    puVar11[-1] = (char)(uVar13 >> 8);
switchD_005ccbb4_caseD_1:
    puVar9[-1] = (char)uVar13;
  }
  else {
    local_a0 = param_2;
    if (-1 < (long)local_78) {
      local_78 = local_78 >> 3;
      local_a0 = param_2 + local_78 * 2 + 2;
      puVar16 = param_1;
      do {
        puVar22 = param_2 + 2;
        local_48 = uVar13 ^ *puVar16 ^ uVar3;
        local_44 = puVar16[1] ^ uVar4 ^ uVar10;
        FUN_004ce920(&local_48,param_4,1);
        uVar13 = local_48 ^ uVar6;
        *(char *)param_2 = (char)uVar13;
        *(char *)((long)param_2 + 1) = (char)(uVar13 >> 8);
        *(char *)((long)param_2 + 2) = (char)(uVar13 >> 0x10);
        *(char *)((long)param_2 + 3) = (char)(uVar13 >> 0x18);
        uVar10 = local_44 ^ uVar2;
        *(char *)(param_2 + 1) = (char)uVar10;
        *(char *)((long)param_2 + 5) = (char)(uVar10 >> 8);
        *(char *)((long)param_2 + 6) = (char)(uVar10 >> 0x10);
        *(char *)((long)param_2 + 7) = (char)(uVar10 >> 0x18);
        puVar16 = puVar16 + 2;
        param_2 = puVar22;
      } while (puVar22 != local_a0);
      local_68 = param_1 + local_78 * 2 + 2;
      local_78 = param_3 + -0x10 + local_78 * -8;
    }
    uVar17 = uVar13;
    if (local_78 != 0xfffffffffffffff8) {
      lVar7 = (long)local_68 + local_78 + 8;
      switch(local_78) {
      default:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005ccce9;
      case 0xfffffffffffffff9:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005ccce3;
      case 0xfffffffffffffffa:
        local_44 = 0;
        local_48 = 0;
        lVar15 = lVar7;
        goto LAB_005cccd6;
      case 0xfffffffffffffffb:
        local_44 = 0;
        local_48 = 0;
        goto LAB_005cccc8;
      case 0xfffffffffffffffc:
        local_44 = 0;
        goto LAB_005cccbb;
      case 0xfffffffffffffffd:
        local_44 = 0;
        goto LAB_005cccaf;
      case 0xfffffffffffffffe:
        local_44 = 0;
        break;
      case 0xffffffffffffffff:
        pbVar1 = (byte *)(lVar7 + -1);
        lVar7 = lVar7 + -1;
        local_44 = (uint)*pbVar1 << 0x10;
      }
      pbVar1 = (byte *)(lVar7 + -1);
      lVar7 = lVar7 + -1;
      local_44 = (uint)*pbVar1 << 8 | local_44;
LAB_005cccaf:
      pbVar1 = (byte *)(lVar7 + -1);
      lVar7 = lVar7 + -1;
      local_44 = *pbVar1 | local_44;
LAB_005cccbb:
      pbVar1 = (byte *)(lVar7 + -1);
      lVar7 = lVar7 + -1;
      local_48 = (uint)*pbVar1 << 0x18;
LAB_005cccc8:
      local_48 = (uint)*(byte *)(lVar7 + -1) << 0x10 | local_48;
      lVar15 = lVar7 + -1;
LAB_005cccd6:
      lVar7 = lVar15 + -1;
      local_48 = (uint)*(byte *)(lVar15 + -1) << 8 | local_48;
LAB_005ccce3:
      local_48 = *(byte *)(lVar7 + -1) | local_48;
LAB_005ccce9:
      local_48 = uVar13 ^ uVar3 ^ local_48;
      local_44 = uVar10 ^ uVar4 ^ local_44;
      FUN_004ce920(&local_48,param_4,1);
      uVar10 = uVar2 ^ local_44;
      uVar6 = local_48 ^ uVar6;
      local_a0[1] = uVar10;
      *local_a0 = uVar6;
      uVar20 = (undefined1)uVar6;
      uVar12 = (undefined1)(uVar6 >> 0x10);
      uVar19 = (undefined1)(uVar6 >> 8);
      uVar18 = (undefined1)(uVar6 >> 0x18);
      uVar5 = (undefined1)(uVar10 >> 0x10);
      goto LAB_005ccbef;
    }
  }
LAB_005ccbcc:
  uVar20 = (undefined1)uVar17;
  uVar12 = (undefined1)(uVar17 >> 0x10);
  uVar18 = (undefined1)(uVar17 >> 0x18);
  uVar19 = (undefined1)(uVar17 >> 8);
  uVar5 = (undefined1)(uVar10 >> 0x10);
LAB_005ccbef:
  *(undefined1 *)param_5 = uVar20;
  *(undefined1 *)((long)param_5 + 1) = uVar19;
  *(undefined1 *)((long)param_5 + 2) = uVar12;
  *(undefined1 *)((long)param_5 + 3) = uVar18;
  *(char *)(param_5 + 1) = (char)uVar10;
  *(char *)((long)param_5 + 5) = (char)(uVar10 >> 8);
  *(undefined1 *)((long)param_5 + 6) = uVar5;
  *(char *)((long)param_5 + 7) = (char)(uVar10 >> 0x18);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

