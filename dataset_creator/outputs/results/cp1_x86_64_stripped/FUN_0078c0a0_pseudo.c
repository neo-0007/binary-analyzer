
undefined8 FUN_0078c0a0(undefined8 param_1)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  long *plVar17;
  int *piVar18;
  int iVar19;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  uint local_4c;
  ulong local_40 [2];
  ulong *puVar12;
  
  puVar12 = &local_68;
  puVar11 = &local_68;
  if (((byte)DAT_0094b0e4 & 1) != 0) {
    FUN_00787060(" search cache=%s\n","/etc/ld.so.cache");
  }
  if (DAT_0094adc8 == (long *)0x0) {
    plVar8 = (long *)FUN_007b9350("/etc/ld.so.cache",&DAT_0094adb8,1);
    if (plVar8 == (long *)0xffffffffffffffff) {
      DAT_0094adc8 = (long *)0xffffffffffffffff;
      return 0;
    }
    if (DAT_0094adb8 < 0x31) {
      if (DAT_0094adb8 < 0x11) goto LAB_0078c573;
LAB_0078c560:
      if (((*plVar8 != 0x2e312d6f732e646c) || ((short)plVar8[1] != 0x2e37)) ||
         ((*(char *)((long)plVar8 + 10) != '0' ||
          ((DAT_0094adb8 - 0x10) / 0xc < (ulong)*(uint *)((long)plVar8 + 0xc))))) {
LAB_0078c573:
        FUN_0076f080();
        DAT_0094adc8 = (long *)0xffffffffffffffff;
        return 0;
      }
      uVar9 = (ulong)*(uint *)((long)plVar8 + 0xc) * 0xc + 0x17 & 0xfffffffffffffff8;
      plVar17 = (long *)((long)plVar8 + uVar9);
      if (((DAT_0094adb8 < uVar9 + 0x30) ||
          (plVar17[1] != 0x686361632e6f732e || *plVar17 != 0x646c2d6362696c67)) ||
         ((int)plVar17[2] != 0x312e3165)) {
        DAT_0094adc0 = (long *)0xffffffffffffffff;
        plVar17 = DAT_0094adc0;
      }
      else if ((*(byte *)((long)plVar17 + 0x1c) != 0) &&
              ((*(byte *)((long)plVar17 + 0x1c) & 3) != 2)) {
        DAT_0094adc8 = (long *)0xffffffffffffffff;
        DAT_0094adc0 = (long *)0xffffffffffffffff;
        FUN_0076f080();
        if (DAT_0094adc8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_006e2220("cache != NULL","dl-cache.c",0x1e7,"_dl_load_cache_lookup");
        }
        goto LAB_0078c0d5;
      }
    }
    else {
      if (((plVar8[1] != 0x686361632e6f732e || *plVar8 != 0x646c2d6362696c67) ||
          ((int)plVar8[2] != 0x312e3165)) ||
         ((DAT_0094adb8 - 0x30) / 0x18 < (ulong)*(uint *)((long)plVar8 + 0x14))) goto LAB_0078c560;
      plVar17 = plVar8;
      if ((*(byte *)((long)plVar8 + 0x1c) != 0) && ((*(byte *)((long)plVar8 + 0x1c) & 3) != 2)) {
        FUN_0076f080();
        DAT_0094adc0 = (long *)0xffffffffffffffff;
        DAT_0094adc8 = (long *)0xffffffffffffffff;
        return 0;
      }
    }
  }
  else {
LAB_0078c0d5:
    plVar17 = DAT_0094adc0;
    plVar8 = DAT_0094adc8;
    if (DAT_0094adc8 == (long *)0xffffffffffffffff) {
      return 0;
    }
  }
  DAT_0094adc8 = plVar8;
  DAT_0094adc0 = plVar17;
  plVar17 = DAT_0094adc8;
  plVar8 = DAT_0094adc0;
  local_4c = (uint)DAT_0094adb8;
  if (DAT_0094adc0 != (long *)0xffffffffffffffff) {
    iVar19 = *(int *)((long)DAT_0094adc0 + 0x14);
    if (DAT_0094b0f0 == 0) {
      local_60 = 0xffffffffffffffff;
    }
    else {
      local_58 = DAT_0094b0f0;
      iVar3 = thunk_FUN_00712780(DAT_0094b0f0,"haswell");
      local_60 = 0x4000000000000;
      if (iVar3 != 0) {
        iVar3 = thunk_FUN_00712780(local_58,"xeon_phi");
        local_60 = 0x8000000000000;
        if (iVar3 != 0) {
          local_60 = 0xffffffffffffffff;
        }
      }
    }
    FUN_0078d220(0x13,local_40,0);
    local_68 = local_40[0];
    iVar19 = iVar19 + -1;
    if (iVar19 < 0) {
      return 0;
    }
    iVar3 = 0;
    while( true ) {
      local_58 = CONCAT44(local_58._4_4_,iVar3);
      uVar14 = iVar3 + iVar19 >> 1;
      uVar9 = (ulong)uVar14;
      lVar15 = (long)(int)uVar14 * 0x18;
      uVar14 = *(uint *)((long)plVar8 + lVar15 + 0x34);
      if (local_4c <= uVar14) {
        return 0;
      }
      iVar3 = FUN_0078bfc0(param_1,(ulong)uVar14 + (long)plVar8);
      if (iVar3 == 0) break;
      if (iVar3 < 0) {
        iVar3 = (int)uVar9 + 1;
        if (iVar19 < iVar3) {
          return 0;
        }
      }
      else {
        iVar19 = (int)uVar9 + -1;
        iVar3 = (int)local_58;
        if (iVar19 < (int)local_58) {
          return 0;
        }
      }
    }
    puVar16 = (uint *)((long)plVar8 + lVar15 + 0x1c);
    uVar5 = uVar9;
    do {
      uVar10 = uVar5 & 0xffffffff;
      iVar3 = (int)uVar5;
      if (iVar3 == 0) break;
      uVar14 = *puVar16;
      local_58 = CONCAT44(local_58._4_4_,iVar3 + -1);
      if (local_4c <= uVar14) break;
      puVar16 = puVar16 + -6;
      iVar4 = FUN_0078bfc0(param_1,(ulong)uVar14 + (long)plVar8);
      uVar5 = local_58;
    } while (iVar4 == 0);
    local_58 = ~(local_68 & DAT_0094ae60 | 0x800f000000000000);
    local_68 = CONCAT44(local_68._4_4_,DAT_0094ae98);
    plVar17 = plVar8 + (long)iVar3 * 3 + 6;
    if (DAT_0094ae98 == 0) {
      do {
        if ((int)uVar9 < (int)uVar10) {
          if (local_4c <= *(uint *)((long)plVar17 + 4)) {
            return 0;
          }
          iVar3 = FUN_0078bfc0(param_1,(ulong)*(uint *)((long)plVar17 + 4) + (long)plVar8);
          if (iVar3 != 0) {
            return 0;
          }
        }
        if ((((int)*plVar17 == 0x303) &&
            (uVar5 = (ulong)*(uint *)(plVar17 + 1), *(uint *)(plVar17 + 1) < local_4c)) &&
           (((local_58 & plVar17[2]) == 0 &&
            ((uVar13 = plVar17[2] & 0xf000000000000, uVar13 == 0 || (local_60 == uVar13))))))
        goto LAB_0078c420;
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar14;
        plVar17 = plVar17 + 3;
      } while ((int)uVar14 <= iVar19);
    }
    else {
      do {
        if ((int)uVar9 < (int)uVar10) {
          if (local_4c <= *(uint *)((long)plVar17 + 4)) {
            return 0;
          }
          iVar3 = FUN_0078bfc0(param_1,(ulong)*(uint *)((long)plVar17 + 4) + (long)plVar8);
          if (iVar3 != 0) {
            return 0;
          }
        }
        if ((((((int)*plVar17 == 0x303) &&
              (uVar5 = (ulong)*(uint *)(plVar17 + 1), *(uint *)(plVar17 + 1) < local_4c)) &&
             ((local_58 & plVar17[2]) == 0)) && (*(uint *)((long)plVar17 + 0xc) <= (uint)local_68))
           && ((uVar13 = plVar17[2] & 0xf000000000000, uVar13 == local_60 || (uVar13 == 0))))
        goto LAB_0078c420;
        uVar14 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar14;
        plVar17 = plVar17 + 3;
      } while ((int)uVar14 <= iVar19);
    }
    return 0;
  }
  uVar14 = *(uint *)((long)DAT_0094adc8 + 0xc);
  lVar15 = (ulong)uVar14 * 0xc + 0x10;
  local_4c = local_4c - (int)lVar15;
  FUN_0078d220(0x13,local_40,0);
  iVar19 = uVar14 - 1;
  if (iVar19 < 0) {
    return 0;
  }
  iVar3 = 0;
  while( true ) {
    local_60 = CONCAT44(local_60._4_4_,iVar3);
    uVar14 = iVar3 + iVar19 >> 1;
    uVar9 = (ulong)uVar14;
    local_58 = (long)(int)uVar14 * 0xc;
    uVar14 = *(uint *)((long)plVar17 + local_58 + 0x14);
    if (local_4c <= uVar14) {
      return 0;
    }
    iVar3 = FUN_0078bfc0(param_1,(long)plVar17 + (ulong)uVar14 + lVar15);
    if (iVar3 == 0) break;
    if (iVar3 < 0) {
      iVar3 = (int)uVar9 + 1;
      if (iVar19 < iVar3) {
        return 0;
      }
    }
    else {
      iVar19 = (int)uVar9 + -1;
      iVar3 = (int)local_60;
      if (iVar19 < (int)local_60) {
        return 0;
      }
    }
  }
  puVar16 = (uint *)((long)plVar17 + local_58 + 8);
  uVar5 = uVar9;
  do {
    uVar10 = uVar5 & 0xffffffff;
    iVar3 = (int)uVar5;
    if (iVar3 == 0) break;
    uVar14 = *puVar16;
    local_58 = CONCAT44(local_58._4_4_,iVar3 + -1);
    if (local_4c <= uVar14) break;
    local_60 = CONCAT44(local_60._4_4_,iVar3);
    puVar16 = puVar16 + -3;
    iVar3 = FUN_0078bfc0(param_1,(long)plVar17 + (ulong)uVar14 + lVar15);
    uVar10 = local_60 & 0xffffffff;
    uVar5 = local_58;
  } while (iVar3 == 0);
  piVar18 = (int *)((long)plVar17 + (long)(int)uVar10 * 0xc + 0x10);
  while( true ) {
    iVar3 = (int)uVar10;
    if ((int)uVar9 < iVar3) {
      local_58 = CONCAT44(local_58._4_4_,iVar3);
      if (local_4c <= (uint)piVar18[1]) {
        return 0;
      }
      iVar4 = FUN_0078bfc0(param_1,(long)plVar17 + (ulong)(uint)piVar18[1] + lVar15);
      iVar3 = (int)local_58;
      if (iVar4 != 0) {
        return 0;
      }
    }
    if ((*piVar18 == 0x303) && ((uint)piVar18[2] < local_4c)) break;
    uVar10 = (ulong)(iVar3 + 1U);
    piVar18 = piVar18 + 3;
    if (iVar19 < (int)(iVar3 + 1U)) {
      return 0;
    }
  }
  lVar15 = (long)plVar17 + (ulong)(uint)piVar18[2] + lVar15;
joined_r0x0078c634:
  if (((byte)DAT_0094b0e4 & 1) != 0) {
    FUN_00787060("  trying file=%s\n",lVar15);
  }
  lVar6 = thunk_FUN_007129d0(lVar15);
  puVar2 = &local_68;
  while (puVar12 != (ulong *)((long)&local_68 - (lVar6 + 0x18U & 0xfffffffffffff000))) {
    puVar11 = (ulong *)((long)puVar2 + -0x1000);
    *(undefined8 *)((long)puVar2 + -8) = *(undefined8 *)((long)puVar2 + -8);
    puVar12 = (ulong *)((long)puVar2 + -0x1000);
    puVar2 = (ulong *)((long)puVar2 + -0x1000);
  }
  uVar9 = (ulong)((uint)(lVar6 + 0x18U) & 0xff0);
  lVar1 = -uVar9;
  if (uVar9 != 0) {
    *(undefined8 *)((long)puVar11 + -8) = *(undefined8 *)((long)puVar11 + -8);
  }
  *(undefined8 *)((long)puVar11 + lVar1 + -8) = 0x78c493;
  uVar7 = thunk_FUN_00713a50((ulong)((long)puVar11 + lVar1 + 0xf) & 0xfffffffffffffff0,lVar15,
                             lVar6 + 1);
  *(undefined8 *)((long)puVar11 + lVar1 + -8) = 0x78c49b;
  uVar7 = FUN_007128a0(uVar7);
  return uVar7;
LAB_0078c420:
  lVar15 = (long)plVar8 + uVar5;
  goto joined_r0x0078c634;
}

