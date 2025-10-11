
char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  char *local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  char local_88 [16];
  char local_78 [56];
  long local_40;
  uint uVar18;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__af == 2) {
                    /* WARNING: Load size is inaccurate */
    iVar10 = sprintf(local_78,fmt_0,(ulong)*__cp,(ulong)*(byte *)((long)__cp + 1),
                     (ulong)*(byte *)((long)__cp + 2),(ulong)*(byte *)((long)__cp + 3));
    if ((ulong)(long)iVar10 < (ulong)__len) {
      pcVar13 = strcpy(__buf,local_78);
      goto LAB_0076d0a2;
    }
    goto LAB_0076d260;
  }
  if (__af != 10) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x61;
    pcVar13 = (char *)0x0;
    goto LAB_0076d0a2;
  }
                    /* WARNING: Load size is inaccurate */
  uVar1 = CONCAT11(*__cp,*(undefined1 *)((long)__cp + 1));
  uVar12 = CONCAT22(0,uVar1);
  uVar2 = CONCAT11(*(undefined1 *)((long)__cp + 2),*(undefined1 *)((long)__cp + 3));
  uVar16 = (uint)uVar2;
  uVar11 = CONCAT22(0,CONCAT11(*(undefined1 *)((long)__cp + 4),*(undefined1 *)((long)__cp + 5)));
  local_a8._4_2_ = uVar2;
  local_a8._0_4_ = uVar12;
  local_a8._6_2_ = 0;
  uVar3 = CONCAT11(*(undefined1 *)((long)__cp + 6),*(undefined1 *)((long)__cp + 7));
  local_a8._12_2_ = uVar3;
  local_a8._8_4_ = uVar11;
  uVar4 = CONCAT11(*(undefined1 *)((long)__cp + 8),*(undefined1 *)((long)__cp + 9));
  uVar9 = CONCAT22(0,uVar4);
  local_a8._14_2_ = 0;
  sVar7 = CONCAT11(*(undefined1 *)((long)__cp + 10),*(undefined1 *)((long)__cp + 0xb));
  local_98._4_2_ = sVar7;
  local_98._0_4_ = uVar9;
  local_98._6_2_ = 0;
  uVar5 = CONCAT11(*(undefined1 *)((long)__cp + 0xc),*(undefined1 *)((long)__cp + 0xd));
  local_98._10_2_ = 0;
  local_98._8_2_ = uVar5;
  sVar6 = CONCAT11(*(undefined1 *)((long)__cp + 0xe),*(undefined1 *)((long)__cp + 0xf));
  local_98._12_2_ = sVar6;
  local_98._14_2_ = 0;
  if (uVar1 == 0) {
    if (uVar2 == 0) {
      uVar17 = 2;
      if (uVar11 == 0) {
        uVar17 = 3;
        uVar16 = 0;
        uVar11 = (uint)uVar3;
        if (uVar3 != 0) goto LAB_0076d30b;
LAB_0076d29d:
        uVar16 = uVar11;
        uVar17 = uVar17 + 1;
        uVar11 = uVar16;
        if (uVar4 == 0) goto LAB_0076d2ac;
      }
      else {
LAB_0076d3a0:
        if (uVar3 != 0) goto LAB_0076d30b;
        if (uVar4 == 0) goto LAB_0076d3f3;
      }
LAB_0076d220:
      uVar11 = uVar16;
      uVar12 = uVar17;
      if (sVar7 != 0) goto joined_r0x0076d353;
      if (uVar5 != 0) goto LAB_0076d61d;
LAB_0076d237:
      uVar9 = 2;
      uVar11 = 5;
      uVar12 = 5;
      uVar15 = uVar16;
      uVar18 = uVar17;
      if (sVar6 == 0) goto LAB_0076d5de;
LAB_0076d36b:
      uVar15 = uVar11;
      if ((uVar17 < uVar9) || (uVar16 == 0xffffffff)) {
LAB_0076d376:
        uVar16 = uVar15;
        uVar17 = uVar9;
      }
LAB_0076d37c:
      uVar15 = uVar16;
      uVar18 = uVar17;
      if (1 < uVar17) {
LAB_0076d64d:
        uVar17 = uVar18;
        uVar16 = uVar15;
        goto LAB_0076d5ec;
      }
      bVar8 = false;
      uVar16 = 0xffffffff;
      goto LAB_0076d451;
    }
    uVar17 = 1;
    if (uVar11 == 0) {
      if (uVar3 == 0) {
        if (uVar4 == 0) {
          uVar16 = 0;
          uVar17 = 2;
          uVar11 = 2;
          uVar9 = 1;
          goto LAB_0076d2b1;
        }
        uVar17 = 2;
        uVar16 = 2;
        goto LAB_0076d220;
      }
      if (uVar4 != 0) {
        uVar16 = 0;
        uVar17 = 1;
        goto LAB_0076d342;
      }
      uVar17 = 1;
      if (sVar7 == 0) {
        if (uVar5 == 0) {
          uVar16 = 0;
          uVar12 = 2;
          uVar11 = 4;
          uVar17 = 1;
          goto LAB_0076d2d8;
        }
        uVar9 = 2;
        uVar15 = 4;
        goto LAB_0076d376;
      }
    }
    else {
LAB_0076d3e0:
      uVar16 = uVar12;
      if (uVar3 != 0) goto LAB_0076d30b;
      if (uVar4 != 0) {
        if ((uVar17 == 0) || (uVar12 == 0xffffffff)) {
          uVar16 = 3;
          uVar17 = 1;
        }
        goto LAB_0076d220;
      }
LAB_0076d3f3:
      if (sVar7 == 0) {
        uVar12 = 2;
        uVar11 = 3;
        goto LAB_0076d2c1;
      }
      uVar12 = 2;
      uVar11 = 3;
      uVar9 = uVar16;
LAB_0076d411:
      if ((uVar17 < uVar12) || (uVar9 == 0xffffffff)) goto joined_r0x0076d353;
    }
    uVar11 = uVar9;
    uVar12 = uVar17;
joined_r0x0076d353:
    uVar17 = uVar12;
    uVar16 = uVar11;
    if (uVar5 == 0) {
      if (sVar6 == 0) {
        uVar9 = 1;
        uVar12 = 6;
        uVar15 = uVar16;
        uVar18 = uVar17;
        goto LAB_0076d5de;
      }
      uVar9 = 1;
      uVar11 = 6;
      goto LAB_0076d36b;
    }
    uVar9 = uVar17;
    uVar15 = uVar16;
    if (sVar6 != 0) {
      if (uVar16 != 0xffffffff) goto LAB_0076d376;
      bVar8 = false;
      goto LAB_0076d447;
    }
    if ((uVar17 != 0) && (uVar16 != 0xffffffff)) goto LAB_0076d376;
    bVar8 = false;
    uVar17 = 1;
    uVar16 = 0xffffffff;
LAB_0076d45b:
    pcVar13 = local_78;
    lVar14 = 0;
    do {
      uVar9 = (uint)lVar14;
      if ((((int)uVar9 < (int)uVar16) || (!bVar8)) || ((int)(uVar16 + uVar17) <= (int)uVar9)) {
        if (lVar14 != 0) {
          *pcVar13 = ':';
          pcVar13 = pcVar13 + 1;
        }
        iVar10 = sprintf(pcVar13,"%x",(ulong)*(uint *)(local_a8 + lVar14 * 4));
        pcVar13 = pcVar13 + iVar10;
      }
      else if (uVar16 == uVar9) {
        *pcVar13 = ':';
        pcVar13 = pcVar13 + 1;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 8);
  }
  else {
    if (uVar2 != 0) {
      if (uVar11 != 0) {
        uVar17 = 0;
        uVar12 = 0xffffffff;
        goto LAB_0076d3e0;
      }
      if (uVar3 != 0) {
        uVar16 = 2;
        uVar17 = 1;
        goto LAB_0076d30b;
      }
      uVar17 = 2;
      uVar16 = 2;
      uVar11 = uVar16;
      if (uVar4 != 0) goto LAB_0076d220;
LAB_0076d2ac:
      uVar16 = 0xffffffff;
LAB_0076d2b1:
      uVar12 = uVar17 + 1;
      uVar17 = uVar9;
      if (sVar7 != 0) goto joined_r0x0076d353;
LAB_0076d2c1:
      uVar12 = uVar12 + 1;
      uVar9 = uVar12;
      uVar15 = uVar11;
      if (uVar5 == 0) goto LAB_0076d2d8;
      goto LAB_0076d376;
    }
    if (uVar11 != 0) {
      uVar17 = 1;
      uVar16 = 1;
      goto LAB_0076d3a0;
    }
    uVar17 = 2;
    uVar16 = 1;
    if (uVar3 == 0) {
      uVar11 = 1;
      goto LAB_0076d29d;
    }
LAB_0076d30b:
    if (uVar4 != 0) {
LAB_0076d342:
      uVar11 = uVar16;
      uVar12 = uVar17;
      if (sVar7 != 0) goto joined_r0x0076d353;
      if (uVar5 == 0) goto LAB_0076d237;
      uVar9 = 1;
      uVar15 = 5;
LAB_0076d60a:
      if ((uVar17 < uVar9) || (uVar16 == 0xffffffff)) goto LAB_0076d376;
LAB_0076d61d:
      uVar9 = uVar17;
      uVar15 = uVar16;
      if (sVar6 == 0) goto LAB_0076d376;
      goto LAB_0076d37c;
    }
    if (sVar7 != 0) {
      uVar12 = 1;
      uVar11 = 4;
      uVar9 = uVar16;
      goto LAB_0076d411;
    }
    uVar9 = 2;
    uVar12 = 2;
    uVar11 = 4;
    uVar15 = 4;
    if (uVar5 != 0) goto LAB_0076d60a;
LAB_0076d2d8:
    uVar9 = uVar12 + 1;
    uVar12 = uVar11;
    uVar15 = uVar16;
    uVar18 = uVar17;
    if (sVar6 != 0) goto LAB_0076d36b;
LAB_0076d5de:
    uVar16 = uVar12;
    uVar17 = uVar9 + 1;
    if ((uVar15 != 0xffffffff) && (uVar17 <= uVar18)) goto LAB_0076d64d;
LAB_0076d5ec:
    bVar8 = true;
LAB_0076d447:
    if (uVar17 == 5) {
      pcVar13 = local_78;
      lVar14 = 0;
      do {
        uVar9 = (uint)lVar14;
        if ((((int)uVar9 < (int)uVar16) || (!bVar8)) || ((int)(uVar16 + 5) <= (int)uVar9)) {
          if (lVar14 != 0) {
            *pcVar13 = ':';
            pcVar13 = pcVar13 + 1;
            if (((uVar16 == 0) && (uVar9 == 6)) && (sVar7 == -1)) goto LAB_0076d666;
          }
          iVar10 = sprintf(pcVar13,"%x",(ulong)*(uint *)(local_a8 + lVar14 * 4));
          pcVar13 = pcVar13 + iVar10;
        }
        else if (uVar16 == uVar9) {
          *pcVar13 = ':';
          pcVar13 = pcVar13 + 1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 8);
    }
    else {
LAB_0076d451:
      if (uVar17 != 6) goto LAB_0076d45b;
      pcVar13 = local_78;
      lVar14 = 0;
      do {
        uVar9 = (uint)lVar14;
        if ((((int)uVar9 < (int)uVar16) || (!bVar8)) || ((int)(uVar16 + 6) <= (int)uVar9)) {
          if (lVar14 != 0) {
            *pcVar13 = ':';
            pcVar13 = pcVar13 + 1;
            if ((uVar9 == 6) && (uVar16 == 0)) goto LAB_0076d666;
          }
          iVar10 = sprintf(pcVar13,"%x",(ulong)*(uint *)(local_a8 + lVar14 * 4));
          pcVar13 = pcVar13 + iVar10;
        }
        else if (uVar9 == uVar16) {
          *pcVar13 = ':';
          pcVar13 = pcVar13 + 1;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 8);
    }
  }
  if ((uVar16 != 0xffffffff) && (uVar16 + uVar17 == 8)) {
    *pcVar13 = ':';
    pcVar13 = pcVar13 + 1;
  }
LAB_0076d4cd:
  local_b8 = local_78;
  *pcVar13 = '\0';
  if ((uint)(((int)pcVar13 + 1) - (int)local_b8) <= __len) {
    pcVar13 = strcpy(__buf,local_b8);
    goto LAB_0076d0a2;
  }
  goto LAB_0076d260;
LAB_0076d666:
  local_b8 = local_78;
  iVar10 = sprintf(local_88,fmt_0,(ulong)*(byte *)((long)__cp + 0xc),
                   (ulong)*(byte *)((long)__cp + 0xd),(ulong)*(byte *)((long)__cp + 0xe),
                   (ulong)*(byte *)((long)__cp + 0xf));
  if ((ulong)(long)iVar10 < (ulong)(((int)local_b8 - (int)pcVar13) + 0x2e)) {
    pcVar13 = stpcpy(pcVar13,local_88);
    goto LAB_0076d4cd;
  }
LAB_0076d260:
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x1c;
  pcVar13 = (char *)0x0;
LAB_0076d0a2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return pcVar13;
}

