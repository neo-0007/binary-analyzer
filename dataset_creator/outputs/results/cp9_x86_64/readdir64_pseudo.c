
dirent64 * readdir64(DIR *__dirp)

{
  DIR *pDVar1;
  int iVar2;
  undefined4 uVar3;
  __off64_t _Var4;
  __ino64_t _Var5;
  dirent64 *pdVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long in_FS_OFFSET;
  
  pDVar1 = __dirp + 4;
  uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
  LOCK();
  iVar2 = *(int *)pDVar1;
  if (iVar2 == 0) {
    *(int *)pDVar1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    __lll_lock_wait_private(pDVar1);
  }
  uVar9 = *(ulong *)(__dirp + 0x18);
  uVar7 = *(ulong *)(__dirp + 0x10);
  do {
    lVar8 = uVar9 + 0x30;
    if (uVar7 <= uVar9) {
      uVar7 = getdents64(*(undefined4 *)__dirp,__dirp + 0x30,*(undefined8 *)(__dirp + 8));
      if ((long)uVar7 < 1) {
        if ((uVar7 == 0) || (pdVar6 = (dirent64 *)0x0, *(int *)(in_FS_OFFSET + -0x58) == 2)) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
          pdVar6 = (dirent64 *)0x0;
        }
        break;
      }
      *(ulong *)(__dirp + 0x10) = uVar7;
      uVar9 = 0;
      lVar8 = 0x30;
    }
    pdVar6 = (dirent64 *)(__dirp + lVar8);
    uVar9 = uVar9 + pdVar6->d_reclen;
    _Var4 = pdVar6->d_off;
    _Var5 = pdVar6->d_ino;
    *(ulong *)(__dirp + 0x18) = uVar9;
    *(__off64_t *)(__dirp + 0x20) = _Var4;
  } while (_Var5 == 0);
  LOCK();
  iVar2 = *(int *)(__dirp + 4);
  *(int *)(__dirp + 4) = 0;
  UNLOCK();
  if (1 < iVar2) {
    __lll_lock_wake_private(pDVar1);
    return pdVar6;
  }
  return pdVar6;
}

