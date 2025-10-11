
DIR * opendir(char *__name)

{
  int __fd;
  int iVar1;
  DIR *pDVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*__name == '\0') {
    pDVar2 = (DIR *)0x0;
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 2;
  }
  else {
    __fd = __open64_nocancel(__name,0x90800);
    if (__fd < 0) {
      pDVar2 = (DIR *)0x0;
    }
    else {
      iVar1 = fstat(__fd,&sStack_b8);
      if (-1 < iVar1) {
        if ((sStack_b8.st_mode & 0xf000) == 0x4000) {
          uVar3 = sStack_b8.st_blksize;
          if ((ulong)sStack_b8.st_blksize < 0x8000) {
            uVar3 = 0x8000;
          }
          if (0x100000 < uVar3) {
            uVar3 = 0x100000;
          }
          pDVar2 = (DIR *)malloc(uVar3 + 0x30);
          if (pDVar2 == (DIR *)0x0) {
            __close_nocancel(__fd);
          }
          else {
            *(int *)pDVar2 = __fd;
            *(int *)(pDVar2 + 4) = 0;
            *(ulong *)(pDVar2 + 8) = uVar3;
            *(undefined8 *)(pDVar2 + 0x10) = 0;
            *(undefined8 *)(pDVar2 + 0x18) = 0;
            *(undefined8 *)(pDVar2 + 0x20) = 0;
            *(int *)(pDVar2 + 0x28) = 0;
          }
          goto LAB_0075ef53;
        }
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x14;
      }
      pDVar2 = (DIR *)0x0;
      __close_nocancel(__fd);
    }
  }
LAB_0075ef53:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pDVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

