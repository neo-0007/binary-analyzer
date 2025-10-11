
void FUN_00565f60(uint *param_1,undefined4 *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  uint *local_90;
  undefined4 *local_80;
  ulong local_58;
  ulong local_50;
  long local_40;
  
  uVar8 = (ulong)*param_5;
  uVar15 = (ulong)param_5[1];
  uVar9 = param_3 - 8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = param_2;
  if (param_6 == 0) {
    local_90 = param_1;
    if (-1 < (long)uVar9) {
      uVar9 = uVar9 >> 3;
      local_90 = param_1 + uVar9 * 2 + 2;
      puVar11 = param_2;
      uVar7 = uVar15;
      uVar10 = uVar8;
      do {
        uVar8 = (ulong)*param_1;
        uVar15 = (ulong)param_1[1];
        param_1 = param_1 + 2;
        local_58 = uVar8;
        local_50 = uVar15;
        FUN_00565e10(&local_58,param_4);
        uVar10 = uVar10 ^ local_58;
        uVar7 = local_50 ^ uVar7;
        *(char *)puVar11 = (char)uVar10;
        *(char *)((long)puVar11 + 1) = (char)(uVar10 >> 8);
        *(char *)((long)puVar11 + 3) = (char)(uVar10 >> 0x18);
        *(char *)(puVar11 + 1) = (char)uVar7;
        *(char *)((long)puVar11 + 5) = (char)(uVar7 >> 8);
        *(char *)((long)puVar11 + 2) = (char)(uVar10 >> 0x10);
        *(char *)((long)puVar11 + 6) = (char)(uVar7 >> 0x10);
        *(char *)((long)puVar11 + 7) = (char)(uVar7 >> 0x18);
        puVar11 = puVar11 + 2;
        uVar7 = uVar15;
        uVar10 = uVar8;
      } while (param_1 != local_90);
      local_80 = param_2 + uVar9 * 2 + 2;
      uVar9 = param_3 + -0x10 + uVar9 * -8;
    }
    uVar7 = uVar8;
    uVar10 = uVar15;
    if (uVar9 != 0xfffffffffffffff8) {
      uVar10 = (ulong)local_90[1];
      uVar7 = (ulong)*local_90;
      local_58 = uVar7;
      local_50 = uVar10;
      FUN_00565e10(&local_58,param_4);
      uVar15 = uVar15 ^ local_50;
      uVar8 = local_58 ^ uVar8;
      puVar14 = (undefined1 *)((long)local_80 + uVar9 + 8);
      puVar13 = puVar14;
      switch(uVar9) {
      default:
        goto switchD_005662d8_default;
      case 0xfffffffffffffff9:
        goto switchD_005662d8_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_00566105;
      case 0xfffffffffffffffb:
        goto switchD_005662d8_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar14 = puVar14 + -1;
        *puVar14 = (char)(uVar15 >> 0x10);
      case 0xfffffffffffffffe:
        puVar14 = puVar14 + -1;
        *puVar14 = (char)(uVar15 >> 8);
      case 0xfffffffffffffffd:
        puVar14[-1] = (char)uVar15;
        puVar14 = puVar14 + -1;
      }
      puVar13 = puVar14 + -1;
      puVar14[-1] = (char)(uVar8 >> 0x18);
switchD_005662d8_caseD_fffffffb:
      puVar14 = puVar13 + -1;
      puVar13[-1] = (char)(uVar8 >> 0x10);
LAB_00566105:
      puVar14[-1] = (char)(uVar8 >> 8);
      puVar14 = puVar14 + -1;
switchD_005662d8_caseD_fffffff9:
      puVar14[-1] = (char)uVar8;
    }
switchD_005662d8_default:
    uVar6 = (undefined1)(uVar7 >> 0x18);
    uVar5 = (undefined1)uVar10;
    goto LAB_00566144;
  }
  if (-1 < (long)uVar9) {
    uVar9 = uVar9 >> 3;
    puVar3 = param_1 + uVar9 * 2 + 2;
    local_58 = uVar8;
    local_50 = uVar15;
    puVar11 = param_2;
    do {
      uVar4 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_58 = local_58 ^ uVar4;
      local_50 = *puVar1 ^ local_50;
      FUN_00565ce0(&local_58,param_4);
      *(char *)puVar11 = (char)local_58;
      *(char *)((long)puVar11 + 1) = (char)(local_58 >> 8);
      *(char *)((long)puVar11 + 2) = (char)(local_58 >> 0x10);
      *(char *)((long)puVar11 + 3) = (char)(local_58 >> 0x18);
      *(char *)(puVar11 + 1) = (char)local_50;
      *(char *)((long)puVar11 + 5) = (char)(local_50 >> 8);
      *(char *)((long)puVar11 + 6) = (char)(local_50 >> 0x10);
      *(char *)((long)puVar11 + 7) = (char)(local_50 >> 0x18);
      puVar11 = puVar11 + 2;
    } while (puVar3 != param_1);
    local_80 = param_2 + uVar9 * 2 + 2;
    uVar9 = param_3 + -0x10 + uVar9 * -8;
    uVar8 = local_58;
    uVar15 = local_50;
  }
  uVar7 = uVar8;
  uVar10 = uVar15;
  if (uVar9 == 0xfffffffffffffff8) goto switchD_005662d8_default;
  lVar12 = (long)param_1 + uVar9 + 8;
  switch(uVar9) {
  default:
    goto switchD_005660c0_default;
  case 0xfffffffffffffff9:
    uVar9 = 0;
    goto LAB_0056632d;
  case 0xfffffffffffffffa:
    uVar9 = 0;
    goto LAB_0056631e;
  case 0xfffffffffffffffb:
    uVar9 = 0;
    goto LAB_0056630e;
  case 0xfffffffffffffffc:
    goto LAB_00566301;
  case 0xfffffffffffffffd:
    uVar9 = 0;
    goto LAB_005662f2;
  case 0xfffffffffffffffe:
    uVar9 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = (byte *)(lVar12 + -1);
    lVar12 = lVar12 + -1;
    uVar9 = (ulong)*pbVar2 << 0x10;
  }
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 8 | uVar9;
LAB_005662f2:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar15 = uVar15 ^ (uVar9 | *pbVar2);
LAB_00566301:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 0x18;
LAB_0056630e:
  pbVar2 = (byte *)(lVar12 + -1);
  lVar12 = lVar12 + -1;
  uVar9 = (ulong)*pbVar2 << 0x10 | uVar9;
LAB_0056631e:
  uVar9 = (ulong)*(byte *)(lVar12 + -1) << 8 | uVar9;
  lVar12 = lVar12 + -1;
LAB_0056632d:
  uVar8 = uVar8 ^ (uVar9 | *(byte *)(lVar12 + -1));
switchD_005660c0_default:
  local_58 = uVar8;
  local_50 = uVar15;
  FUN_00565ce0(&local_58,param_4);
  *local_80 = (undefined4)local_58;
  local_80[1] = (undefined4)local_50;
  uVar5 = (undefined1)local_50;
  uVar6 = (undefined1)(local_58 >> 0x18);
  uVar7 = local_58;
  uVar10 = local_50;
LAB_00566144:
  *(char *)param_5 = (char)uVar7;
  *(char *)((long)param_5 + 1) = (char)(uVar7 >> 8);
  *(char *)((long)param_5 + 2) = (char)(uVar7 >> 0x10);
  *(undefined1 *)((long)param_5 + 3) = uVar6;
  *(undefined1 *)(param_5 + 1) = uVar5;
  *(char *)((long)param_5 + 5) = (char)(uVar10 >> 8);
  *(char *)((long)param_5 + 6) = (char)(uVar10 >> 0x10);
  *(char *)((long)param_5 + 7) = (char)(uVar10 >> 0x18);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

