
int __nscd_getai(char *param_1,undefined8 *param_2,undefined4 *param_3)

{
  long *plVar1;
  int *__dest;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  int *__ptr;
  size_t sVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  size_t __n;
  int iVar11;
  int iVar12;
  int iVar13;
  void *__src;
  long in_FS_OFFSET;
  uint local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__nss_have_localdomain < 0) {
LAB_007779bb:
    iVar11 = 0;
    sVar4 = strlen(param_1);
    plVar5 = (long *)__nscd_get_map_ref(0xd,"hosts",&__hst_map_handle,&local_5c);
    do {
      if (plVar5 == (long *)0xffffffffffffffff) goto LAB_00777adb;
      lVar6 = __nscd_cache_search(0xe,param_1,sVar4 + 1,plVar5,0x18);
      if (lVar6 == 0) goto LAB_00777adb;
      local_48 = *(undefined8 *)(lVar6 + 0x28);
      local_58 = *(undefined8 *)(lVar6 + 0x18);
      uStack_50 = *(undefined8 *)(lVar6 + 0x20);
      lVar10 = *plVar5;
      if (*(uint *)(lVar10 + 8) == local_5c) {
        local_58._4_4_ = (int)((ulong)local_58 >> 0x20);
        if (local_58._4_4_ == 1) {
          uStack_50._4_4_ = (int)((ulong)uStack_50 >> 0x20);
          __src = (void *)(lVar6 + 0x30);
          __n = (size_t)((int)uStack_50 + uStack_50._4_4_ + (int)local_48);
          if ((long)__src + __n <= (ulong)(lVar6 + 0x18 + (long)*(int *)(lVar6 + 4))) {
            iVar3 = -1;
            iVar13 = (int)uStack_50;
            iVar9 = uStack_50._4_4_;
            iVar12 = (int)local_48;
            goto LAB_00777c4b;
          }
          iVar13 = -1;
        }
        else if (local_58._4_4_ == -1) {
          __nss_not_use_nscd_hosts = 1;
          iVar13 = -1;
        }
        else {
          local_48._4_4_ = (undefined4)((ulong)local_48 >> 0x20);
          iVar13 = 0;
          *param_3 = local_48._4_4_;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
        }
        __ptr = (int *)0x0;
        goto LAB_00777b5a;
      }
      iVar13 = -2;
      __ptr = (int *)0x0;
      while( true ) {
        uVar2 = *(uint *)(lVar10 + 8);
        if (uVar2 == local_5c) {
          LOCK();
          plVar1 = plVar5 + 3;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            __nscd_unmap(plVar5);
          }
          goto LAB_00777a5a;
        }
        local_5c = uVar2;
        if (((uVar2 & 1) == 0) && (iVar11 = iVar11 + 1, iVar11 != 5)) break;
        LOCK();
        plVar1 = plVar5 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
LAB_00777bbb:
          __nscd_unmap(plVar5);
        }
        if (iVar13 == -1) goto LAB_00777da8;
        *param_2 = 0;
        plVar5 = (long *)0xffffffffffffffff;
        free(__ptr);
LAB_00777adb:
        iVar3 = __nscd_open_socket(param_1,sVar4 + 1,0xe,&local_58);
        if (iVar3 == -1) {
          __nss_not_use_nscd_hosts = 1;
          iVar13 = -1;
          __ptr = (int *)0x0;
        }
        else {
          if (local_58._4_4_ == 1) {
            __src = (void *)0x0;
            __n = (size_t)((int)uStack_50 + uStack_50._4_4_ + (int)local_48);
            iVar13 = (int)uStack_50;
            iVar9 = uStack_50._4_4_;
            iVar12 = (int)local_48;
LAB_00777c4b:
            __ptr = (int *)malloc(__n + 0x20);
            if (__ptr == (int *)0x0) {
              iVar13 = -1;
              *param_3 = 0xffffffff;
            }
            else {
              __dest = __ptr + 8;
              *__ptr = iVar13;
              *(long *)(__ptr + 4) = (long)iVar9 + (long)__dest;
              *(int **)(__ptr + 6) = __dest;
              if (iVar12 == 0) {
                __ptr[2] = 0;
                __ptr[3] = 0;
                if (__src == (void *)0x0) goto LAB_00777d1d;
                memcpy(__dest,__src,__n);
LAB_00777cfa:
                *param_2 = __ptr;
                iVar13 = 0;
              }
              else {
                lVar6 = (long)iVar9 + (long)__dest + (long)iVar13;
                *(long *)(__ptr + 2) = lVar6;
                if (__src == (void *)0x0) {
LAB_00777d1d:
                  sVar7 = __readall(iVar3,__dest);
                  if (__n == sVar7) goto LAB_00777cfa;
                  iVar13 = -1;
                  free(__ptr);
                  *param_3 = 0xffffffff;
                }
                else {
                  memcpy(__dest,__src,__n);
                  if (*(char *)(lVar6 + -1 + (long)iVar12) == '\0') goto LAB_00777cfa;
                  iVar13 = -2;
                  if (*(uint *)(*plVar5 + 8) == local_5c) {
                    iVar13 = -1;
                    free(__ptr);
                  }
                }
              }
            }
            if (iVar3 == -1) goto LAB_00777b4c;
          }
          else if (local_58._4_4_ == -1) {
            __nss_not_use_nscd_hosts = 1;
            __ptr = (int *)0x0;
            iVar13 = -1;
          }
          else {
            iVar13 = 0;
            __ptr = (int *)0x0;
            *param_3 = local_48._4_4_;
            *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
          }
          __close_nocancel(iVar3);
        }
LAB_00777b4c:
        if (plVar5 == (long *)0xffffffffffffffff) goto LAB_00777a5a;
LAB_00777b5a:
        lVar10 = *plVar5;
      }
      if (iVar13 == -1) {
        LOCK();
        plVar1 = plVar5 + 3;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) goto LAB_00777bbb;
LAB_00777da8:
        iVar13 = -1;
        goto LAB_00777a5a;
      }
      *param_2 = 0;
      free(__ptr);
    } while( true );
  }
  if (__nss_have_localdomain == 0) {
    pcVar8 = getenv("LOCALDOMAIN");
    if (pcVar8 == (char *)0x0) {
      __nss_have_localdomain = -1;
      goto LAB_007779bb;
    }
    __nss_have_localdomain = 1;
  }
  __nss_not_use_nscd_hosts = 1;
  iVar13 = -1;
LAB_00777a5a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar13;
}

