
int BIO_socket_nbio(int fd,int mode)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = mode;
  iVar1 = BIO_socket_ioctl(fd,0x5421,&local_14);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(iVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

