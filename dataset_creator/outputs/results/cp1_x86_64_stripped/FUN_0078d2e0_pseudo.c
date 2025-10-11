
/* WARNING: Removing unreachable block (ram,0x0078d500) */
/* WARNING: Removing unreachable block (ram,0x0078d514) */
/* WARNING: Removing unreachable block (ram,0x0078d517) */

void FUN_0078d2e0(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  ulong uVar13;
  bool bVar14;
  long *plVar15;
  byte bVar16;
  byte bVar17;
  long in_FS_OFFSET;
  byte local_49;
  
  bVar8 = DAT_0094b0a0 & 3;
  bVar1 = DAT_0094b0a0 >> 2 & 3;
  bVar4 = bVar8 == 1 && bVar1 == 1;
  if (bVar4) {
    *(uint *)(in_FS_OFFSET + 0x48) = DAT_0094b0a4;
    return;
  }
  if ((DAT_0094b0a4 & 3) == 0) {
    return;
  }
  bVar17 = (byte)(DAT_0094b0a4 >> 1) & 1;
  local_49 = (byte)DAT_0094b0a4 & 1;
  uVar10 = bVar8 != 2 & DAT_0094b0a4;
  uVar12 = (uint)(bVar1 != 2) & DAT_0094b0a4 >> 1;
  bVar9 = (byte)uVar10;
  bVar11 = (byte)uVar12;
  bVar7 = bVar9 | bVar11;
  if (bVar7 != 0) {
    uVar2 = *(int *)(param_1 + 0x2c8) - 1;
    uVar3 = (ulong)uVar2;
    if (*(int *)(param_1 + 0x2c8) != 0) {
      lVar5 = *(long *)(param_1 + 0x3d0);
      uVar6 = (ulong)uVar2;
      if (bVar1 == 1) {
        plVar15 = (long *)(lVar5 + uVar6 * 8);
        bVar16 = 0;
        uVar6 = 0;
        uVar13 = 0;
        do {
          if ((*(byte *)(*plVar15 + 0x31c) & 8) == 0) {
            bVar9 = (byte)uVar10 & *(byte *)(*plVar15 + 0x324);
            uVar10 = (uint)bVar9;
            bVar14 = (bool)((bVar4 ^ 1U) & (local_49 ^ bVar9));
            if (bVar14 != false) {
              uVar13 = uVar3;
              bVar4 = bVar14;
            }
            if (bVar17 != bVar11) {
              uVar6 = uVar3;
              bVar16 = bVar7;
            }
          }
          bVar9 = (byte)uVar10;
          uVar12 = (int)uVar3 - 1;
          uVar3 = (ulong)uVar12;
          plVar15 = plVar15 + -1;
        } while (uVar12 != 0xffffffff);
      }
      else if (bVar8 == 1) {
        plVar15 = (long *)(lVar5 + uVar6 * 8);
        bVar16 = 0;
        uVar6 = 0;
        uVar13 = 0;
        do {
          if ((*(byte *)(*plVar15 + 0x31c) & 8) == 0) {
            bVar14 = (bool)((bVar4 ^ 1U) & (local_49 ^ bVar9));
            if (bVar14 != false) {
              bVar4 = bVar14;
            }
            if (bVar14 != false) {
              uVar13 = uVar3;
            }
            uVar12 = uVar12 & *(uint *)(*plVar15 + 0x324) >> 1;
            if (bVar17 != (byte)uVar12) {
              uVar6 = uVar3;
              bVar16 = bVar7;
            }
          }
          bVar11 = (byte)uVar12;
          uVar10 = (int)uVar3 - 1;
          uVar3 = (ulong)uVar10;
          plVar15 = plVar15 + -1;
        } while (uVar10 != 0xffffffff);
      }
      else {
        plVar15 = (long *)(lVar5 + uVar6 * 8);
        bVar16 = 0;
        uVar6 = 0;
        uVar13 = 0;
        do {
          if ((*(byte *)(*plVar15 + 0x31c) & 8) == 0) {
            uVar2 = *(uint *)(*plVar15 + 0x324);
            uVar10 = uVar10 & uVar2;
            bVar14 = (bool)((local_49 ^ (byte)uVar10) & (bVar4 ^ 1U));
            if (bVar14 != false) {
              uVar13 = uVar3;
              bVar4 = bVar14;
            }
            uVar12 = uVar12 & uVar2 >> 1;
            if (bVar17 != (byte)uVar12) {
              uVar6 = uVar3;
              bVar16 = bVar7;
            }
          }
          bVar11 = (byte)uVar12;
          bVar9 = (byte)uVar10;
          uVar2 = (int)uVar3 - 1;
          uVar3 = (ulong)uVar2;
          plVar15 = plVar15 + -1;
        } while (uVar2 != 0xffffffff);
      }
      if ((local_49 == bVar9) && (bVar17 == bVar11)) {
        return;
      }
      if ((bVar8 != 3) && (bVar4 != false)) {
                    /* WARNING: Subroutine does not return */
        FUN_0078db10(0,*(undefined8 *)(*(long *)(lVar5 + uVar13 * 8) + 8),"dlopen",
                     "rebuild shared object with IBT support enabled");
      }
      if (bVar1 != 3) {
        if (bVar16 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0078db10(0,*(undefined8 *)(*(long *)(lVar5 + uVar6 * 8) + 8),"dlopen",
                       "rebuild shared object with SHSTK support enabled");
        }
        if (bVar8 != 3) {
          return;
        }
      }
      goto LAB_0078d4af;
    }
    local_49 = local_49 ^ bVar9;
    bVar17 = bVar17 ^ bVar11;
  }
  if (((bVar17 == 0) && (local_49 == 0)) || ((bVar1 != 3 && (bVar8 != 3)))) {
    return;
  }
  uVar6 = 0;
  uVar13 = 0;
LAB_0078d4af:
  syscall();
  if (bVar4 == false) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x3d0) + uVar6 * 8);
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x3d0) + uVar13 * 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0078db10(0xffffff62,*(undefined8 *)(lVar5 + 8),"dlopen","can\'t disable CET");
}

