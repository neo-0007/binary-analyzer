
int get_nproc_stat(void)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  char *__s;
  size_t sVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  char local_448 [768];
  char local_148 [256];
  char local_48 [8];
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __open64_nocancel("/proc/stat",0x80000);
  if (iVar1 != -1) {
    iVar6 = 0;
    __s = local_48;
    pcVar5 = local_48;
    do {
      sVar4 = (long)pcVar5 - (long)__s;
      pvVar2 = memchr(__s,10,sVar4);
      pcVar7 = pcVar5;
      if (pvVar2 == (void *)0x0) {
        if ((__s != local_448) && (pcVar5 == local_48)) {
          pcVar7 = local_448 + sVar4;
          memmove(local_448,__s,sVar4);
          lVar3 = __read_nocancel(iVar1,pcVar7,(long)pcVar5 - (long)pcVar7);
          if (lVar3 < 0) goto LAB_00766ab5;
          pcVar5 = pcVar7 + lVar3;
          pvVar2 = memchr(local_448,10,(long)pcVar5 - (long)local_448);
          __s = local_448;
          pcVar7 = pcVar5;
          if (pvVar2 != (void *)0x0) goto LAB_00766aa2;
          if (pcVar5 == local_48) {
            do {
              sVar4 = __read_nocancel(iVar1,local_148,0x100);
              if ((long)sVar4 < 0) goto LAB_00766ab5;
              pcVar5 = local_148 + sVar4;
              pvVar2 = memchr(local_148,10,sVar4);
              local_148[0] = '\n';
              pcVar7 = pcVar5;
              if (pvVar2 != (void *)0x0) goto LAB_00766aa2;
            } while (pcVar5 == local_48);
          }
        }
      }
      else {
LAB_00766aa2:
        pcVar5 = (char *)((long)pvVar2 + 1);
        if (pcVar7 < pcVar5) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("*cp <= *re","../sysdeps/unix/sysv/linux/getsysstats.c",0x68,"next_line");
        }
      }
      if ((((pcVar7 == __s) || (*__s != 'c')) || (__s[1] != 'p')) || (__s[2] != 'u'))
      goto LAB_00766ab5;
      iVar6 = iVar6 + (uint)((int)__s[3] - 0x30U < 10);
      __s = pcVar5;
      pcVar5 = pcVar7;
    } while( true );
  }
LAB_00766abd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar6;
LAB_00766ab5:
  __close_nocancel(iVar1);
  goto LAB_00766abd;
}

