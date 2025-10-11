
void FUN_004d1300(uint *param_1,undefined8 *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  uint uVar20;
  long in_FS_OFFSET;
  undefined8 *local_80;
  uint *local_70;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  uVar10 = param_3 - 8;
  uVar6 = *param_5;
  uVar20 = param_5[1];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = param_1;
  if (param_6 == 0) {
    local_80 = param_2;
    if (-1 < (long)uVar10) {
      uVar10 = uVar10 >> 3;
      local_80 = param_2 + uVar10 + 1;
      puVar9 = param_1;
      uVar7 = uVar6;
      uVar3 = uVar20;
      do {
        uVar6 = *puVar9;
        uVar20 = puVar9[1];
        puVar18 = param_2 + 1;
        puVar9 = puVar9 + 2;
        local_48 = uVar6;
        uStack_44 = uVar20;
        FUN_004ce920(&local_48,param_4,0);
        uVar7 = local_48 ^ uVar7;
        uVar3 = uStack_44 ^ uVar3;
        *(char *)param_2 = (char)uVar7;
        *(char *)((long)param_2 + 1) = (char)(uVar7 >> 8);
        *(char *)((long)param_2 + 3) = (char)(uVar7 >> 0x18);
        *(char *)((long)param_2 + 4) = (char)uVar3;
        *(char *)((long)param_2 + 2) = (char)(uVar7 >> 0x10);
        *(char *)((long)param_2 + 5) = (char)(uVar3 >> 8);
        *(char *)((long)param_2 + 6) = (char)(uVar3 >> 0x10);
        *(char *)((long)param_2 + 7) = (char)(uVar3 >> 0x18);
        param_2 = puVar18;
        uVar7 = uVar6;
        uVar3 = uVar20;
      } while (puVar18 != local_80);
      local_70 = param_1 + uVar10 * 2 + 2;
      uVar10 = param_3 + -0x10 + uVar10 * -8;
    }
    uVar7 = uVar20;
    uVar3 = uVar6;
    if (uVar10 != 0xfffffffffffffff8) {
      uVar7 = local_70[1];
      uVar3 = *local_70;
      local_48 = uVar3;
      uStack_44 = uVar7;
      FUN_004ce920(&local_48,param_4,0);
      uVar20 = uVar20 ^ uStack_44;
      uVar6 = uVar6 ^ local_48;
      puVar19 = (undefined1 *)((long)local_80 + uVar10 + 8);
      puVar17 = puVar19;
      switch(uVar10) {
      default:
        goto switchD_004d164e_default;
      case 0xfffffffffffffff9:
        goto switchD_004d164e_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_004d1478;
      case 0xfffffffffffffffb:
        goto switchD_004d164e_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar19 = puVar19 + -1;
        *puVar19 = (char)(uVar20 >> 0x10);
      case 0xfffffffffffffffe:
        puVar19 = puVar19 + -1;
        *puVar19 = (char)(uVar20 >> 8);
      case 0xfffffffffffffffd:
        puVar19[-1] = (char)uVar20;
        puVar19 = puVar19 + -1;
      }
      puVar17 = puVar19 + -1;
      puVar19[-1] = (char)(uVar6 >> 0x18);
switchD_004d164e_caseD_fffffffb:
      puVar19 = puVar17 + -1;
      puVar17[-1] = (char)(uVar6 >> 0x10);
LAB_004d1478:
      puVar19[-1] = (char)(uVar6 >> 8);
      puVar19 = puVar19 + -1;
switchD_004d164e_caseD_fffffff9:
      puVar19[-1] = (char)uVar6;
    }
switchD_004d164e_default:
    uVar15 = (undefined1)uVar7;
    uVar11 = (undefined1)(uVar3 >> 0x10);
    uVar13 = (undefined1)(uVar3 >> 8);
    uVar14 = (undefined1)uVar3;
    uVar12 = (undefined1)(uVar7 >> 8);
    uVar5 = (undefined1)(uVar3 >> 0x18);
    goto LAB_004d14b0;
  }
  if (-1 < (long)uVar10) {
    uVar10 = uVar10 >> 3;
    puVar18 = param_2 + uVar10 + 1;
    puVar16 = param_2;
    puVar9 = param_1;
    uStack_44 = uVar20;
    local_48 = uVar6;
    do {
      uVar6 = *puVar9;
      puVar1 = puVar9 + 1;
      param_2 = puVar16 + 1;
      puVar9 = puVar9 + 2;
      local_48 = local_48 ^ uVar6;
      uStack_44 = uStack_44 ^ *puVar1;
      FUN_004ce920(&local_48,param_4,1);
      *(char *)puVar16 = (char)local_48;
      *(char *)((long)puVar16 + 1) = (char)(local_48 >> 8);
      *(char *)((long)puVar16 + 2) = (char)(local_48 >> 0x10);
      *(char *)((long)puVar16 + 3) = (char)(local_48 >> 0x18);
      *(char *)((long)puVar16 + 4) = (char)uStack_44;
      *(char *)((long)puVar16 + 5) = (char)(uStack_44 >> 8);
      *(char *)((long)puVar16 + 6) = (char)(uStack_44 >> 0x10);
      *(char *)((long)puVar16 + 7) = (char)(uStack_44 >> 0x18);
      puVar16 = param_2;
    } while (puVar18 != param_2);
    local_70 = param_1 + uVar10 * 2 + 2;
    uVar10 = param_3 + -0x10 + uVar10 * -8;
    uVar20 = uStack_44;
    uVar6 = local_48;
  }
  uVar7 = uVar20;
  uVar3 = uVar6;
  if (uVar10 == 0xfffffffffffffff8) goto switchD_004d164e_default;
  lVar4 = (long)local_70 + uVar10 + 8;
  local_48 = uVar6;
  switch(uVar10) {
  default:
    goto switchD_004d143a_default;
  case 0xfffffffffffffff9:
    uVar7 = 0;
    goto LAB_004d169e;
  case 0xfffffffffffffffa:
    uVar7 = 0;
    lVar8 = lVar4;
    goto LAB_004d1691;
  case 0xfffffffffffffffb:
    uVar7 = 0;
    goto LAB_004d1683;
  case 0xfffffffffffffffc:
    goto LAB_004d1676;
  case 0xfffffffffffffffd:
    uVar7 = 0;
    goto LAB_004d1667;
  case 0xfffffffffffffffe:
    uVar7 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = (byte *)(lVar4 + -1);
    lVar4 = lVar4 + -1;
    uVar7 = (uint)*pbVar2 << 0x10;
  }
  pbVar2 = (byte *)(lVar4 + -1);
  lVar4 = lVar4 + -1;
  uVar7 = (uint)*pbVar2 << 8 | uVar7;
LAB_004d1667:
  pbVar2 = (byte *)(lVar4 + -1);
  lVar4 = lVar4 + -1;
  uVar20 = uVar20 ^ (uVar7 | *pbVar2);
LAB_004d1676:
  pbVar2 = (byte *)(lVar4 + -1);
  lVar4 = lVar4 + -1;
  uVar7 = (uint)*pbVar2 << 0x18;
LAB_004d1683:
  uVar7 = (uint)*(byte *)(lVar4 + -1) << 0x10 | uVar7;
  lVar8 = lVar4 + -1;
LAB_004d1691:
  lVar4 = lVar8 + -1;
  uVar7 = (uint)*(byte *)(lVar8 + -1) << 8 | uVar7;
LAB_004d169e:
  local_48 = uVar6 ^ (uVar7 | *(byte *)(lVar4 + -1));
switchD_004d143a_default:
  uStack_44 = uVar20;
  FUN_004ce920(&local_48,param_4,1);
  uVar14 = (undefined1)local_48;
  uVar13 = (undefined1)(local_48 >> 8);
  uVar15 = (undefined1)uStack_44;
  *param_2 = CONCAT44(uStack_44,local_48);
  uVar11 = (undefined1)(local_48 >> 0x10);
  uVar5 = (undefined1)(local_48 >> 0x18);
  uVar12 = (undefined1)(uStack_44 >> 8);
  uVar7 = uStack_44;
LAB_004d14b0:
  *(undefined1 *)param_5 = uVar14;
  *(undefined1 *)((long)param_5 + 1) = uVar13;
  *(undefined1 *)((long)param_5 + 2) = uVar11;
  *(undefined1 *)((long)param_5 + 3) = uVar5;
  *(undefined1 *)(param_5 + 1) = uVar15;
  *(undefined1 *)((long)param_5 + 5) = uVar12;
  *(char *)((long)param_5 + 6) = (char)(uVar7 >> 0x10);
  *(char *)((long)param_5 + 7) = (char)(uVar7 >> 0x18);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

