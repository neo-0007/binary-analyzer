
int unsetenv(char *__name)

{
  long *plVar1;
  int iVar2;
  char *pcVar3;
  size_t __n;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  if (((__name == (char *)0x0) || (*__name == '\0')) ||
     (pcVar3 = strchr(__name,0x3d), pcVar3 != (char *)0x0)) {
    iVar6 = -1;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  }
  else {
    __n = strlen(__name);
    LOCK();
    bVar7 = envlock == 0;
    if (bVar7) {
      envlock = 1;
    }
    UNLOCK();
    if (!bVar7) {
      __lll_lock_wait_private(&envlock);
    }
    plVar5 = environ;
    if (environ != (long *)0x0) {
      while (pcVar3 = (char *)*plVar5, pcVar3 != (char *)0x0) {
        iVar2 = strncmp(pcVar3,__name,__n);
        if ((iVar2 == 0) && (plVar4 = plVar5, pcVar3[__n] == '=')) {
          do {
            plVar1 = plVar4 + 1;
            *plVar4 = *plVar1;
            plVar4 = plVar4 + 1;
          } while (*plVar1 != 0);
        }
        else {
          plVar5 = plVar5 + 1;
        }
      }
    }
    iVar2 = envlock;
    LOCK();
    envlock = 0;
    UNLOCK();
    iVar6 = 0;
    if (1 < iVar2) {
      __lll_lock_wake_private(&envlock);
      iVar6 = 0;
    }
  }
  return iVar6;
}

