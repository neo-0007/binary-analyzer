
undefined8 FUN_00769c90(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  uint uVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  long in_FS_OFFSET;
  int local_7c;
  int local_68;
  int local_48;
  int local_44;
  long local_40;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar19 = (long *)(uVar3 * 0x30 + *param_3);
  plVar13 = (long *)(uVar4 * 0x30 + *param_3);
  cVar2 = *(char *)((long)plVar19 + 0x25);
  if (cVar2 == '\0') {
    if (*(char *)((long)plVar13 + 0x25) == '\0') {
      uVar14 = *(undefined8 *)(*plVar19 + 0x18);
      local_7c = FUN_00769be0(uVar14);
      uVar23 = *(undefined8 *)(*plVar13 + 0x18);
      local_68 = FUN_00769be0(uVar23);
LAB_00769e74:
      uVar6 = DAT_0094ab68;
      iVar8 = FUN_00769520(uVar14,DAT_0094ab68,0);
      iVar9 = FUN_00769520(uVar23,uVar6,0);
      if (iVar9 < iVar8) goto LAB_00769eb0;
      if (iVar9 <= iVar8) {
        if (cVar2 != '\0') {
          iVar8 = (int)plVar19[5];
          iVar9 = (int)plVar13[5];
          if (iVar8 != iVar9) {
            local_48 = *(int *)((long)plVar19 + 0x2c);
            local_44 = *(int *)((long)plVar13 + 0x2c);
            if (local_48 == -1) {
LAB_00769fb0:
              local_48 = 0;
              if (local_44 == -1) {
LAB_0076a07c:
                local_44 = 0;
              }
              else {
                iVar9 = -1;
              }
              FUN_00776140(iVar8,&local_48,iVar9,&local_44);
              lVar15 = (long)(int)param_3[1];
              if (0 < (int)param_3[1]) {
                if (iVar8 == -1) {
                  if (iVar9 != -1) {
                    lVar5 = *param_3;
                    lVar16 = 0;
                    do {
                      lVar1 = lVar5 + lVar16;
                      if (iVar9 == *(int *)(lVar1 + 0x28)) {
                        if ((*(int *)(lVar1 + 0x2c) != -1) && (local_44 != *(int *)(lVar1 + 0x2c)))
                        goto LAB_0076a348;
                        *(int *)(lVar1 + 0x2c) = local_44;
                      }
                      lVar16 = lVar16 + 0x30;
                    } while (lVar16 != lVar15 * 0x30);
                  }
                }
                else if (iVar9 == -1) {
                  lVar5 = *param_3;
                  lVar16 = 0;
                  do {
                    lVar1 = lVar5 + lVar16;
                    if (*(int *)(lVar1 + 0x28) == iVar8) {
                      if ((*(int *)(lVar1 + 0x2c) != -1) && (local_48 != *(int *)(lVar1 + 0x2c)))
                      goto LAB_0076a367;
                      *(int *)(lVar1 + 0x2c) = local_48;
                    }
                    lVar16 = lVar16 + 0x30;
                  } while (lVar15 * 0x30 != lVar16);
                }
                else {
                  lVar5 = *param_3;
                  lVar16 = 0;
                  do {
                    lVar1 = lVar5 + lVar16;
                    if (*(int *)(lVar1 + 0x28) == iVar8) {
                      if ((*(int *)(lVar1 + 0x2c) != -1) && (*(int *)(lVar1 + 0x2c) != local_48)) {
LAB_0076a367:
                    /* WARNING: Subroutine does not return */
                        FUN_006e2220("src->results[i].native == -1 || src->results[i].native == a1_native"
                                     ,"../sysdeps/posix/getaddrinfo.c",0x640,"rfc3484_sort");
                      }
                      *(int *)(lVar1 + 0x2c) = local_48;
                    }
                    else if (*(int *)(lVar1 + 0x28) == iVar9) {
                      if ((*(int *)(lVar1 + 0x2c) != -1) && (*(int *)(lVar1 + 0x2c) != local_44)) {
LAB_0076a348:
                    /* WARNING: Subroutine does not return */
                        FUN_006e2220("src->results[i].native == -1 || src->results[i].native == a2_native"
                                     ,"../sysdeps/posix/getaddrinfo.c",0x646,"rfc3484_sort");
                      }
                      *(int *)(lVar1 + 0x2c) = local_44;
                    }
                    lVar16 = lVar16 + 0x30;
                  } while (lVar15 * 0x30 != lVar16);
                }
              }
            }
            else if (local_44 == -1) {
              if (local_48 == -1) goto LAB_00769fb0;
              iVar8 = -1;
              goto LAB_0076a07c;
            }
            if (local_48 == 0) {
              if (local_44 != 0) goto LAB_00769e30;
            }
            else if (local_44 == 0) goto LAB_00769eb0;
          }
        }
        if (local_7c < local_68) goto LAB_00769eb0;
        if (local_7c <= local_68) {
          if (*(char *)((long)plVar19 + 0x25) != '\0') {
            lVar15 = *plVar19;
            lVar5 = *plVar13;
            iVar8 = *(int *)(lVar15 + 4);
            if (iVar8 == *(int *)(lVar5 + 4)) {
              if (iVar8 == 2) {
                if ((short)plVar19[1] != 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_006e2220("a1->source_addr.sin6_family == PF_INET",
                               "../sysdeps/posix/getaddrinfo.c",0x664,"rfc3484_sort");
                }
                if ((short)plVar13[1] != 2) {
                    /* WARNING: Subroutine does not return */
                  FUN_006e2220("a2->source_addr.sin6_family == PF_INET",
                               "../sysdeps/posix/getaddrinfo.c",0x665,"rfc3484_sort");
                }
                uVar12 = *(uint *)((long)plVar19 + 0xc) ^ *(uint *)(*(long *)(lVar15 + 0x18) + 4);
                uVar20 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar12 = *(uint *)((long)plVar13 + 0xc) ^ *(uint *)(*(long *)(lVar5 + 0x18) + 4);
                uVar12 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                         uVar12 << 0x18;
                uVar17 = -1 << (-*(char *)((long)plVar13 + 0x27) & 0x1fU) & uVar12;
                iVar8 = 0;
                if ((-1 << (-*(char *)((long)plVar19 + 0x27) & 0x1fU) & uVar20) == 0) {
                  uVar18 = 0x80000000;
                  do {
                    if ((uVar20 & uVar18) != 0) {
                      if (uVar17 == 0) goto LAB_0076a289;
                      if (iVar8 == 0) goto LAB_00769f5d;
                      goto LAB_00769eb0;
                    }
                    iVar8 = iVar8 + 1;
                    uVar18 = uVar18 >> 1;
                  } while (iVar8 != 0x20);
                  if (uVar17 != 0) goto LAB_00769eb0;
                }
                else if (uVar17 != 0) goto LAB_00769f5d;
LAB_0076a289:
                iVar9 = 0;
                uVar20 = 0x80000000;
                do {
                  if ((uVar20 & uVar12) != 0) goto LAB_0076a14e;
                  iVar9 = iVar9 + 1;
                  uVar20 = uVar20 >> 1;
                } while (iVar9 != 0x20);
                goto LAB_0076a156;
              }
              if (iVar8 == 10) {
                if ((short)plVar19[1] != 10) {
                    /* WARNING: Subroutine does not return */
                  FUN_006e2220("a1->source_addr.sin6_family == PF_INET6",
                               "../sysdeps/posix/getaddrinfo.c",0x683,"rfc3484_sort");
                }
                if ((short)plVar13[1] != 10) {
                    /* WARNING: Subroutine does not return */
                  FUN_006e2220("a2->source_addr.sin6_family == PF_INET6",
                               "../sysdeps/posix/getaddrinfo.c",0x684,"rfc3484_sort");
                }
                lVar15 = *(long *)(lVar15 + 0x18);
                uVar12 = *(uint *)(plVar19 + 2);
                lVar5 = *(long *)(lVar5 + 0x18);
                uVar20 = *(uint *)(plVar13 + 2);
                uVar17 = *(uint *)(lVar15 + 8);
                uVar18 = *(uint *)(lVar5 + 8);
                if ((uVar17 == uVar12) && (uVar20 == uVar18)) {
                  uVar17 = *(uint *)(lVar15 + 0xc);
                  uVar12 = *(uint *)((long)plVar19 + 0x14);
                  uVar18 = *(uint *)(lVar5 + 0xc);
                  uVar20 = *(uint *)((long)plVar13 + 0x14);
                  if ((uVar12 == uVar17) && (uVar20 == uVar18)) {
                    uVar17 = *(uint *)(lVar15 + 0x10);
                    uVar12 = *(uint *)(plVar19 + 3);
                    uVar18 = *(uint *)(lVar5 + 0x10);
                    uVar20 = *(uint *)(plVar13 + 3);
                    if ((uVar12 == uVar17) && (uVar20 == uVar18)) {
                      uVar17 = *(uint *)(lVar15 + 0x14);
                      uVar12 = *(uint *)((long)plVar19 + 0x1c);
                      uVar18 = *(uint *)(lVar5 + 0x14);
                      uVar20 = *(uint *)((long)plVar13 + 0x1c);
                      if ((uVar17 == uVar12) && (uVar18 == uVar20)) goto LAB_00769f5d;
                    }
                  }
                }
                uVar12 = uVar12 ^ uVar17;
                uVar17 = 0x80000000;
                iVar8 = 0;
                do {
                  if (((uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                       uVar12 << 0x18) & uVar17) != 0) break;
                  iVar8 = iVar8 + 1;
                  uVar17 = uVar17 >> 1;
                } while (iVar8 != 0x20);
                uVar20 = uVar20 ^ uVar18;
                iVar9 = 0;
                uVar12 = 0x80000000;
                do {
                  if (((uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                       uVar20 << 0x18) & uVar12) != 0) goto LAB_0076a14e;
                  iVar9 = iVar9 + 1;
                  uVar12 = uVar12 >> 1;
                } while (iVar9 != 0x20);
                goto LAB_0076a156;
              }
            }
          }
          goto LAB_00769f5d;
        }
      }
    }
  }
  else {
    if (*(char *)((long)plVar13 + 0x25) == '\0') goto LAB_00769eb0;
    plVar21 = plVar19 + 1;
    plVar22 = plVar13 + 1;
    uVar14 = *(undefined8 *)(*plVar19 + 0x18);
    local_7c = FUN_00769be0(uVar14);
    uVar23 = *(undefined8 *)(*plVar13 + 0x18);
    local_68 = FUN_00769be0(uVar23);
    iVar8 = FUN_00769be0(plVar21);
    iVar9 = FUN_00769be0(plVar22);
    uVar6 = DAT_0094ab70;
    if (iVar8 == local_7c) {
      if (iVar9 != local_68) goto LAB_00769eb0;
      if (iVar8 != local_7c) goto LAB_00769f70;
    }
    else {
LAB_00769f70:
      if (iVar9 == local_68) goto LAB_00769e30;
    }
    bVar7 = *(byte *)((long)plVar13 + 0x26) & 1;
    if ((*(byte *)((long)plVar19 + 0x26) & 1) == 0) {
      if (bVar7 != 0) goto LAB_00769eb0;
    }
    else if (bVar7 == 0) goto LAB_00769e30;
    bVar7 = *(byte *)((long)plVar13 + 0x26) & 2;
    if ((*(byte *)((long)plVar19 + 0x26) & 2) == 0) {
      if (bVar7 != 0) goto LAB_00769e30;
    }
    else if (bVar7 == 0) goto LAB_00769eb0;
    iVar8 = FUN_00769520(uVar14,DAT_0094ab70,0x7fffffff);
    iVar9 = FUN_00769520(plVar21,uVar6,0x7fffffff);
    iVar10 = FUN_00769520(uVar23,uVar6,0x7fffffff);
    iVar11 = FUN_00769520(plVar22,uVar6,0x7fffffff);
    if (iVar8 == iVar9) {
      if (iVar10 != iVar11) goto LAB_00769eb0;
      if (iVar8 == iVar9) goto LAB_00769e74;
    }
    if (iVar10 != iVar11) goto LAB_00769e74;
  }
  goto LAB_00769e30;
LAB_0076a14e:
  if (iVar9 < iVar8) goto LAB_00769eb0;
LAB_0076a156:
  if (iVar9 <= iVar8) {
LAB_00769f5d:
    if (uVar3 < uVar4) {
LAB_00769eb0:
      uVar14 = 0xffffffff;
      goto LAB_00769eb5;
    }
  }
LAB_00769e30:
  uVar14 = 1;
LAB_00769eb5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return uVar14;
}

