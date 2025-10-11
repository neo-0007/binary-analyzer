
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0078e460(long *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long local_88;
  long local_80;
  long local_78;
  uint local_6c;
  long local_68;
  undefined2 local_5e;
  undefined4 local_5c;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar13 = *param_1;
  DAT_0094ae78 = param_1;
  if (lVar13 == 0) {
    return;
  }
  bVar1 = false;
  bVar2 = false;
  bVar11 = false;
  bVar7 = false;
  bVar12 = false;
  uVar15 = 0;
  bVar6 = false;
  uVar16 = 0;
  uVar14 = 0;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar8 = false;
  bVar9 = false;
  bVar10 = false;
  do {
    switch(lVar13) {
    case 3:
      local_58 = param_1[1];
      bVar10 = true;
      lVar13 = param_1[2];
      break;
    case 5:
      local_50 = param_1[1];
      bVar9 = true;
      lVar13 = param_1[2];
      break;
    case 6:
      if (param_1[1] != 0) {
        bVar12 = true;
        local_88 = param_1[1];
      }
      lVar13 = param_1[2];
      break;
    case 0xb:
      uVar16 = uVar16 ^ *(uint *)(param_1 + 1);
      lVar13 = param_1[2];
      uVar14 = uVar14 | 1;
      break;
    case 0xc:
      uVar16 = uVar16 ^ *(uint *)(param_1 + 1);
      lVar13 = param_1[2];
      uVar14 = uVar14 | 2;
      break;
    case 0xd:
      uVar15 = uVar15 ^ *(uint *)(param_1 + 1);
      lVar13 = param_1[2];
      uVar14 = uVar14 | 4;
      break;
    case 0xe:
      uVar15 = uVar15 ^ *(uint *)(param_1 + 1);
      lVar13 = param_1[2];
      uVar14 = uVar14 | 8;
      break;
    case 0xf:
      local_48 = param_1[1];
      bVar8 = true;
      lVar13 = param_1[2];
      break;
    case 0x10:
      local_40 = param_1[1];
      bVar7 = true;
      lVar13 = param_1[2];
      break;
    case 0x11:
      local_5c = (undefined4)param_1[1];
      bVar11 = true;
      lVar13 = param_1[2];
      break;
    case 0x12:
      local_5e = (undefined2)param_1[1];
      bVar5 = true;
      lVar13 = param_1[2];
      break;
    case 0x17:
      local_6c = *(uint *)(param_1 + 1);
      bVar3 = true;
      uVar14 = 0xffffffff;
      lVar13 = param_1[2];
      break;
    case 0x19:
      local_78 = param_1[1];
      bVar2 = true;
      lVar13 = param_1[2];
      break;
    case 0x1a:
      local_38 = param_1[1];
      bVar6 = true;
      lVar13 = param_1[2];
      break;
    case 0x21:
      local_68 = param_1[1];
      bVar4 = true;
      lVar13 = param_1[2];
      break;
    case 0x33:
      local_80 = param_1[1];
      bVar1 = true;
    default:
      lVar13 = param_1[2];
    }
    param_1 = param_1 + 2;
  } while (lVar13 != 0);
  if (bVar1) {
    DAT_0094aea0 = local_80;
  }
  if (bVar2) {
    DAT_0093adf0 = local_78;
  }
  if (bVar3) {
    DAT_0094b100 = 1;
    DAT_0093ae30 = local_6c;
  }
  if (bVar4) {
    DAT_0094adf0 = local_68;
  }
  if (bVar5) {
    _DAT_0093eb0c = local_5e;
  }
  if (bVar6) {
    DAT_0094ae58 = local_38;
  }
  if (bVar7) {
    DAT_0094ae60 = local_40;
  }
  if (bVar8) {
    DAT_0094b0f0 = local_48;
  }
  if (bVar9) {
    DAT_0094ae68 = local_50;
  }
  if (bVar10) {
    DAT_0094ae70 = local_58;
  }
  if (bVar11) {
    DAT_0094ade0 = local_5c;
  }
  if (bVar12) {
    DAT_0093eb18 = local_88;
  }
  if (uVar14 == 0xf) {
    DAT_0094b100 = 1;
    DAT_0093ae30 = (uint)(uVar15 != 0 || uVar16 != 0);
  }
  return;
}

