
void FUN_004d1780(uint *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,uint *param_7,int param_8)

{
  uint *puVar1;
  byte *pbVar2;
  uint *puVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  uint *local_80;
  undefined8 *local_70;
  uint local_48;
  uint uStack_44;
  long local_40;
  
  uVar14 = param_3 - 8;
  uVar11 = *param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = param_7[1];
  local_70 = param_2;
  if (param_8 == 0) {
    local_80 = param_1;
    if (-1 < (long)uVar14) {
      uVar14 = uVar14 >> 3;
      local_80 = param_1 + uVar14 * 2 + 2;
      puVar12 = param_2;
      uVar6 = uVar11;
      uVar7 = uVar5;
      do {
        uVar11 = *param_1;
        uVar5 = param_1[1];
        param_1 = param_1 + 2;
        local_48 = uVar11;
        uStack_44 = uVar5;
        FUN_004d11f0(&local_48,param_4,param_5,param_6);
        uVar6 = local_48 ^ uVar6;
        uVar7 = uStack_44 ^ uVar7;
        *(char *)puVar12 = (char)uVar6;
        *(char *)((long)puVar12 + 1) = (char)(uVar6 >> 8);
        *(char *)((long)puVar12 + 3) = (char)(uVar6 >> 0x18);
        *(char *)((long)puVar12 + 4) = (char)uVar7;
        *(char *)((long)puVar12 + 2) = (char)(uVar6 >> 0x10);
        *(char *)((long)puVar12 + 5) = (char)(uVar7 >> 8);
        *(char *)((long)puVar12 + 6) = (char)(uVar7 >> 0x10);
        *(char *)((long)puVar12 + 7) = (char)(uVar7 >> 0x18);
        puVar12 = puVar12 + 1;
        uVar6 = uVar11;
        uVar7 = uVar5;
      } while (param_1 != local_80);
      local_70 = param_2 + uVar14 + 1;
      uVar14 = param_3 + -0x10 + uVar14 * -8;
    }
    uVar6 = uVar11;
    uVar7 = uVar5;
    if (uVar14 != 0xfffffffffffffff8) {
      uVar6 = *local_80;
      uVar7 = local_80[1];
      local_48 = uVar6;
      uStack_44 = uVar7;
      FUN_004d11f0(&local_48,param_4,param_5,param_6);
      uVar11 = uVar11 ^ local_48;
      uVar5 = uVar5 ^ uStack_44;
      puVar9 = (undefined1 *)((long)local_70 + uVar14 + 8);
      puVar8 = puVar9;
      switch(uVar14) {
      default:
        goto switchD_004d1aee_default;
      case 0xfffffffffffffff9:
        goto switchD_004d1aee_caseD_fffffff9;
      case 0xfffffffffffffffa:
        goto LAB_004d1903;
      case 0xfffffffffffffffb:
        goto switchD_004d1aee_caseD_fffffffb;
      case 0xfffffffffffffffc:
        break;
      case 0xffffffffffffffff:
        puVar9 = puVar9 + -1;
        *puVar9 = (char)(uVar5 >> 0x10);
      case 0xfffffffffffffffe:
        puVar9[-1] = (char)(uVar5 >> 8);
        puVar9 = puVar9 + -1;
      case 0xfffffffffffffffd:
        puVar9[-1] = (char)uVar5;
        puVar9 = puVar9 + -1;
      }
      puVar8 = puVar9 + -1;
      puVar9[-1] = (char)(uVar11 >> 0x18);
switchD_004d1aee_caseD_fffffffb:
      puVar9 = puVar8 + -1;
      puVar8[-1] = (char)(uVar11 >> 0x10);
LAB_004d1903:
      puVar9[-1] = (char)(uVar11 >> 8);
      puVar9 = puVar9 + -1;
switchD_004d1aee_caseD_fffffff9:
      puVar9[-1] = (char)uVar11;
    }
switchD_004d1aee_default:
    uVar10 = (undefined1)(uVar6 >> 0x18);
    uVar4 = (undefined1)(uVar7 >> 0x18);
    goto LAB_004d192f;
  }
  if (-1 < (long)uVar14) {
    uVar14 = uVar14 >> 3;
    puVar3 = param_1 + uVar14 * 2 + 2;
    puVar12 = param_2;
    uStack_44 = uVar5;
    local_48 = uVar11;
    do {
      uVar11 = *param_1;
      puVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      local_48 = local_48 ^ uVar11;
      uStack_44 = uStack_44 ^ *puVar1;
      FUN_004d10e0(&local_48,param_4,param_5,param_6);
      *(char *)puVar12 = (char)local_48;
      *(char *)((long)puVar12 + 1) = (char)(local_48 >> 8);
      *(char *)((long)puVar12 + 2) = (char)(local_48 >> 0x10);
      *(char *)((long)puVar12 + 4) = (char)uStack_44;
      *(char *)((long)puVar12 + 3) = (char)(local_48 >> 0x18);
      *(char *)((long)puVar12 + 5) = (char)(uStack_44 >> 8);
      *(char *)((long)puVar12 + 6) = (char)(uStack_44 >> 0x10);
      *(char *)((long)puVar12 + 7) = (char)(uStack_44 >> 0x18);
      puVar12 = puVar12 + 1;
    } while (puVar3 != param_1);
    local_70 = param_2 + uVar14 + 1;
    uVar14 = param_3 + -0x10 + uVar14 * -8;
    uVar11 = local_48;
    uVar5 = uStack_44;
  }
  uVar6 = uVar11;
  uVar7 = uVar5;
  if (uVar14 == 0xfffffffffffffff8) goto switchD_004d1aee_default;
  lVar13 = (long)param_1 + uVar14 + 8;
  switch(uVar14) {
  default:
    goto switchD_004d18cf_default;
  case 0xfffffffffffffff9:
    uVar6 = 0;
    goto LAB_004d1b43;
  case 0xfffffffffffffffa:
    uVar6 = 0;
    goto LAB_004d1b35;
  case 0xfffffffffffffffb:
    uVar6 = 0;
    goto LAB_004d1b25;
  case 0xfffffffffffffffc:
    goto LAB_004d1b18;
  case 0xfffffffffffffffd:
    uVar6 = 0;
    goto LAB_004d1b0a;
  case 0xfffffffffffffffe:
    uVar6 = 0;
    break;
  case 0xffffffffffffffff:
    pbVar2 = (byte *)(lVar13 + -1);
    lVar13 = lVar13 + -1;
    uVar6 = (uint)*pbVar2 << 0x10;
  }
  pbVar2 = (byte *)(lVar13 + -1);
  lVar13 = lVar13 + -1;
  uVar6 = (uint)*pbVar2 << 8 | uVar6;
LAB_004d1b0a:
  pbVar2 = (byte *)(lVar13 + -1);
  lVar13 = lVar13 + -1;
  uVar5 = uVar5 ^ (uVar6 | *pbVar2);
LAB_004d1b18:
  pbVar2 = (byte *)(lVar13 + -1);
  lVar13 = lVar13 + -1;
  uVar6 = (uint)*pbVar2 << 0x18;
LAB_004d1b25:
  pbVar2 = (byte *)(lVar13 + -1);
  lVar13 = lVar13 + -1;
  uVar6 = (uint)*pbVar2 << 0x10 | uVar6;
LAB_004d1b35:
  uVar6 = (uint)*(byte *)(lVar13 + -1) << 8 | uVar6;
  lVar13 = lVar13 + -1;
LAB_004d1b43:
  uVar11 = uVar11 ^ (uVar6 | *(byte *)(lVar13 + -1));
switchD_004d18cf_default:
  local_48 = uVar11;
  uStack_44 = uVar5;
  FUN_004d10e0(&local_48,param_4,param_5,param_6);
  *local_70 = CONCAT44(uStack_44,local_48);
  uVar10 = (undefined1)(local_48 >> 0x18);
  uVar4 = (undefined1)(uStack_44 >> 0x18);
  uVar6 = local_48;
  uVar7 = uStack_44;
LAB_004d192f:
  *(char *)param_7 = (char)uVar6;
  *(char *)((long)param_7 + 1) = (char)(uVar6 >> 8);
  *(char *)((long)param_7 + 2) = (char)(uVar6 >> 0x10);
  *(undefined1 *)((long)param_7 + 3) = uVar10;
  *(char *)(param_7 + 1) = (char)uVar7;
  *(char *)((long)param_7 + 5) = (char)(uVar7 >> 8);
  *(char *)((long)param_7 + 6) = (char)(uVar7 >> 0x10);
  *(undefined1 *)((long)param_7 + 7) = uVar4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return;
}

