
hostent * gethostbyname(char *__name)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  hostent *phVar4;
  long in_FS_OFFSET;
  bool bVar5;
  int local_3c;
  hostent *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_3c = 0;
  lVar2 = __resolv_context_get();
  if (lVar2 == 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
    phVar4 = (hostent *)0x0;
    goto LAB_00768819;
  }
  LOCK();
  bVar5 = lock == 0;
  if (bVar5) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar5) {
    __lll_lock_wait_private(&lock);
  }
  if (buffer == (char *)0x0) {
    buffer_size_1 = 0x400;
    buffer = (char *)malloc(0x400);
    if (buffer != (char *)0x0) goto LAB_0076873f;
LAB_00768875:
    local_38 = (hostent *)0x0;
  }
  else {
LAB_0076873f:
    iVar1 = __nss_hostname_digits_dots_context
                      (lVar2,__name,resbuf_0,&buffer,&buffer_size_1,0,&local_38,0,2,&local_3c);
    if (iVar1 == 0) {
      pcVar3 = buffer;
      if (buffer != (char *)0x0) {
        do {
          buffer = pcVar3;
          iVar1 = gethostbyname_r(__name,(hostent *)resbuf_0,buffer,buffer_size_1,&local_38,
                                  &local_3c);
          if ((iVar1 != 0x22) || (local_3c != -1)) {
            if (buffer == (char *)0x0) goto LAB_00768875;
            goto LAB_007687f3;
          }
          buffer_size_1 = buffer_size_1 * 2;
          pcVar3 = (char *)realloc(buffer,buffer_size_1);
        } while (pcVar3 != (char *)0x0);
        free(buffer);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
        buffer = (char *)0x0;
      }
      goto LAB_00768875;
    }
  }
LAB_007687f3:
  iVar1 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&lock);
  }
  __resolv_context_put(lVar2);
  phVar4 = local_38;
  if (local_3c != 0) {
    *(int *)(in_FS_OFFSET + -0x18) = local_3c;
  }
LAB_00768819:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return phVar4;
}

