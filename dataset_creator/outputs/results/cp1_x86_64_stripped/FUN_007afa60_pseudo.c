
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_007afa60(long param_1)

{
  undefined8 *puVar1;
  short sVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  short *psVar14;
  undefined4 *puVar15;
  long lVar16;
  long in_FS_OFFSET;
  byte bVar17;
  undefined1 auVar18 [16];
  undefined8 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  bVar17 = 0;
  lVar11 = *(long *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  if (lVar11 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      while (sVar2 = **(short **)(*(long *)(param_1 + 8) + lVar8 * 8), sVar2 == 2) {
        lVar8 = lVar8 + 1;
        lVar12 = lVar12 + 0x10;
        if (lVar8 == lVar11) goto LAB_007afad1;
      }
      if (sVar2 != 10) {
                    /* WARNING: Subroutine does not return */
        FUN_006e2220("init->nameserver_list[i]->sa_family == AF_INET6","resolv_conf.c",0x17c,
                     "__resolv_conf_allocate");
      }
      lVar8 = lVar8 + 1;
      lVar12 = lVar12 + 0x1c;
    } while (lVar8 != lVar11);
  }
LAB_007afad1:
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x18);
    lVar16 = 0;
    puVar10 = puVar13 + lVar8;
    do {
      uVar3 = *puVar13;
      puVar13 = puVar13 + 1;
      lVar9 = thunk_FUN_007129d0(uVar3);
      lVar16 = lVar16 + 1 + lVar9;
    } while (puVar10 != puVar13);
    lVar12 = lVar12 + lVar16;
  }
  auVar18 = FUN_007c0320(lVar12 + (lVar11 + 9 + *(long *)(param_1 + 0x30) + lVar8) * 8,&local_60);
  local_58._8_8_ = auVar18._8_8_;
  puVar13 = (undefined8 *)((long)auVar18._0_8_ + 7U & 0xfffffffffffffff8);
  puVar10 = puVar13 + 9;
  if (((puVar13 < (undefined8 *)0xffffffffffffffb8 && puVar10 <= (ulong)local_58._8_8_) &&
      (auVar18._0_8_ <= puVar13)) && (local_58._0_8_ = puVar10, puVar13 != (undefined8 *)0x0)) {
    if (local_60 != puVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("conf == ptr","resolv_conf.c",0x194,"__resolv_conf_allocate");
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    *puVar13 = 1;
    puVar13[2] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar13[7] = uVar5;
    puVar13[8] = uVar6;
    lVar8 = FUN_007a2f60(local_58,8,8,uVar3);
    puVar13[1] = lVar8;
    puVar13[4] = *(undefined8 *)(param_1 + 0x20);
    lVar12 = FUN_007a2f60(local_58,8,8,*(undefined8 *)(param_1 + 0x20));
    lVar11 = *(long *)(param_1 + 0x10);
    puVar13[3] = lVar12;
    if (lVar11 != 0) {
      lVar16 = *(long *)(param_1 + 8);
      lVar9 = 0;
      do {
        while( true ) {
          psVar14 = *(short **)(lVar16 + lVar9 * 8);
          puVar10 = (undefined8 *)(local_58._0_8_ + 3 & 0xfffffffffffffffc);
          if (*psVar14 != 2) break;
          puVar1 = puVar10 + 2;
          if ((((undefined8 *)0xffffffffffffffef < puVar10) || (puVar10 < (ulong)local_58._0_8_)) ||
             ((ulong)local_58._8_8_ < puVar1)) {
            _SUB_00000000 = *(undefined8 *)psVar14;
            uRam0000000000000008 = *(undefined8 *)(psVar14 + 4);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar3 = *(undefined8 *)(psVar14 + 4);
          *puVar10 = *(undefined8 *)psVar14;
          puVar10[1] = uVar3;
          *(undefined8 **)(lVar8 + lVar9 * 8) = puVar10;
          lVar9 = lVar9 + 1;
          local_58._0_8_ = puVar1;
          if (lVar9 == lVar11) goto LAB_007afc8d;
        }
        puVar1 = (undefined8 *)((long)puVar10 + 0x1c);
        if ((((undefined8 *)0xffffffffffffffe3 < puVar10) || (puVar10 < (ulong)local_58._0_8_)) ||
           ((ulong)local_58._8_8_ < puVar1)) {
          puVar15 = (undefined4 *)0x0;
          for (lVar11 = 7; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar15 = *(undefined4 *)psVar14;
            psVar14 = psVar14 + (ulong)bVar17 * -4 + 2;
            puVar15 = puVar15 + (ulong)bVar17 * -2 + 1;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar3 = *(undefined8 *)(psVar14 + 4);
        *puVar10 = *(undefined8 *)psVar14;
        puVar10[1] = uVar3;
        puVar10[2] = *(undefined8 *)(psVar14 + 8);
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(psVar14 + 0xc);
        *(undefined8 **)(lVar8 + lVar9 * 8) = puVar10;
        lVar9 = lVar9 + 1;
        local_58._0_8_ = puVar1;
      } while (lVar9 != lVar11);
    }
LAB_007afc8d:
    puVar13[6] = *(undefined8 *)(param_1 + 0x30);
    lVar8 = FUN_007a2f60(local_58,8,4,*(undefined8 *)(param_1 + 0x30));
    auVar18._8_8_ = local_58._8_8_;
    auVar18._0_8_ = local_58._0_8_;
    lVar11 = *(long *)(param_1 + 0x30);
    puVar13[5] = lVar8;
    if (lVar11 != 0) {
      lVar16 = *(long *)(param_1 + 0x28);
      lVar9 = 0;
      do {
        *(undefined8 *)(lVar8 + lVar9 * 8) = *(undefined8 *)(lVar16 + lVar9 * 8);
        lVar9 = lVar9 + 1;
      } while (lVar9 != lVar11);
    }
    lVar11 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        local_58._8_8_ = auVar18._8_8_;
        local_58._0_8_ = auVar18._0_8_;
        uVar3 = local_58._0_8_;
        auVar7 = auVar18;
        auVar18 = FUN_007a2fc0(local_58._0_8_,local_58._8_8_,
                               *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar11 * 8));
        local_58._0_16_ = auVar7;
        local_58._8_8_ = auVar18._8_8_;
        if (auVar18._0_8_ == 0) {
          *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
          local_58._0_8_ = (undefined8 *)0x0;
          if (*(ulong *)(param_1 + 0x20) <= lVar11 + 1U) goto LAB_007afd33;
        }
        else {
          *(undefined8 *)(lVar12 + lVar11 * 8) = uVar3;
          if (*(ulong *)(param_1 + 0x20) <= lVar11 + 1U) goto LAB_007afd5b;
        }
        lVar11 = lVar11 + 1;
      } while( true );
    }
    if ((undefined8 *)local_58._0_8_ == (undefined8 *)0x0) {
LAB_007afd33:
                    /* WARNING: Subroutine does not return */
      FUN_006e2220("!alloc_buffer_has_failed (&buffer)","resolv_conf.c",0x1cc,
                   "__resolv_conf_allocate");
    }
  }
  else {
    auVar18._8_8_ = local_58._8_8_;
    auVar18._0_8_ = local_58._0_8_;
    puVar13 = (undefined8 *)0x0;
  }
LAB_007afd5b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_58._0_16_ = auVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return puVar13;
}

