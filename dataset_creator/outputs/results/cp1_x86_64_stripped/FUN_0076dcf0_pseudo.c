
/* WARNING: Removing unreachable block (ram,0x0076e080) */
/* WARNING: Removing unreachable block (ram,0x0076e086) */
/* WARNING: Removing unreachable block (ram,0x0076e280) */
/* WARNING: Removing unreachable block (ram,0x0076e090) */
/* WARNING: Removing unreachable block (ram,0x0076e099) */
/* WARNING: Removing unreachable block (ram,0x0076e208) */
/* WARNING: Removing unreachable block (ram,0x0076e218) */
/* WARNING: Removing unreachable block (ram,0x0076e0a2) */
/* WARNING: Removing unreachable block (ram,0x0076e298) */

char * FUN_0076dcf0(char *param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  bool bVar12;
  ulong uVar13;
  char *pcVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  bool bVar17;
  char *local_138;
  char *local_128;
  long local_120;
  long local_118;
  ulong local_108;
  char *local_f8;
  long local_d8;
  long local_d0;
  uint local_c0;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    if (param_1 != (char *)0x0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      local_128 = (char *)0x0;
      pcVar14 = local_128;
      goto LAB_0076e0b7;
    }
    iVar6 = FUN_0076ece0();
    iVar7 = 0x1000;
    if (0xfff < iVar6) {
      iVar7 = iVar6;
    }
    uVar10 = (long)iVar7;
LAB_0076dd42:
    local_138 = (char *)FUN_007101b0(uVar10);
    if (local_138 != (char *)0x0) goto LAB_0076dd79;
    goto LAB_0076e0ae;
  }
  uVar10 = param_2;
  local_138 = param_1;
  if (param_1 == (char *)0x0) goto LAB_0076dd42;
LAB_0076dd79:
  syscall();
  if (*local_138 == '/') {
    local_128 = param_1;
    if (param_2 == 0 && param_1 == (char *)0x0) {
      local_128 = (char *)FUN_00710840(local_138,0x4f);
    }
LAB_0076e254:
    pcVar14 = local_138;
    if (local_128 != (char *)0x0) {
      pcVar14 = local_128;
    }
    goto LAB_0076e0b7;
  }
  if (param_1 == (char *)0x0 && param_2 == 0) {
    FUN_007104f0(local_138,uVar10);
    local_138 = (char *)FUN_007101b0(0x1000);
    if (local_138 == (char *)0x0) goto LAB_0076e0ae;
    local_128 = (char *)0x0;
    local_108 = 0x1000;
LAB_0076dde3:
    pcVar14 = local_138 + local_108;
    pcVar14[-1] = '\0';
    iVar7 = FUN_0076d830(&DAT_007dd6bb,&local_d8);
    lVar3 = local_d0;
    lVar8 = local_d8;
    if (iVar7 < 0) {
LAB_0076e277:
      iVar7 = *(int *)(in_FS_OFFSET + -0x58);
    }
    else {
      local_120 = local_d8;
      local_118 = local_d0;
      iVar7 = FUN_0076d830(&DAT_00823afc,&local_d8);
      lVar4 = local_d0;
      lVar2 = local_d8;
      if (iVar7 < 0) goto LAB_0076e277;
      local_f8 = pcVar14 + -1;
      bVar16 = lVar3 != local_d0;
      bVar17 = lVar8 != local_d8;
      if (!bVar16 && !bVar17) {
LAB_0076e36a:
        if (local_f8 == local_138 + (local_108 - 1)) {
          local_f8[-1] = '/';
          local_f8 = local_f8 + -1;
        }
        uVar10 = (long)pcVar14 - (long)local_f8;
        thunk_FUN_00713610(local_138,local_f8,uVar10);
        if (param_2 == 0) {
          pcVar14 = local_138;
          if (local_108 <= uVar10) goto LAB_0076e0b7;
          local_128 = (char *)FUN_00710840(local_138,uVar10);
        }
        goto LAB_0076e254;
      }
      lVar8 = 0;
      iVar6 = -100;
      while (iVar6 = FUN_007ab7c0(iVar6,&DAT_008215d6,0), -1 < iVar6) {
        iVar7 = FUN_0076d7f0(iVar6,&local_d8);
        if (iVar7 != 0) {
          iVar7 = *(int *)(in_FS_OFFSET + -0x58);
          if (lVar8 != 0) {
            FUN_00768ac0(lVar8);
          }
LAB_0076e305:
          FUN_0076e4b0(iVar6);
          goto LAB_0076e18d;
        }
        if (((lVar8 != 0) && (iVar7 = FUN_00768ac0(lVar8), iVar7 != 0)) ||
           (lVar5 = local_d0, lVar3 = local_d8, lVar8 = FUN_007aafd0(iVar6),
           bVar1 = bVar16 || bVar17, lVar8 == 0)) {
          iVar7 = *(int *)(in_FS_OFFSET + -0x58);
          goto LAB_0076e305;
        }
LAB_0076def0:
        do {
          do {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
            plVar9 = (long *)FUN_00768af0(lVar8);
            if (plVar9 == (long *)0x0) {
              iVar7 = *(int *)(in_FS_OFFSET + -0x58);
              if (iVar7 == 0) {
                if (bVar1) {
                  FUN_007aaf10(lVar8);
                  plVar9 = (long *)FUN_00768af0(lVar8);
                  if (plVar9 != (long *)0x0) {
                    bVar12 = false;
                    bVar1 = bVar12;
                    if (*(char *)((long)plVar9 + 0x13) == '.') goto LAB_0076e150;
                    break;
                  }
                  iVar7 = *(int *)(in_FS_OFFSET + -0x58);
                }
                if (iVar7 == 0) {
                  *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
                  iVar7 = 2;
                }
              }
              goto LAB_0076e17d;
            }
            if (*(char *)((long)plVar9 + 0x13) == '.') {
LAB_0076e150:
              if ((*(char *)((long)plVar9 + 0x14) == '\0') ||
                 (*(short *)((long)plVar9 + 0x14) == 0x2e)) goto LAB_0076def0;
            }
            bVar12 = bVar1;
          } while ((bVar1) &&
                  (bVar12 = *plVar9 == local_118 || lVar3 != local_120,
                  *plVar9 != local_118 && lVar3 == local_120));
          lVar11 = (long)plVar9 + 0x13;
          iVar7 = FUN_0076d850(iVar6,lVar11,&local_d8,0x100);
          bVar1 = bVar12;
        } while ((((iVar7 != 0) || ((local_c0 & 0xf000) != 0x4000)) || (local_d8 != local_120)) ||
                (local_d0 != local_118));
        uVar15 = (long)local_f8 - (long)local_138;
        uVar10 = thunk_FUN_007129d0(lVar11);
        if (uVar15 <= uVar10) {
          if (param_2 != 0) {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x22;
            iVar7 = 0x22;
            goto LAB_0076e17d;
          }
          uVar13 = local_108;
          if (local_108 <= uVar10) {
            uVar13 = uVar10;
          }
          if ((CARRY8(local_108,uVar13)) ||
             (pcVar14 = (char *)FUN_00710840(local_138,local_108 + uVar13), pcVar14 == (char *)0x0))
          {
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
            iVar7 = 0xc;
            goto LAB_0076e17d;
          }
          local_f8 = (char *)thunk_FUN_00713a50(pcVar14 + uVar13 + uVar15,pcVar14 + uVar15,
                                                local_108 - uVar15);
          local_138 = pcVar14;
          local_108 = local_108 + uVar13;
        }
        lVar11 = thunk_FUN_00713a50((long)local_f8 - uVar10,lVar11,uVar10);
        local_f8 = (char *)(lVar11 + -1);
        *(undefined1 *)(lVar11 + -1) = 0x2f;
        if ((lVar2 == lVar3) && (lVar4 == lVar5)) {
          iVar7 = FUN_00768ac0(lVar8);
          if (iVar7 != 0) goto LAB_0076e277;
          pcVar14 = local_138 + local_108;
          goto LAB_0076e36a;
        }
        local_120 = lVar3;
        local_118 = lVar5;
      }
      iVar7 = *(int *)(in_FS_OFFSET + -0x58);
      if (lVar8 != 0) {
LAB_0076e17d:
        FUN_00768ac0(lVar8);
      }
    }
LAB_0076e18d:
    if (local_128 == (char *)0x0) {
      FUN_007104f0(local_138);
    }
LAB_0076e199:
    *(int *)(in_FS_OFFSET + -0x58) = iVar7;
    if ((param_2 != 0) && (param_1 == (char *)0x0)) {
      FUN_007104f0(local_128);
    }
  }
  else {
    if (param_2 == 1) {
      local_128 = local_138;
      iVar7 = 0x22;
      goto LAB_0076e199;
    }
    if (param_2 != 0) {
      local_128 = local_138;
      local_108 = param_2;
      goto LAB_0076dde3;
    }
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
LAB_0076e0ae:
  local_128 = (char *)0x0;
  pcVar14 = local_128;
LAB_0076e0b7:
  local_128 = pcVar14;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_128;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

