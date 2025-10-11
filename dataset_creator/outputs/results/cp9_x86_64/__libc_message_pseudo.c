
/* WARNING: Removing unreachable block (ram,0x006f94ca) */

void __libc_message(uint param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  void *__src;
  long lVar4;
  uint *__addr;
  int iVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  char *pcVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  size_t sVar19;
  undefined8 *puVar20;
  char cVar21;
  ulong uVar22;
  int iVar23;
  long in_FS_OFFSET;
  bool bVar24;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  char *local_90;
  uint local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *puVar15;
  
  param_1 = param_1 & 1;
  puVar17 = auStack_98;
  puVar16 = auStack_98;
  cVar11 = *param_2;
  local_70 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined8 *)&stack0x00000008;
  local_88 = 0x10;
  local_78 = local_68;
  local_58 = param_3;
  local_50 = param_4;
  local_48 = param_5;
  local_40 = param_6;
  iVar5 = 0;
  cVar21 = cVar11;
  puVar7 = (undefined8 *)0x0;
  puVar6 = auStack_98;
  pcVar12 = param_2;
  if (cVar11 == '\0') {
    puVar10 = __abort_msg;
    if (param_1 == 0) {
LAB_006f96b4:
      if (local_70 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar17 + -8) = &UNK_006f96f3;
        __stack_chk_fail_local(param_1,param_2);
      }
      return;
    }
  }
  else {
LAB_006f94a5:
    do {
      puVar13 = puVar6;
      puVar20 = puVar7;
      iVar23 = iVar5;
      if ((cVar11 != '%') || (param_2[1] != 's')) {
        *(undefined8 *)(puVar13 + -8) = 0x6f949e;
        param_2 = strchrnul(param_2 + 1,0x25);
        cVar11 = *param_2;
        iVar5 = iVar23;
        puVar7 = puVar20;
        puVar6 = puVar13;
        if (cVar11 != '\0') goto LAB_006f94a5;
      }
      if ((cVar21 == '%') && (pcVar12[1] == 's')) {
        if (local_88 < 0x30) {
          uVar22 = (ulong)local_88;
          local_88 = local_88 + 8;
          puVar7 = (undefined8 *)(local_78 + uVar22);
        }
        else {
          puVar7 = local_80;
          local_80 = local_80 + 1;
        }
        pcVar8 = (char *)*puVar7;
        param_2 = pcVar12 + 2;
        local_90 = pcVar8;
        *(undefined8 *)(puVar13 + -8) = 0x6f954c;
        sVar19 = strlen(pcVar8);
        pcVar8 = local_90;
      }
      else {
        sVar19 = (long)param_2 - (long)pcVar12;
        pcVar8 = pcVar12;
      }
      puVar14 = puVar13 + -0x20;
      puVar15 = puVar13 + -0x20;
      *(undefined8 *)(puVar13 + -8) = *(undefined8 *)(puVar13 + -8);
      puVar7 = (undefined8 *)((ulong)(puVar13 + -0x11) & 0xfffffffffffffff0);
      *puVar7 = pcVar8;
      puVar7[1] = sVar19;
      puVar7[2] = puVar20;
      cVar11 = *param_2;
      iVar5 = iVar23 + 1;
      cVar21 = cVar11;
      puVar6 = puVar13 + -0x20;
      pcVar12 = param_2;
    } while (cVar11 != '\0');
    lVar18 = (long)(iVar23 + 1) * 0x10;
    puVar16 = puVar13 + -0x20;
    while (puVar15 != puVar13 + (-0x20 - (lVar18 + 0x10U & 0xfffffffffffff000))) {
      puVar14 = puVar16 + -0x1000;
      *(undefined8 *)(puVar16 + -8) = *(undefined8 *)(puVar16 + -8);
      puVar15 = puVar16 + -0x1000;
      puVar16 = puVar16 + -0x1000;
    }
    uVar22 = (ulong)((uint)(lVar18 + 0x10U) & 0xfff);
    lVar4 = -uVar22;
    puVar17 = puVar14 + lVar4;
    if (uVar22 != 0) {
      *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
    }
    param_2 = (char *)((ulong)(puVar14 + lVar4 + 0xf) & 0xfffffffffffffff0);
    pcVar12 = param_2 + lVar18 + -0x10;
    *(char **)pcVar12 = pcVar8;
    *(size_t *)(pcVar12 + 8) = sVar19;
    if (iVar23 != 0) {
      do {
        lVar2 = puVar20[1];
        uVar3 = *puVar20;
        pcVar8 = pcVar12 + -0x10;
        puVar20 = (undefined8 *)puVar20[2];
        sVar19 = sVar19 + lVar2;
        *(undefined8 *)pcVar8 = uVar3;
        *(long *)(pcVar12 + -8) = lVar2;
        pcVar12 = pcVar8;
      } while (param_2 + lVar18 + -0x20 + (ulong)(iVar23 - 1) * -0x10 != pcVar8);
    }
    syscall();
    bVar24 = param_1 == 0;
    param_1 = 2;
    if (bVar24) goto LAB_006f96b4;
    uVar22 = _dl_pagesize + 4 + sVar19 & -_dl_pagesize;
    *(undefined8 *)(puVar14 + lVar4 + -8) = 0x6f964b;
    puVar9 = (uint *)mmap64((void *)0x0,uVar22,3,0x22,-1,0);
    puVar16 = puVar14 + lVar4;
    puVar10 = __abort_msg;
    if (puVar9 != (uint *)0xffffffffffffffff) {
      *puVar9 = (uint)uVar22;
      puVar10 = puVar9 + 1;
      pcVar12 = param_2 + ((long)iVar23 + 1) * 0x10;
      do {
        sVar19 = *(size_t *)(param_2 + 8);
        __src = *(void **)param_2;
        param_2 = param_2 + 0x10;
        *(undefined8 *)(puVar14 + lVar4 + -8) = 0x6f9681;
        puVar10 = (uint *)mempcpy(puVar10,__src,sVar19);
      } while (param_2 != pcVar12);
      *(undefined1 *)puVar10 = 0;
      __addr = __abort_msg;
      LOCK();
      UNLOCK();
      puVar16 = puVar14 + lVar4;
      puVar10 = puVar9;
      if (__abort_msg != (uint *)0x0) {
        uVar1 = *__abort_msg;
        *(undefined8 *)(puVar14 + lVar4 + -8) = 0x6f96a2;
        __abort_msg = puVar9;
        munmap(__addr,(ulong)uVar1);
        puVar16 = puVar14 + lVar4;
        puVar10 = __abort_msg;
      }
    }
  }
  __abort_msg = puVar10;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_006f96a7;
  abort();
}

