
int closedir(DIR *__dirp)

{
  undefined4 uVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  if (__dirp != (DIR *)0x0) {
    uVar1 = *(undefined4 *)__dirp;
    free(__dirp);
    iVar2 = __close_nocancel(uVar1);
    return iVar2;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
  return -1;
}

