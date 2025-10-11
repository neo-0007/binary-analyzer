
undefined8 ossl_punycode_decode(long param_1,ulong param_2,long param_3,uint *param_4)

{
  uint *__src;
  byte bVar1;
  uint uVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong local_60;
  uint local_4c;
  
  uVar2 = *param_4;
  if (param_2 == 0) {
    uVar11 = 0;
  }
  else {
    uVar12 = 0;
    uVar18 = 0;
    do {
      uVar8 = (ulong)((int)uVar18 + 1);
      if (*(char *)(param_1 + uVar18) == '-') {
        uVar12 = uVar18;
      }
      uVar18 = uVar8;
    } while (uVar8 < param_2);
    uVar11 = (uint)uVar12;
    if (uVar11 == 0) {
      uVar18 = 0;
      uVar8 = 0;
    }
    else {
      uVar18 = 0;
      if (uVar2 < uVar11) {
        return 0;
      }
      do {
        if (0x7f < (uint)(int)*(char *)(param_1 + uVar18)) {
          return 0;
        }
        *(int *)(param_3 + uVar18 * 4) = (int)*(char *)(param_1 + uVar18);
        uVar18 = uVar18 + 1;
      } while (uVar12 != uVar18);
      uVar8 = (ulong)(uVar11 + 1);
      uVar12 = uVar8;
      if (param_2 <= uVar8) goto LAB_0061aa3a;
    }
    local_60 = 0;
    uVar11 = 0x48;
    local_4c = 0x80;
    do {
      if (param_2 <= uVar8) {
        return 0;
      }
      uVar15 = 0x24;
      uVar9 = 1;
      uVar17 = -uVar11;
      uVar10 = local_60;
      while( true ) {
        uVar17 = uVar17 + 0x24;
        bVar1 = *(byte *)(param_1 + uVar8);
        uVar13 = (uint)bVar1;
        uVar16 = (uint)uVar10;
        if ((byte)(bVar1 + 0xbf) < 0x1a) {
          uVar13 = uVar13 - 0x41;
          if ((uint)(~uVar16 / uVar9) < uVar13) {
            return 0;
          }
        }
        else {
          if ((byte)(bVar1 + 0x9f) < 0x1a) {
            uVar13 = uVar13 - 0x61;
          }
          else {
            if (9 < (byte)(bVar1 - 0x30)) {
              return 0;
            }
            uVar13 = uVar13 - 0x16;
          }
          if ((uint)(~uVar16 / uVar9) < uVar13) {
            return 0;
          }
        }
        uVar8 = (ulong)((int)uVar12 + 1);
        uVar16 = uVar16 + uVar13 * (int)uVar9;
        uVar10 = CONCAT44(0,uVar16);
        uVar7 = 1;
        if ((uVar11 < uVar15) && (uVar7 = 0x1a, uVar15 < uVar11 + 0x1a)) {
          uVar7 = uVar17;
        }
        uVar12 = uVar8;
        if (uVar13 < uVar7) break;
        uVar6 = uVar9 * (0x24 - uVar7);
        uVar9 = uVar6 & 0xffffffff;
        if ((int)(uVar6 >> 0x20) != 0) {
          return 0;
        }
        uVar15 = uVar15 + 0x24;
        if (param_2 <= uVar8) {
          return 0;
        }
      }
      if ((int)local_60 == 0) {
        uVar9 = uVar10 / 700;
      }
      else {
        uVar9 = (ulong)(uVar16 - (int)local_60 >> 1);
      }
      iVar14 = 0;
      uVar17 = (int)(uVar9 / ((int)uVar18 + 1)) + (int)uVar9;
      uVar11 = uVar17;
      if (0x1c7 < uVar17) {
        do {
          iVar14 = iVar14 + 0x24;
          uVar17 = uVar11 / 0x23;
          bVar3 = 0x3e57 < uVar11;
          uVar11 = uVar17;
        } while (bVar3);
      }
      uVar9 = uVar18 + 1;
      uVar11 = (uVar17 * 0x24) / (uVar17 + 0x26) + iVar14;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar9;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar10;
      uVar10 = uVar10 % uVar9;
      if ((ulong)~local_4c < SUB168(auVar5 / auVar4,0)) {
        return 0;
      }
      local_4c = local_4c + SUB164(auVar5 / auVar4,0);
      if (uVar2 <= uVar18) {
        return 0;
      }
      __src = (uint *)(param_3 + uVar10 * 4);
      memmove((void *)(param_3 + 4 + uVar10 * 4),__src,(uVar18 - uVar10) * 4);
      *__src = local_4c;
      local_60 = (ulong)((int)uVar10 + 1);
      uVar18 = uVar9;
    } while (uVar8 < param_2);
    uVar11 = (uint)uVar9;
  }
LAB_0061aa3a:
  *param_4 = uVar11;
  return 1;
}

