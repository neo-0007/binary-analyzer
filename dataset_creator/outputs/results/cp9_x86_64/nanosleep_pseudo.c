
int nanosleep(timespec *__requested_time,timespec *__remaining)

{
  int iVar1;
  long in_FS_OFFSET;
  
  iVar1 = clock_nanosleep(0,0,__requested_time,__remaining);
  if (iVar1 != 0) {
    *(int *)(in_FS_OFFSET + -0x58) = iVar1;
    iVar1 = -1;
  }
  return iVar1;
}

