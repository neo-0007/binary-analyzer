
/* WARNING: Removing unreachable block (ram,0x007993f9) */

int pthread_sigmask(int __how,__sigset_t *__newmask,__sigset_t *__oldmask)

{
  __sigset_t *p_Var1;
  long in_FS_OFFSET;
  __sigset_t local_98;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  p_Var1 = (__sigset_t *)0x0;
  if ((__newmask != (__sigset_t *)0x0) &&
     (p_Var1 = __newmask, (__newmask->__val[0] & 0x180000000) != 0)) {
    local_98.__val[1] = __newmask->__val[1];
    local_98.__val[2] = __newmask->__val[2];
    local_98.__val[3] = __newmask->__val[3];
    local_98.__val[4] = __newmask->__val[4];
    local_98.__val[5] = __newmask->__val[5];
    local_98.__val[6] = __newmask->__val[6];
    local_98.__val[7] = __newmask->__val[7];
    local_98.__val[0] = __newmask->__val[0] & 0xfffffffe7fffffff;
    local_98.__val[8] = __newmask->__val[8];
    local_98.__val[9] = __newmask->__val[9];
    local_98.__val[10] = __newmask->__val[10];
    local_98.__val[0xb] = __newmask->__val[0xb];
    local_98.__val[0xc] = __newmask->__val[0xc];
    local_98.__val[0xd] = __newmask->__val[0xd];
    local_98.__val[0xe] = __newmask->__val[0xe];
    local_98.__val[0xf] = __newmask->__val[0xf];
    p_Var1 = &local_98;
  }
  syscall();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(__how,p_Var1);
}

