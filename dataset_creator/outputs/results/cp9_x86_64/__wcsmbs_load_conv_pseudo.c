
/* WARNING: Removing unreachable block (ram,0x00750cea) */
/* WARNING: Removing unreachable block (ram,0x00750cd7) */

void __wcsmbs_load_conv(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long *__ptr;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  ulong **ppuVar9;
  ulong **ppuVar11;
  undefined1 *puVar12;
  ulong **ppuVar13;
  char cVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  char *pcVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  ulong *local_68;
  long *local_60;
  ulong local_50;
  long local_48;
  long local_40;
  ulong **ppuVar10;
  ulong **ppuVar14;
  ulong uVar20;
  
  ppuVar10 = &local_68;
  ppuVar9 = &local_68;
  ppuVar11 = &local_68;
  ppuVar14 = &local_68;
  ppuVar13 = &local_68;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  if (*(long *)(param_1 + 0x28) != 0) goto LAB_00750b36;
  __ptr = (long *)calloc(1,0x20);
  uVar3 = _nl_C_locobj._120_8_;
  ppuVar11 = &local_68;
  if (__ptr == (long *)0x0) {
LAB_00750b7c:
    *(undefined ***)(param_1 + 0x28) = &__wcsmbs_gconv_fcts_c;
  }
  else {
    pcVar21 = "TRANSLIT";
    pcVar5 = *(char **)(param_1 + 0xb0);
    uVar19 = -(uint)(*(int *)(param_1 + 0x34) != 0) & 8;
    uVar20 = (ulong)uVar19;
    if (*(int *)(param_1 + 0x34) == 0) {
      pcVar21 = "";
    }
    cVar1 = *pcVar5;
    if (cVar1 == '\0') {
      uVar18 = (-(ulong)(*(int *)(param_1 + 0x34) == 0) & 0xfffffffffffffff8) + 0x22;
      ppuVar9 = &local_68;
      while (ppuVar14 != (ulong **)((long)&local_68 - (uVar18 & 0xfffffffffffff000))) {
        ppuVar13 = (ulong **)((long)ppuVar9 + -0x1000);
        *(undefined8 *)((long)ppuVar9 + -8) = *(undefined8 *)((long)ppuVar9 + -8);
        ppuVar14 = (ulong **)((long)ppuVar9 + -0x1000);
        ppuVar9 = (ulong **)((long)ppuVar9 + -0x1000);
      }
      uVar18 = (ulong)((uint)uVar18 & 0xff0);
      lVar6 = -uVar18;
      puVar12 = (undefined1 *)((long)ppuVar13 + lVar6);
      if (uVar18 != 0) {
        *(undefined8 *)((long)ppuVar13 + -8) = *(undefined8 *)((long)ppuVar13 + -8);
      }
      pcVar7 = (char *)((ulong)((long)ppuVar13 + lVar6 + 0xf) & 0xfffffffffffffff0);
      *pcVar7 = '/';
      pcVar22 = pcVar7;
LAB_00750be3:
      pcVar7[1] = '/';
      pcVar5 = pcVar7 + 2;
      ppuVar11 = (ulong **)puVar12;
      if (uVar20 != 0) {
        if (uVar19 < 8) {
          if (uVar19 != 0) {
            *pcVar5 = *pcVar21;
          }
        }
        else {
          *(undefined8 *)pcVar5 = *(undefined8 *)pcVar21;
          *(undefined8 *)(pcVar7 + (uVar20 - 6)) = *(undefined8 *)(pcVar21 + (uVar20 - 8));
          lVar6 = (long)pcVar5 - ((ulong)(pcVar7 + 10) & 0xfffffffffffffff8);
          uVar19 = (int)lVar6 + uVar19 & 0xfffffff8;
          if (7 < uVar19) {
            uVar16 = 0;
            do {
              uVar18 = (ulong)uVar16;
              uVar16 = uVar16 + 8;
              *(undefined8 *)(((ulong)(pcVar7 + 10) & 0xfffffffffffffff8) + uVar18) =
                   *(undefined8 *)(pcVar21 + (uVar18 - lVar6));
            } while (uVar16 < uVar19);
          }
        }
        pcVar5 = pcVar5 + uVar20;
      }
    }
    else {
      uVar18 = 0;
      pcVar7 = pcVar5;
      cVar15 = cVar1;
      do {
        pcVar7 = pcVar7 + 1;
        uVar18 = uVar18 + (cVar15 == '/');
        cVar15 = *pcVar7;
      } while (cVar15 != '\0');
      ppuVar13 = &local_68;
      while (ppuVar10 !=
             (ulong **)
             ((long)&local_68 -
             ((ulong)(pcVar7 + ((uVar20 + 0x1a) - (long)pcVar5)) & 0xfffffffffffff000))) {
        ppuVar9 = (ulong **)((long)ppuVar13 + -0x1000);
        *(undefined8 *)((long)ppuVar13 + -8) = *(undefined8 *)((long)ppuVar13 + -8);
        ppuVar10 = (ulong **)((long)ppuVar13 + -0x1000);
        ppuVar13 = (ulong **)((long)ppuVar13 + -0x1000);
      }
      uVar17 = (ulong)((uint)(pcVar7 + ((uVar20 + 0x1a) - (long)pcVar5)) & 0xff0);
      lVar6 = -uVar17;
      puVar12 = (undefined1 *)((long)ppuVar9 + lVar6);
      if (uVar17 != 0) {
        *(undefined8 *)((long)ppuVar9 + -8) = *(undefined8 *)((long)ppuVar9 + -8);
      }
      pcVar22 = (char *)((ulong)((long)ppuVar9 + lVar6 + 0xf) & 0xfffffffffffffff0);
      pcVar7 = pcVar22;
      do {
        pcVar8 = pcVar7;
        pcVar5 = pcVar5 + 1;
        pcVar7 = pcVar8 + 1;
        *pcVar8 = (char)*(undefined4 *)(uVar3 + (long)cVar1 * 4);
        cVar1 = *pcVar5;
      } while (cVar1 != '\0');
      pcVar5 = pcVar7;
      ppuVar11 = (ulong **)((long)ppuVar9 + lVar6);
      if (uVar18 < 2) {
        *pcVar7 = '/';
        if (uVar18 == 0) goto LAB_00750be3;
        pcVar5 = pcVar8 + 2;
        ppuVar11 = (ulong **)((long)ppuVar9 + lVar6);
      }
    }
    *pcVar5 = '\0';
    local_68 = &local_50;
    local_60 = &local_48;
    *(undefined8 *)((long)ppuVar11 + -8) = 0x750abb;
    iVar4 = __gconv_find_transform("INTERNAL",pcVar22,local_60,local_68,0);
    if (iVar4 == 0) {
      if (1 < local_50) {
        *(undefined8 *)((long)ppuVar11 + -8) = 0x750b65;
        __gconv_close_transform(local_48,local_50,local_60,local_68);
        goto LAB_00750b65;
      }
      __ptr[1] = local_50;
      *__ptr = local_48;
      if (local_48 == 0) goto LAB_00750b6d;
      *(undefined8 *)((long)ppuVar11 + -8) = 0x750afc;
      iVar4 = __gconv_find_transform(pcVar22,"INTERNAL",local_60,local_68,0);
      if (iVar4 != 0) {
LAB_00750bad:
        __ptr[2] = 0;
LAB_00750bb5:
        lVar6 = *__ptr;
        if (lVar6 != 0) {
          lVar2 = __ptr[1];
          *(undefined8 *)((long)ppuVar11 + -8) = 0x750bc7;
          __gconv_close_transform(lVar6,lVar2);
        }
        goto LAB_00750b74;
      }
      if (1 < local_50) {
        *(undefined8 *)((long)ppuVar11 + -8) = 0x750bad;
        __gconv_close_transform();
        goto LAB_00750bad;
      }
      __ptr[3] = local_50;
      __ptr[2] = local_48;
      if (local_48 == 0) goto LAB_00750bb5;
    }
    else {
LAB_00750b65:
      *__ptr = 0;
LAB_00750b6d:
      if (__ptr[2] == 0) {
LAB_00750b74:
        *(undefined8 *)((long)ppuVar11 + -8) = 0x750b7c;
        free(__ptr);
        goto LAB_00750b7c;
      }
    }
    *(long **)(param_1 + 0x28) = __ptr;
    *(code **)(param_1 + 0x20) = _nl_cleanup_ctype;
  }
LAB_00750b36:
  *(undefined8 *)((long)ppuVar11 + -8) = 0x750b3e;
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)ppuVar11 + -8) = &UNK_00750cff;
    __stack_chk_fail_local();
  }
  return;
}

