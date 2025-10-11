
int wait_random_seeded(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  ssize_t sVar5;
  longlong lVar6;
  char *pcVar7;
  long lVar8;
  fd_set *pfVar9;
  long in_FS_OFFSET;
  byte bVar10;
  undefined1 local_239;
  fd_set local_238;
  utsname local_1b8;
  long local_30;
  
  bVar10 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = seeded_1;
  if (seeded_1 != 0) goto LAB_0047993c;
  iVar1 = shmget(0x72,1,0);
  if (iVar1 == -1) {
    iVar1 = uname(&local_1b8);
    if (iVar1 == 0) {
      lVar6 = strtoll(local_1b8.release,(char **)0x0,10);
      pcVar7 = strchr(local_1b8.release,0x2e);
      iVar2 = (int)lVar6;
      iVar1 = 0;
      if (pcVar7 == (char *)0x0) {
        if (4 < iVar2) goto LAB_0047993c;
      }
      else {
        lVar6 = strtoll(pcVar7 + 1,(char **)0x0,10);
        if ((4 < iVar2) || ((7 < (int)lVar6 && (iVar2 == 4)))) goto LAB_0047993c;
      }
    }
    iVar2 = open64("/dev/random",0);
    iVar1 = seeded_1;
    if (iVar2 != -1) {
      if (iVar2 < 0x400) {
        pfVar9 = &local_238;
        for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
          pfVar9->fds_bits[0] = 0;
          pfVar9 = (fd_set *)((long)pfVar9 + ((ulong)bVar10 * -2 + 1) * 8);
        }
        lVar8 = __fdelt_warn((long)iVar2);
        local_238.fds_bits[lVar8] = local_238.fds_bits[lVar8] | 1L << ((byte)iVar2 & 0x3f);
        do {
          iVar3 = select(iVar2 + 1,&local_238,(fd_set *)0x0,(fd_set *)0x0,(timeval *)0x0);
          if (-1 < iVar3) goto LAB_00479a5f;
          piVar4 = __errno_location();
        } while (*piVar4 == 4);
      }
      else {
        do {
          sVar5 = read(iVar2,&local_239,1);
          iVar3 = (int)sVar5;
          if (-1 < iVar3) goto LAB_00479a5f;
          piVar4 = __errno_location();
        } while (*piVar4 == 4);
      }
      close(iVar2);
      iVar1 = seeded_1;
    }
    goto LAB_0047993c;
  }
LAB_0047997e:
  seeded_1 = 1;
  shm_addr = shmat(iVar1,(void *)0x0,0x1000);
  if (shm_addr != (void *)0xffffffffffffffff) {
    OPENSSL_atexit(cleanup_shm);
    iVar1 = seeded_1;
    goto LAB_0047993c;
  }
  goto LAB_00479a97;
LAB_00479a5f:
  close(iVar2);
  iVar1 = seeded_1;
  if (iVar3 != 1) goto LAB_0047993c;
  seeded_1 = 1;
  iVar1 = shmget(0x72,1,0x324);
  if (iVar1 != -1) goto LAB_0047997e;
LAB_00479a97:
  iVar1 = 1;
LAB_0047993c:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

