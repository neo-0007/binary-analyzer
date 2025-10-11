
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * __resolv_conf_allocate(long param_1)

{
  undefined8 *puVar1;
  short sVar2;
  char *__s;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lVar8;
  size_t sVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  short *psVar15;
  undefined4 *puVar16;
  long lVar17;
  long in_FS_OFFSET;
  byte bVar18;
  undefined1 auVar19 [16];
  undefined8 *local_60;
  undefined1 local_58 [24];
  long local_40;
  
  bVar18 = 0;
  lVar11 = *(long *)(param_1 + 0x10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = 0;
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    do {
      while (sVar2 = **(short **)(*(long *)(param_1 + 8) + lVar8 * 8), sVar2 != 2) {
        if (sVar2 != 10) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("init->nameserver_list[i]->sa_family == AF_INET6","resolv_conf.c",0x17c,
                        "__resolv_conf_allocate");
        }
        lVar8 = lVar8 + 1;
        lVar13 = lVar13 + 0x1c;
        if (lVar8 == lVar11) goto LAB_007a6191;
      }
      lVar8 = lVar8 + 1;
      lVar13 = lVar13 + 0x10;
    } while (lVar8 != lVar11);
  }
LAB_007a6191:
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x18);
    lVar17 = 0;
    puVar10 = puVar14 + lVar8;
    do {
      __s = (char *)*puVar14;
      puVar14 = puVar14 + 1;
      sVar9 = strlen(__s);
      lVar17 = lVar17 + 1 + sVar9;
    } while (puVar10 != puVar14);
    lVar13 = lVar13 + lVar17;
  }
  auVar19 = __libc_alloc_buffer_allocate
                      (lVar13 + (lVar11 + 9 + *(long *)(param_1 + 0x30) + lVar8) * 8,&local_60);
  local_58._8_8_ = auVar19._8_8_;
  puVar14 = (undefined8 *)((long)auVar19._0_8_ + 7U & 0xfffffffffffffff8);
  puVar10 = puVar14 + 9;
  if (((puVar14 < (undefined8 *)0xffffffffffffffb8 && puVar10 <= (ulong)local_58._8_8_) &&
      (auVar19._0_8_ <= puVar14)) && (local_58._0_8_ = puVar10, puVar14 != (undefined8 *)0x0)) {
    if (local_60 != puVar14) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("conf == ptr","resolv_conf.c",0x194,"__resolv_conf_allocate");
    }
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    *puVar14 = 1;
    puVar14[2] = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    puVar14[7] = uVar5;
    puVar14[8] = uVar6;
    lVar8 = __libc_alloc_buffer_alloc_array(local_58,8,8,uVar3);
    puVar14[1] = lVar8;
    puVar14[4] = *(undefined8 *)(param_1 + 0x20);
    lVar13 = __libc_alloc_buffer_alloc_array(local_58,8,8,*(undefined8 *)(param_1 + 0x20));
    lVar11 = *(long *)(param_1 + 0x10);
    puVar14[3] = lVar13;
    if (lVar11 != 0) {
      lVar17 = *(long *)(param_1 + 8);
      lVar12 = 0;
      do {
        while( true ) {
          psVar15 = *(short **)(lVar17 + lVar12 * 8);
          puVar10 = (undefined8 *)(local_58._0_8_ + 3 & 0xfffffffffffffffc);
          if (*psVar15 != 2) break;
          puVar1 = puVar10 + 2;
          if ((((undefined8 *)0xffffffffffffffef < puVar10) || (puVar10 < (ulong)local_58._0_8_)) ||
             ((ulong)local_58._8_8_ < puVar1)) {
            _SUB_00000000 = *(undefined8 *)psVar15;
            uRam0000000000000008 = *(undefined8 *)(psVar15 + 4);
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar3 = *(undefined8 *)(psVar15 + 4);
          *puVar10 = *(undefined8 *)psVar15;
          puVar10[1] = uVar3;
          *(undefined8 **)(lVar8 + lVar12 * 8) = puVar10;
          lVar12 = lVar12 + 1;
          local_58._0_8_ = puVar1;
          if (lVar12 == lVar11) goto LAB_007a634d;
        }
        puVar1 = (undefined8 *)((long)puVar10 + 0x1c);
        if ((((undefined8 *)0xffffffffffffffe3 < puVar10) || (puVar10 < (ulong)local_58._0_8_)) ||
           ((ulong)local_58._8_8_ < puVar1)) {
          puVar16 = (undefined4 *)0x0;
          for (lVar11 = 7; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar16 = *(undefined4 *)psVar15;
            psVar15 = psVar15 + (ulong)bVar18 * -4 + 2;
            puVar16 = puVar16 + (ulong)bVar18 * -2 + 1;
          }
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        uVar3 = *(undefined8 *)(psVar15 + 4);
        *puVar10 = *(undefined8 *)psVar15;
        puVar10[1] = uVar3;
        puVar10[2] = *(undefined8 *)(psVar15 + 8);
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(psVar15 + 0xc);
        *(undefined8 **)(lVar8 + lVar12 * 8) = puVar10;
        lVar12 = lVar12 + 1;
        local_58._0_8_ = puVar1;
      } while (lVar12 != lVar11);
    }
LAB_007a634d:
    puVar14[6] = *(undefined8 *)(param_1 + 0x30);
    lVar8 = __libc_alloc_buffer_alloc_array(local_58,8,4,*(undefined8 *)(param_1 + 0x30));
    auVar19._8_8_ = local_58._8_8_;
    auVar19._0_8_ = local_58._0_8_;
    lVar11 = *(long *)(param_1 + 0x30);
    puVar14[5] = lVar8;
    if (lVar11 != 0) {
      lVar17 = *(long *)(param_1 + 0x28);
      lVar12 = 0;
      do {
        *(undefined8 *)(lVar8 + lVar12 * 8) = *(undefined8 *)(lVar17 + lVar12 * 8);
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar11);
    }
    lVar11 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      do {
        local_58._8_8_ = auVar19._8_8_;
        local_58._0_8_ = auVar19._0_8_;
        uVar3 = local_58._0_8_;
        auVar7 = auVar19;
        auVar19 = __libc_alloc_buffer_copy_string
                            (local_58._0_8_,local_58._8_8_,
                             *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar11 * 8));
        local_58._0_16_ = auVar7;
        local_58._8_8_ = auVar19._8_8_;
        if (auVar19._0_8_ == 0) {
          *(undefined8 *)(lVar13 + lVar11 * 8) = 0;
          local_58._0_8_ = (undefined8 *)0x0;
          if (*(ulong *)(param_1 + 0x20) <= lVar11 + 1U) goto LAB_007a63f3;
        }
        else {
          *(undefined8 *)(lVar13 + lVar11 * 8) = uVar3;
          if (*(ulong *)(param_1 + 0x20) <= lVar11 + 1U) goto LAB_007a641b;
        }
        lVar11 = lVar11 + 1;
      } while( true );
    }
    if ((undefined8 *)local_58._0_8_ == (undefined8 *)0x0) {
LAB_007a63f3:
                    /* WARNING: Subroutine does not return */
      __assert_fail("!alloc_buffer_has_failed (&buffer)","resolv_conf.c",0x1cc,
                    "__resolv_conf_allocate");
    }
  }
  else {
    auVar19._8_8_ = local_58._8_8_;
    auVar19._0_8_ = local_58._0_8_;
    puVar14 = (undefined8 *)0x0;
  }
LAB_007a641b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    local_58._0_16_ = auVar19;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return puVar14;
}

