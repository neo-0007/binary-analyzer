
undefined4
FUN_007b3d50(undefined8 param_1,long param_2,uint param_3,long *param_4,long *param_5,
            undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 *puVar15;
  char *pcVar16;
  undefined4 uVar17;
  uint uVar18;
  long in_FS_OFFSET;
  ulong local_128;
  undefined8 local_120;
  undefined1 *local_118;
  long *local_110;
  long *local_108;
  char *local_100;
  long local_f8;
  uint local_f0;
  uint local_ec;
  ulong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  ulong local_d0;
  undefined1 local_c8 [24];
  uint local_b0;
  ulong *puVar14;
  
  puVar13 = &local_128;
  puVar14 = &local_128;
  local_e8 = (ulong *)*param_4;
  if (local_e8 == (ulong *)0x0) {
    return 0xffffffff;
  }
  uVar6 = DAT_0094b410 + param_2 + 0x17;
  puVar3 = &local_128;
  while (puVar14 != (ulong *)((long)&local_128 - (uVar6 & 0xfffffffffffff000))) {
    puVar13 = (ulong *)((long)puVar3 + -0x1000);
    *(undefined8 *)((long)puVar3 + -8) = *(undefined8 *)((long)puVar3 + -8);
    puVar14 = (ulong *)((long)puVar3 + -0x1000);
    puVar3 = (ulong *)((long)puVar3 + -0x1000);
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar8 = -uVar6;
  puVar10 = (undefined1 *)((long)puVar13 + lVar8);
  if (uVar6 != 0) {
    *(undefined8 *)((long)puVar13 + -8) = *(undefined8 *)((long)puVar13 + -8);
  }
  local_ec = param_3 & 0x4000000;
  local_f0 = 0;
  uVar6 = (ulong)((long)puVar13 + lVar8 + 0xf) & 0xfffffffffffffff0;
  local_100 = (char *)0x0;
  local_110 = param_4;
  local_108 = param_5;
  local_e0 = param_6;
  local_d8 = param_1;
  local_d0 = param_2;
LAB_007b3e18:
  uVar12 = *local_e8;
  if (((DAT_0094b0e4 & 1) != 0) && (local_f8 = *(long *)(uVar12 + 8), (char *)local_f8 != local_100)
     ) {
    local_100 = *(char **)(uVar12 + 0x10);
    for (puVar15 = puVar10; puVar15 != puVar10 + -(DAT_0094b410 + 0xfU & 0xfffffffffffff000);
        puVar15 = puVar15 + -0x1000) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    uVar11 = (ulong)((uint)(DAT_0094b410 + 0xfU) & 0xff0);
    lVar8 = -uVar11;
    if (uVar11 != 0) {
      *(undefined8 *)(puVar15 + -8) = *(undefined8 *)(puVar15 + -8);
    }
    local_120 = CONCAT44(local_120._4_4_,DAT_0094b0e4) & 0xffffffff00000001;
    *(undefined8 *)(puVar15 + lVar8 + -8) = 0x7b417d;
    local_118 = puVar10;
    FUN_00787060(" search path=");
    uVar11 = *local_e8;
    iVar4 = (int)local_120;
    puVar13 = local_e8;
    while ((uVar11 != 0 &&
           (local_128 = uVar6, local_120 = uVar12, local_f8 == *(long *)(uVar11 + 8)))) {
      uVar7 = *(undefined8 *)(uVar11 + 0x20);
      uVar1 = *(undefined8 *)(uVar11 + 0x18);
      *(undefined8 *)(puVar15 + lVar8 + -8) = 0x7b41d0;
      puVar10 = (undefined1 *)thunk_FUN_00713820((long)puVar15 + lVar8,uVar1,uVar7);
      if (*(int *)(*puVar13 + 0x28) != 1) {
        *puVar10 = 0;
        pcVar16 = "%s";
        if (iVar4 == 0) {
          pcVar16 = ":%s";
        }
        iVar4 = 0;
        *(undefined8 *)(puVar15 + lVar8 + -8) = 0x7b41f3;
        FUN_00787110(pcVar16,(long)puVar15 + lVar8);
      }
      puVar3 = puVar13 + 1;
      puVar13 = puVar13 + 1;
      uVar12 = local_120;
      uVar6 = local_128;
      uVar11 = *puVar3;
    }
    if (local_100 == (char *)0x0) {
      *(undefined8 *)(puVar15 + lVar8 + -8) = 0x7b42a6;
      FUN_00787110("\t\t(%s)\n",local_f8);
    }
    else {
      if (*local_100 == '\0') {
        local_100 = "<main program>";
        if (*(char **)PTR_PTR_0093adf8 != (char *)0x0) {
          local_100 = *(char **)PTR_PTR_0093adf8;
        }
      }
      *(undefined8 *)(puVar15 + lVar8 + -8) = 0x7b426c;
      FUN_00787110("\t\t(%s from file %s)\n",local_f8,local_100);
    }
    local_100 = (char *)local_f8;
    puVar10 = local_118;
  }
  uVar7 = *(undefined8 *)(uVar12 + 0x20);
  uVar1 = *(undefined8 *)(uVar12 + 0x18);
  uVar18 = 0;
  lVar8 = 0;
  *(undefined8 *)(puVar10 + -8) = 0x7b3e47;
  uVar7 = thunk_FUN_00713820(uVar6,uVar1,uVar7);
  bVar2 = false;
  do {
    iVar4 = -1;
    while( true ) {
      if (bVar2) {
        if (iVar4 != -1) goto LAB_007b3ef4;
        if (((uVar18 != 0) && (*(int *)(in_FS_OFFSET + -0x58) != 2)) &&
           (*(int *)(in_FS_OFFSET + -0x58) != 0xd)) {
          return 0xffffffff;
        }
        local_e8 = local_e8 + 1;
        local_f0 = local_f0 | uVar18;
        if (*local_e8 == 0) {
          if (local_f0 != 0) {
            return 0xffffffff;
          }
          uVar17 = 0xffffffff;
          if ((int)local_110[1] != 0) {
            lVar8 = *local_110;
            local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
            *(undefined8 *)(puVar10 + -8) = 0x7b42f8;
            FUN_007104f0(lVar8);
            uVar17 = (undefined4)local_d0;
          }
          if (local_110 == &DAT_0093aec0) {
            return 0xffffffff;
          }
          if (local_110 == &DAT_0093aeb0) {
            return 0xffffffff;
          }
          *local_110 = -1;
          return uVar17;
        }
        goto LAB_007b3e18;
      }
      bVar2 = true;
      if (*(int *)(uVar12 + 0x28) == 1) break;
      *(undefined8 *)(puVar10 + -8) = 0x7b3e8c;
      lVar8 = thunk_FUN_00713820(uVar7,local_d8,local_d0);
      lVar8 = lVar8 - uVar6;
      if ((DAT_0094b0e4 & 1) != 0) {
        *(undefined8 *)(puVar10 + -8) = 0x7b40d9;
        FUN_00787060("  trying file=%s\n",uVar6);
      }
      *(undefined8 *)(puVar10 + -8) = 0x7b3eb2;
      iVar4 = FUN_007b3030(uVar6,local_e0,param_8);
      if (*(int *)(uVar12 + 0x28) == 0) {
        if (iVar4 == -1) {
          if ((param_7 == 0) ||
             (-1 < (char)(&PTR_DAT_0093eb60)[*(long *)(param_7 + 0x30) * 0x14][0x31d])) {
            *(undefined1 *)((uVar6 - 1) + (lVar8 - local_d0)) = 0;
            local_f8 = CONCAT44(local_f8._4_4_,0xffffffff);
            *(undefined8 *)(puVar10 + -8) = 0x7b407d;
            iVar4 = FUN_0076d7d0(uVar6,local_c8);
            iVar5 = 1;
            if ((iVar4 == 0) &&
               (iVar5 = ((local_b0 & 0xf000) == 0x4000) + 1, (local_b0 & 0xf000) == 0x4000)) {
              uVar18 = 1;
            }
            *(int *)(uVar12 + 0x28) = iVar5;
            iVar4 = (int)local_f8;
          }
          else {
            uVar18 = 1;
          }
        }
        else {
          *(undefined4 *)(uVar12 + 0x28) = 2;
          uVar18 = 1;
joined_r0x007b3fbe:
          if ((local_ec != 0) && (DAT_0093ae30 != 0)) {
            local_f8 = CONCAT44(local_f8._4_4_,iVar4);
            *(undefined8 *)(puVar10 + -8) = 0x7b3fe8;
            iVar4 = FUN_0076d7f0(iVar4,local_c8);
            if ((iVar4 != 0) || (iVar4 = (int)local_f8, (local_b0 & 0x800) == 0)) {
              *(undefined8 *)(puVar10 + -8) = 0x7b4008;
              FUN_0076e4b0((int)local_f8);
              *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
              iVar4 = -1;
            }
          }
        }
      }
      else {
        uVar18 = uVar18 | *(int *)(uVar12 + 0x28) != 1;
        if (iVar4 != -1) goto joined_r0x007b3fbe;
      }
      bVar2 = true;
      if (iVar4 != -1) {
LAB_007b3ef4:
        local_d0 = CONCAT44(local_d0._4_4_,iVar4);
        *(undefined8 *)(puVar10 + -8) = 0x7b3f03;
        lVar9 = FUN_007101b0(lVar8);
        *local_108 = lVar9;
        if (lVar9 == 0) {
          *(undefined8 *)(puVar10 + -8) = 0x7b4309;
          FUN_0076e4b0(local_d0 & 0xffffffff);
          return 0xffffffff;
        }
        *(undefined8 *)(puVar10 + -8) = 0x7b3f2b;
        thunk_FUN_00713a50(lVar9,uVar6,lVar8);
        return (undefined4)local_d0;
      }
    }
  } while( true );
}

