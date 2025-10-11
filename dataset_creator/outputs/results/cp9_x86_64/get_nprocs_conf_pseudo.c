
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_nprocs_conf(void)

{
  DIR *__dirp;
  dirent64 *pdVar1;
  uintmax_t uVar2;
  int iVar3;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  iVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __dirp = opendir("/sys/devices/system/cpu");
  if (__dirp != (DIR *)0x0) {
LAB_00766d10:
    pdVar1 = readdir64(__dirp);
    if (pdVar1 != (dirent64 *)0x0) {
      while ((((pdVar1->d_type == '\x04' && (pdVar1->d_name[0] == 'c')) &&
              (pdVar1->d_name[1] == 'p')) && (pdVar1->d_name[2] == 'u'))) {
        uVar2 = strtouq(pdVar1->d_name + 3,&local_38,10);
        if ((uVar2 == 0xffffffffffffffff) || (pdVar1->d_name + 3 == local_38)) break;
        iVar3 = iVar3 + (uint)(*local_38 == '\0');
        pdVar1 = readdir64(__dirp);
        if (pdVar1 == (dirent64 *)0x0) goto LAB_00766d70;
      }
      goto LAB_00766d10;
    }
LAB_00766d70:
    closedir(__dirp);
    if (iVar3 != 0) goto LAB_00766d7d;
  }
  iVar3 = get_nproc_stat();
  if ((iVar3 == 0) && (iVar3 = __get_nprocs_sched(), iVar3 == 0)) {
    iVar3 = 2;
  }
LAB_00766d7d:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

