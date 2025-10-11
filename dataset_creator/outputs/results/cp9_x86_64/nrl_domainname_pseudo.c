
/* WARNING: Type propagation algorithm not settling */

char * nrl_domainname(void)

{
  long lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  char *__name;
  ulong uVar6;
  char **ppcVar7;
  char **ppcVar8;
  char **ppcVar9;
  long in_FS_OFFSET;
  bool bVar11;
  char *local_498;
  char *local_490;
  int local_488 [2];
  hostent *local_480;
  hostent local_478;
  char *local_458;
  size_t local_450;
  char local_448 [1032];
  long local_40;
  char **ppcVar10;
  
  ppcVar7 = &local_498;
  ppcVar10 = &local_498;
  ppcVar9 = &local_498;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppcVar8 = &local_498;
  if (not_first_1 != 0) goto LAB_0076968d;
  LOCK();
  bVar11 = lock_0 == 0;
  if (bVar11) {
    lock_0 = 1;
  }
  UNLOCK();
  if (!bVar11) {
    __lll_lock_wait_private(&lock_0);
  }
  if (not_first_1 == 0) {
    local_490 = local_448;
    local_450 = 0x400;
    not_first_1 = 1;
    local_458 = local_490;
    do {
      iVar3 = gethostbyname_r("localhost",&local_478,local_458,local_450,&local_480,local_488);
      if (((iVar3 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) {
        if ((local_480 != (hostent *)0x0) &&
           (pcVar4 = strchr(local_480->h_name,0x2e), ppcVar8 = &local_498, pcVar4 != (char *)0x0))
        goto LAB_007697de;
        goto LAB_00769800;
      }
      cVar2 = __libc_scratch_buffer_grow(&local_458);
      ppcVar7 = &local_498;
    } while (cVar2 != '\0');
    goto LAB_00769785;
  }
  goto LAB_0076979a;
code_r0x00769817:
  cVar2 = __libc_scratch_buffer_grow(&local_458);
  ppcVar7 = &local_498;
  if (cVar2 == '\0') goto LAB_00769785;
LAB_00769800:
  iVar3 = gethostname(local_458,local_450);
  if (iVar3 != 0) goto code_r0x00769817;
  local_498 = local_458;
  pcVar4 = strchr(local_458,0x2e);
  ppcVar8 = &local_498;
  if (pcVar4 != (char *)0x0) goto LAB_007697de;
  sVar5 = strlen(local_498);
  ppcVar7 = &local_498;
  while (ppcVar10 != (char **)((long)&local_498 - (sVar5 + 0x18 & 0xfffffffffffff000))) {
    ppcVar9 = (char **)((long)ppcVar7 + -0x1000);
    *(undefined8 *)((long)ppcVar7 + -8) = *(undefined8 *)((long)ppcVar7 + -8);
    ppcVar10 = (char **)((long)ppcVar7 + -0x1000);
    ppcVar7 = (char **)((long)ppcVar7 + -0x1000);
  }
  uVar6 = (ulong)((uint)(sVar5 + 0x18) & 0xff0);
  lVar1 = -uVar6;
  ppcVar7 = (char **)((long)ppcVar9 + lVar1);
  if (uVar6 != 0) {
    *(undefined8 *)((long)ppcVar9 + -8) = *(undefined8 *)((long)ppcVar9 + -8);
  }
  *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x7698f4;
  __name = (char *)memcpy((void *)((ulong)((long)ppcVar9 + lVar1 + 0xf) & 0xfffffffffffffff0),
                          local_498,sVar5 + 1);
  pcVar4 = local_498;
  while( true ) {
    *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x769922;
    iVar3 = gethostbyname_r(__name,&local_478,pcVar4,local_450,&local_480,local_488);
    if (((iVar3 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) break;
    *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x769944;
    cVar2 = __libc_scratch_buffer_grow(&local_458);
    pcVar4 = local_458;
    if (cVar2 == '\0') goto LAB_00769785;
  }
  if (local_480 == (hostent *)0x0) {
LAB_0076996f:
    local_488[1] = 0x100007f;
    do {
      *(int **)((long)ppcVar9 + lVar1 + -8) = local_488;
      *(hostent ***)((long)ppcVar9 + lVar1 + -0x10) = &local_480;
      *(undefined8 *)((long)ppcVar9 + lVar1 + -0x18) = 0x7699ad;
      iVar3 = gethostbyaddr_r(local_488 + 1,4,2,&local_478,local_458,local_450,
                              *(hostent ***)((long)ppcVar9 + lVar1 + -0x10),
                              *(int **)((long)ppcVar9 + lVar1 + -8));
      if (((iVar3 == 0) || (local_488[0] != -1)) || (*(int *)(in_FS_OFFSET + -0x58) != 0x22)) {
        ppcVar7 = (char **)((long)ppcVar9 + lVar1);
        if (local_480 != (hostent *)0x0) {
          pcVar4 = local_480->h_name;
          *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x7699f7;
          pcVar4 = strchr(pcVar4,0x2e);
          ppcVar7 = (char **)((long)ppcVar9 + lVar1);
          ppcVar8 = (char **)((long)ppcVar9 + lVar1);
          if (pcVar4 != (char *)0x0) goto LAB_007697de;
        }
        break;
      }
      *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x7699d1;
      cVar2 = __libc_scratch_buffer_grow(&local_458);
      ppcVar7 = (char **)((long)ppcVar9 + lVar1);
    } while (cVar2 != '\0');
  }
  else {
    pcVar4 = local_480->h_name;
    *(undefined8 *)((long)ppcVar9 + lVar1 + -8) = 0x769966;
    pcVar4 = strchr(pcVar4,0x2e);
    ppcVar8 = (char **)((long)ppcVar9 + lVar1);
    if (pcVar4 == (char *)0x0) goto LAB_0076996f;
LAB_007697de:
    *(undefined8 *)((long)ppcVar8 + -8) = 0x7697e7;
    domain = strdup(pcVar4 + 1);
    ppcVar7 = ppcVar8;
  }
LAB_00769785:
  pcVar4 = local_458;
  if (local_458 != local_490) {
    *(undefined8 *)((long)ppcVar7 + -8) = 0x76979a;
    free(pcVar4);
  }
LAB_0076979a:
  iVar3 = lock_0;
  LOCK();
  lock_0 = 0;
  UNLOCK();
  ppcVar8 = ppcVar7;
  if (1 < iVar3) {
    *(undefined8 *)((long)ppcVar7 + -8) = 0x7697b7;
    __lll_lock_wake_private(&lock_0);
  }
LAB_0076968d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return domain;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((long)ppcVar8 + -8) = &UNK_00769a0a;
  __stack_chk_fail_local();
}

