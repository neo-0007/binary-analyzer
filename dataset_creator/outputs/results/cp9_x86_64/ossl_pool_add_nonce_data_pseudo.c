
void ossl_pool_add_nonce_data(undefined8 param_1)

{
  __pid_t _Var1;
  int iVar2;
  pthread_t pVar3;
  long in_FS_OFFSET;
  timespec local_48;
  undefined1 local_38 [16];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  _Var1 = getpid();
  local_38._0_4_ = _Var1;
  pVar3 = CRYPTO_THREAD_get_current_id();
  local_38._8_8_ = pVar3;
  iVar2 = clock_gettime(0,&local_48);
  if (iVar2 != 0) {
    iVar2 = gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
    if (iVar2 != 0) {
      local_28 = time((time_t *)0x0);
      goto LAB_0047a011;
    }
  }
  local_28 = (local_48.tv_sec << 0x20) + local_48.tv_nsec;
LAB_0047a011:
  ossl_rand_pool_add(param_1,local_38,0x18,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

