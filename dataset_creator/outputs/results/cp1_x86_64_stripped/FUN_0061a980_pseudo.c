
undefined8 FUN_0061a980(long param_1,ulong param_2,long param_3,uint *param_4)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  ulong local_60;
  uint local_4c;
  
  uVar3 = *param_4;
  if (param_2 == 0) {
    uVar12 = 0;
  }
  else {
    uVar13 = 0;
    uVar19 = 0;
    do {
      uVar9 = (ulong)((int)uVar19 + 1);
      if (*(char *)(param_1 + uVar19) == '-') {
        uVar13 = uVar19;
      }
      uVar19 = uVar9;
    } while (uVar9 < param_2);
    uVar12 = (uint)uVar13;
    if (uVar12 == 0) {
      uVar19 = 0;
      uVar9 = 0;
    }
    else {
      uVar19 = 0;
      if (uVar3 < uVar12) {
        return 0;
      }
      do {
        if (0x7f < (uint)(int)*(char *)(param_1 + uVar19)) {
          return 0;
        }
        *(int *)(param_3 + uVar19 * 4) = (int)*(char *)(param_1 + uVar19);
        uVar19 = uVar19 + 1;
      } while (uVar13 != uVar19);
      uVar9 = (ulong)(uVar12 + 1);
      uVar13 = uVar9;
      if (param_2 <= uVar9) goto LAB_0061ac1a;
    }
    local_60 = 0;
    uVar12 = 0x48;
    local_4c = 0x80;
    do {
      if (param_2 <= uVar9) {
        return 0;
      }
      uVar16 = 0x24;
      uVar10 = 1;
      uVar18 = -uVar12;
      uVar11 = local_60;
      while( true ) {
        uVar18 = uVar18 + 0x24;
        bVar2 = *(byte *)(param_1 + uVar9);
        uVar14 = (uint)bVar2;
        uVar17 = (uint)uVar11;
        if ((byte)(bVar2 + 0xbf) < 0x1a) {
          uVar14 = uVar14 - 0x41;
          if ((uint)(~uVar17 / uVar10) < uVar14) {
            return 0;
          }
        }
        else {
          if ((byte)(bVar2 + 0x9f) < 0x1a) {
            uVar14 = uVar14 - 0x61;
          }
          else {
            if (9 < (byte)(bVar2 - 0x30)) {
              return 0;
            }
            uVar14 = uVar14 - 0x16;
          }
          if ((uint)(~uVar17 / uVar10) < uVar14) {
            return 0;
          }
        }
        uVar9 = (ulong)((int)uVar13 + 1);
        uVar17 = uVar17 + uVar14 * (int)uVar10;
        uVar11 = CONCAT44(0,uVar17);
        uVar8 = 1;
        if ((uVar12 < uVar16) && (uVar8 = 0x1a, uVar16 < uVar12 + 0x1a)) {
          uVar8 = uVar18;
        }
        uVar13 = uVar9;
        if (uVar14 < uVar8) break;
        uVar7 = uVar10 * (0x24 - uVar8);
        uVar10 = uVar7 & 0xffffffff;
        if ((int)(uVar7 >> 0x20) != 0) {
          return 0;
        }
        uVar16 = uVar16 + 0x24;
        if (param_2 <= uVar9) {
          return 0;
        }
      }
      if ((int)local_60 == 0) {
        uVar10 = uVar11 / 700;
      }
      else {
        uVar10 = (ulong)(uVar17 - (int)local_60 >> 1);
      }
      iVar15 = 0;
      uVar18 = (int)(uVar10 / ((int)uVar19 + 1)) + (int)uVar10;
      uVar12 = uVar18;
      if (0x1c7 < uVar18) {
        do {
          iVar15 = iVar15 + 0x24;
          uVar18 = uVar12 / 0x23;
          bVar4 = 0x3e57 < uVar12;
          uVar12 = uVar18;
        } while (bVar4);
      }
      uVar10 = uVar19 + 1;
      uVar12 = (uVar18 * 0x24) / (uVar18 + 0x26) + iVar15;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar11;
      uVar11 = uVar11 % uVar10;
      if ((ulong)~local_4c < SUB168(auVar6 / auVar5,0)) {
        return 0;
      }
      local_4c = local_4c + SUB164(auVar6 / auVar5,0);
      if (uVar3 <= uVar19) {
        return 0;
      }
      puVar1 = (uint *)(param_3 + uVar11 * 4);
      thunk_FUN_00713610(param_3 + 4 + uVar11 * 4,puVar1,(uVar19 - uVar11) * 4);
      *puVar1 = local_4c;
      local_60 = (ulong)((int)uVar11 + 1);
      uVar19 = uVar10;
    } while (uVar9 < param_2);
    uVar12 = (uint)uVar10;
  }
LAB_0061ac1a:
  *param_4 = uVar12;
  return 1;
}

