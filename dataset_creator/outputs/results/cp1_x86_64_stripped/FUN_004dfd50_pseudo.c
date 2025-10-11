
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004dfd50(ulong *param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte *pbVar2;
  char cVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  ulong local_b8 [7];
  ulong local_80;
  undefined1 local_78 [56];
  long local_40;
  
  uVar4 = DAT_007f1190;
  uVar7 = _UNK_007f1188;
  uVar5 = _DAT_007f1180;
  uVar6 = _UNK_007f1178;
  uVar8 = _DAT_007f1170;
  uVar10 = _UNK_007f1168;
  puVar9 = local_b8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) {
    *param_1 = _DAT_007f1160;
    param_1[1] = uVar10;
    param_1[6] = uVar4;
    param_1[2] = uVar8;
    param_1[3] = uVar6;
    param_1[4] = uVar5;
    param_1[5] = uVar7;
  }
  else {
    uVar10 = (param_3 / 0x38) * 0x38;
    uVar8 = param_3 % 0x38;
    if (param_3 == uVar10) {
      uVar10 = param_3 - 0x38;
      uVar8 = 0x38;
    }
    uVar6 = 0;
    do {
      lVar1 = uVar10 + uVar6;
      uVar7 = 0;
      uVar5 = 0;
      do {
        if (uVar8 <= uVar6) break;
        pbVar2 = (byte *)(lVar1 + param_2 + uVar5);
        cVar3 = (char)uVar5;
        uVar5 = uVar5 + 1;
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 | (ulong)*pbVar2 << (cVar3 * '\b' & 0x3fU);
      } while (uVar5 < 8);
      *puVar9 = uVar7;
      puVar9 = puVar9 + 1;
    } while (&local_80 != puVar9);
    if (param_3 == 0x38) {
      FUN_004dfba0(param_1,local_b8,&DAT_007f11a0);
      FUN_004dfd40(local_b8);
    }
    else {
      while (uVar10 != 0) {
        uVar10 = uVar10 - 0x38;
        FUN_004df9b0(local_b8,local_b8,&DAT_007f11e0);
        FUN_004dfc50(local_78,param_2 + uVar10);
        FUN_004dfbe0(local_b8,local_b8,local_78);
      }
      param_1[6] = local_b8[6];
      *param_1 = local_b8[0];
      param_1[1] = local_b8[1];
      param_1[2] = local_b8[2];
      param_1[3] = local_b8[3];
      param_1[4] = local_b8[4];
      param_1[5] = local_b8[5];
      FUN_004dfd40(local_b8);
      FUN_004dfd40(local_78);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

