
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__construct_ios_failure(void*, char const*) */

void std::__construct_ios_failure(void *param_1,char *param_2)

{
  int iVar1;
  size_t __n;
  size_t *psVar2;
  long in_FS_OFFSET;
  allocator local_3a [2];
  size_t *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_S_construct null not valid");
  }
  __n = strlen(param_2);
  if (__n == 0) {
    local_38 = (size_t *)&DAT_00938278;
  }
  else {
    psVar2 = (size_t *)string::_Rep::_S_create(__n,0,local_3a);
    local_38 = psVar2 + 3;
    if (__n == 1) {
      *(char *)(psVar2 + 3) = *param_2;
    }
    else {
      local_38 = (size_t *)memcpy(local_38,param_2,__n);
    }
    if (psVar2 != &string::_Rep::_S_empty_rep_storage) {
      *(undefined4 *)(psVar2 + 2) = 0;
      *psVar2 = __n;
      *(undefined1 *)((long)psVar2 + __n + 0x18) = 0;
    }
  }
  ios_base::failure::failure((failure *)param_1,(string *)&local_38);
  if ((allocator *)(local_38 + -3) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      psVar2 = local_38 + -1;
      iVar1 = (int)*psVar2;
      *(int *)psVar2 = (int)*psVar2 + -1;
      UNLOCK();
    }
    else {
      iVar1 = (int)local_38[-1];
      *(int *)(local_38 + -1) = iVar1 + -1;
    }
    if (iVar1 < 1) {
      string::_Rep::_M_destroy((allocator *)(local_38 + -3));
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

