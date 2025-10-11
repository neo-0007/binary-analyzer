
undefined8 __add_to_environ(char *param_1,char *param_2,void *param_3,undefined4 param_4)

{
  ulong __size;
  long lVar1;
  int iVar2;
  size_t __n;
  undefined1 (*__dest) [16];
  void *pvVar3;
  undefined1 *puVar4;
  long *plVar5;
  void *__dest_00;
  long lVar6;
  ulong uVar7;
  undefined1 (*pauVar8) [16];
  size_t *psVar9;
  size_t *psVar10;
  size_t *psVar11;
  size_t *psVar12;
  size_t sVar13;
  undefined8 uVar14;
  char *__s1;
  long in_FS_OFFSET;
  bool bVar15;
  size_t local_68;
  char *local_60;
  long local_58;
  void *local_50;
  long local_40;
  
  psVar9 = &local_68;
  psVar10 = &local_68;
  psVar11 = &local_68;
  psVar12 = &local_68;
  local_58 = CONCAT44(local_58._4_4_,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_2;
  local_50 = param_3;
  __n = strlen(param_1);
  if (param_3 == (void *)0x0) {
    local_68 = strlen(local_60);
    local_68 = local_68 + 1;
  }
  LOCK();
  bVar15 = envlock == 0;
  if (bVar15) {
    envlock = 1;
  }
  UNLOCK();
  if (!bVar15) {
    __lll_lock_wait_private(&envlock);
  }
  if ((environ == (undefined1 (*) [16])0x0) || (__s1 = *(char **)*environ, __s1 == (char *)0x0)) {
    sVar13 = 0x10;
    lVar6 = 0;
  }
  else {
    pauVar8 = environ;
    lVar1 = 0;
    do {
      lVar6 = lVar1;
      iVar2 = strncmp(__s1,param_1,__n);
      if ((iVar2 == 0) && (__s1[__n] == '=')) {
        if (*(long *)*pauVar8 != 0) {
          if ((int)local_58 != 0) goto LAB_00787f67;
          goto LAB_00787f79;
        }
        sVar13 = lVar6 * 8 + 0x10;
        goto LAB_00787f09;
      }
      __s1 = *(char **)(*pauVar8 + 8);
      pauVar8 = (undefined1 (*) [16])(*pauVar8 + 8);
      lVar1 = lVar6 + 1;
    } while (__s1 != (char *)0x0);
    sVar13 = lVar6 * 8 + 0x18;
    lVar6 = lVar6 + 1;
  }
LAB_00787f09:
  pauVar8 = last_environ;
  local_58 = lVar6;
  __dest = (undefined1 (*) [16])realloc(last_environ,sVar13);
  if (__dest == (undefined1 (*) [16])0x0) {
LAB_007881bd:
    __dest_00 = (void *)0x0;
LAB_007881bf:
    LOCK();
    UNLOCK();
    bVar15 = 1 < envlock;
    envlock = (int)__dest_00;
    if (bVar15) {
      *(undefined8 *)((long)psVar12 + -8) = 0x7881e1;
      __lll_lock_wake_private(&envlock);
    }
    uVar14 = 0xffffffff;
  }
  else {
    sVar13 = local_58 * 8;
    if (environ != pauVar8) {
      __dest = (undefined1 (*) [16])memcpy(__dest,environ,sVar13);
    }
    pauVar8 = (undefined1 (*) [16])(*__dest + sVar13);
    last_environ = __dest;
    *pauVar8 = (undefined1  [16])0x0;
    environ = __dest;
LAB_00787f67:
    psVar9 = &local_68;
    if (local_50 == (void *)0x0) {
      __size = local_68 + 1 + __n;
      iVar2 = __libc_alloca_cutoff(__size);
      if ((iVar2 == 0) && (0x1000 < __size)) {
        pvVar3 = malloc(__size);
        local_50 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_007881bd;
        puVar4 = (undefined1 *)mempcpy(pvVar3,param_1,__n);
        *puVar4 = 0x3d;
        memcpy(puVar4 + 1,local_60,local_68);
        plVar5 = (long *)tfind(pvVar3,(void **)&known_values,strcmp);
        psVar11 = &local_68;
        if ((plVar5 == (long *)0x0) ||
           (pvVar3 = (void *)*plVar5, psVar11 = &local_68, pvVar3 == (void *)0x0)) {
LAB_007880f7:
          *(undefined8 *)((long)psVar11 + -8) = 0x788106;
          tsearch(local_50,(void **)&known_values,strcmp);
          psVar9 = psVar11;
        }
        else {
          free(local_50);
          psVar9 = &local_68;
          local_50 = pvVar3;
        }
      }
      else {
        psVar9 = &local_68;
        while (psVar10 != (size_t *)((long)&local_68 - (__size + 0x17 & 0xfffffffffffff000))) {
          psVar11 = (size_t *)((long)psVar9 + -0x1000);
          *(undefined8 *)((long)psVar9 + -8) = *(undefined8 *)((long)psVar9 + -8);
          psVar10 = (size_t *)((long)psVar9 + -0x1000);
          psVar9 = (size_t *)((long)psVar9 + -0x1000);
        }
        uVar7 = (ulong)((uint)(__size + 0x17) & 0xff0);
        lVar6 = -uVar7;
        psVar12 = (size_t *)((long)psVar11 + lVar6);
        if (uVar7 != 0) {
          *(undefined8 *)((long)psVar11 + -8) = *(undefined8 *)((long)psVar11 + -8);
        }
        pvVar3 = (void *)((ulong)((long)psVar11 + lVar6 + 0xf) & 0xfffffffffffffff0);
        *(undefined8 *)((long)psVar11 + lVar6 + -8) = 0x78809d;
        puVar4 = (undefined1 *)mempcpy(pvVar3,param_1,__n);
        *puVar4 = 0x3d;
        *(undefined8 *)((long)psVar11 + lVar6 + -8) = 0x7880b1;
        memcpy(puVar4 + 1,local_60,local_68);
        *(undefined8 *)((long)psVar11 + lVar6 + -8) = 0x7880bf;
        plVar5 = (long *)tfind(pvVar3,(void **)&known_values,strcmp);
        if ((plVar5 == (long *)0x0) ||
           (local_50 = (void *)*plVar5, psVar9 = (size_t *)((long)psVar11 + lVar6),
           local_50 == (void *)0x0)) {
          *(undefined8 *)((long)psVar11 + lVar6 + -8) = 0x7880dc;
          __dest_00 = malloc(__size);
          local_50 = __dest_00;
          if (__dest_00 != (void *)0x0) {
            *(undefined8 *)((long)psVar11 + lVar6 + -8) = 0x7880f7;
            memcpy(__dest_00,pvVar3,__size);
            psVar11 = (size_t *)((long)psVar11 + lVar6);
            goto LAB_007880f7;
          }
          goto LAB_007881bf;
        }
      }
    }
    *(void **)*pauVar8 = local_50;
LAB_00787f79:
    iVar2 = envlock;
    LOCK();
    envlock = 0;
    UNLOCK();
    uVar14 = 0;
    psVar12 = psVar9;
    if (1 < iVar2) {
      *(undefined8 *)((long)psVar9 + -8) = 0x788134;
      __lll_lock_wake_private(&envlock);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)psVar12 + -8) = &UNK_007881e8;
  __stack_chk_fail_local();
}

