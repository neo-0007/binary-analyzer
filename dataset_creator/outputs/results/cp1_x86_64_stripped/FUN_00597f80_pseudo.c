
void FUN_00597f80(long param_1,byte *param_2,ulong param_3)

{
  ulong *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  sbyte sVar5;
  sbyte sVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  ulong local_68;
  
  iVar3 = (int)param_3;
  uVar12 = -iVar3 & 7;
  uVar10 = *(uint *)(param_1 + 0x80);
  uVar14 = uVar10 & 7;
  puVar1 = (ulong *)(param_1 + 0x88);
  uVar8 = *puVar1;
  *puVar1 = *puVar1 + param_3;
  if (CARRY8(uVar8,param_3)) {
    plVar7 = (long *)(param_1 + 0x90);
    do {
      *plVar7 = *plVar7 + 1;
      if (*plVar7 != 0) break;
      plVar7 = plVar7 + 1;
    } while ((long *)(param_1 + 0xa8) != plVar7);
  }
  if (((-iVar3 | uVar10) & 7) == 0) {
LAB_00598224:
    if (param_3 == 0) {
      return;
    }
    pbVar13 = param_2;
    if (uVar10 != 0) {
      uVar12 = 0x200 - uVar10;
      uVar8 = (ulong)(uVar10 >> 3);
      if (param_3 < uVar12) goto LAB_005982a8;
      local_68 = param_3 - uVar12;
      pbVar13 = param_2 + (uVar12 >> 3);
      thunk_FUN_00713a50(param_1 + 0x40 + uVar8,param_2,(ulong)(uVar12 >> 3));
      goto LAB_00598266;
    }
  }
  else {
    if (param_3 == 0) {
      return;
    }
    uVar8 = (ulong)(uVar10 >> 3);
    sVar5 = (sbyte)uVar14;
    if (uVar14 != uVar12) {
      sVar6 = (sbyte)uVar12;
      pbVar11 = param_2;
      if (8 < param_3) {
        local_68._0_1_ = 8 - sVar5;
        uVar4 = param_3 - 9 >> 3;
        pbVar11 = param_2 + uVar4 + 1;
        do {
          bVar2 = *param_2;
          pbVar13 = param_2 + 1;
          uVar10 = uVar10 + 8;
          param_2 = param_2 + 1;
          uVar12 = (uint)bVar2 << sVar6 | (int)(uint)*pbVar13 >> (8U - sVar6 & 0x1f);
          if (uVar14 == 0) {
            *(char *)(param_1 + 0x40 + uVar8) = (char)uVar12;
            if (0x1ff < uVar10) {
              uVar10 = uVar10 & 0x1ff;
              FUN_00604600(param_1,param_1 + 0x40,1);
            }
          }
          else {
            uVar12 = uVar12 & 0xff;
            uVar9 = (ulong)((int)uVar8 + 1);
            pbVar13 = (byte *)(param_1 + 0x40 + uVar8);
            *pbVar13 = *pbVar13 | (byte)((int)uVar12 >> sVar5);
            if (0x1ff < uVar10) {
              uVar10 = uVar10 & 0x1ff;
              FUN_00604600(param_1,param_1 + 0x40,1);
              uVar9 = 0;
            }
            *(char *)(param_1 + 0x40 + uVar9) = (char)(uVar12 << ((byte)local_68 & 0x1f));
          }
          *(uint *)(param_1 + 0x80) = uVar10;
          uVar8 = (ulong)(uVar10 >> 3);
        } while (pbVar11 != param_2);
        iVar3 = iVar3 + -8 + (int)uVar4 * -8;
      }
      iVar3 = iVar3 + uVar10;
      if (uVar14 == 0) {
        *(char *)(param_1 + 0x40 + uVar8) = (char)((uint)*pbVar11 << sVar6);
        if (iVar3 == 0x200) {
          FUN_00604600(param_1,param_1 + 0x40,1);
          iVar3 = 0;
        }
      }
      else {
        uVar10 = (uint)*pbVar11 << sVar6 & 0xff;
        uVar4 = (ulong)((int)uVar8 + 1);
        pbVar11 = (byte *)(param_1 + 0x40 + uVar8);
        *pbVar11 = *pbVar11 | (byte)((int)uVar10 >> sVar5);
        if (iVar3 == 0x200) {
          FUN_00604600(param_1,param_1 + 0x40,1);
          uVar4 = 0;
          iVar3 = 0;
        }
        *(char *)(param_1 + 0x40 + uVar4) = (char)(uVar10 << (8U - sVar5 & 0x1f));
      }
      *(int *)(param_1 + 0x80) = iVar3;
      return;
    }
    pbVar13 = param_2 + 1;
    pbVar11 = (byte *)(param_1 + 0x40 + uVar8);
    *pbVar11 = *pbVar11 | *param_2 & (byte)(0xff >> sVar5);
    uVar10 = uVar10 + (8 - uVar14);
    param_3 = param_3 - (8 - uVar14);
    local_68 = param_3;
    if (uVar10 != 0x200) {
      *(uint *)(param_1 + 0x80) = uVar10;
      param_2 = pbVar13;
      goto LAB_00598224;
    }
LAB_00598266:
    FUN_00604600(param_1,param_1 + 0x40,1);
    *(undefined4 *)(param_1 + 0x80) = 0;
    param_3 = local_68;
    if (local_68 == 0) {
      return;
    }
  }
  while (0x1ff < param_3) {
    FUN_00604600(param_1,pbVar13,param_3 >> 9);
    uVar4 = param_3 >> 3;
    uVar8 = param_3 & 0x1ff;
    param_3 = (ulong)((uint)param_3 & 0x1ff);
    pbVar13 = pbVar13 + (uVar4 & 0x1fffffffffffffc0);
    if (uVar8 == 0) {
      return;
    }
  }
  uVar8 = 0;
  uVar10 = 0;
LAB_005982a8:
  thunk_FUN_00713a50(param_1 + 0x40 + uVar8,pbVar13,param_3 >> 3);
  *(uint *)(param_1 + 0x80) = uVar10 + (int)param_3;
  return;
}

