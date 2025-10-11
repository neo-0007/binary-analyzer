
int get_nprocs_cpu_online(void)

{
  int iVar1;
  size_t sVar2;
  void *pvVar3;
  uintmax_t uVar4;
  uintmax_t uVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  long in_FS_OFFSET;
  char *local_450;
  char local_448 [768];
  char local_148 [256];
  char local_48 [8];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __open64_nocancel("/sys/devices/system/cpu/online",0x80000);
  if (iVar1 == -1) goto LAB_0076686d;
  pcVar6 = local_448;
  sVar2 = __read_nocancel(iVar1,pcVar6,0x400);
  if ((long)sVar2 < 0) {
LAB_00766938:
    iVar8 = 0;
  }
  else {
    pcVar7 = pcVar6 + sVar2;
    pvVar3 = memchr(pcVar6,10,sVar2);
    if (pvVar3 == (void *)0x0) {
      if (pcVar7 == local_48) {
        do {
          sVar2 = __read_nocancel(iVar1,local_148,0x100);
          if ((long)sVar2 < 0) goto LAB_00766938;
          pcVar7 = local_148 + sVar2;
          pvVar3 = memchr(local_148,10,sVar2);
          local_148[0] = '\n';
          if (pvVar3 != (void *)0x0) goto LAB_007669e0;
        } while (pcVar7 == local_48);
      }
    }
    else {
LAB_007669e0:
      if (pcVar7 < (char *)((long)pvVar3 + 1)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("*cp <= *re","../sysdeps/unix/sysv/linux/getsysstats.c",0x68,"next_line");
      }
    }
    if (pcVar7 == pcVar6) goto LAB_00766938;
    iVar8 = 0;
    do {
      uVar4 = strtouq(pcVar6,&local_450,10);
      if (local_450 == pcVar6) goto LAB_00766938;
      uVar5 = uVar4;
      if (*local_450 == '-') {
        pcVar6 = local_450 + 1;
        uVar5 = strtouq(pcVar6,&local_450,10);
        if (local_450 == pcVar6) goto LAB_00766938;
        if (uVar4 <= uVar5) goto LAB_00766960;
      }
      else {
LAB_00766960:
        iVar8 = ((iVar8 + 1) - (int)uVar4) + (int)uVar5;
      }
    } while ((local_450 < pcVar7) &&
            (((pcVar6 = local_450, *local_450 != ',' || (pcVar6 = local_450 + 1, pcVar6 < pcVar7))
             && (*pcVar6 != '\n'))));
  }
  __close_nocancel(iVar1);
LAB_0076686d:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar8;
}

