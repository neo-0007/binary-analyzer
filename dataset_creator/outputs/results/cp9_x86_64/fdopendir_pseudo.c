
DIR * fdopendir(int __fd)

{
  int iVar1;
  uint uVar2;
  DIR *pDVar3;
  long in_FS_OFFSET;
  stat sStack_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = fstat(__fd,&sStack_b8);
  if (-1 < iVar1) {
    if ((sStack_b8.st_mode & 0xf000) == 0x4000) {
      uVar2 = __fcntl64_nocancel(__fd,3);
      if (uVar2 != 0xffffffff) {
        if ((uVar2 & 3) == 1) {
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
          pDVar3 = (DIR *)0x0;
        }
        else {
          pDVar3 = (DIR *)__alloc_dir(__fd,0,uVar2,&sStack_b8);
        }
        goto LAB_007a16fb;
      }
    }
    else {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x14;
    }
  }
  pDVar3 = (DIR *)0x0;
LAB_007a16fb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pDVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

