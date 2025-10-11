
void ossl_rand_pool_add_additional_data(undefined8 param_1)

{
  __pid_t _Var1;
  uint uVar2;
  int iVar3;
  pthread_t pVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  timespec local_48;
  undefined1 local_38 [16];
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (undefined1  [16])0x0;
  local_28 = 0;
  _Var1 = openssl_get_fork_id();
  local_38._0_4_ = _Var1;
  pVar4 = CRYPTO_THREAD_get_current_id();
  local_38._8_8_ = pVar4;
  uVar2 = OPENSSL_rdtsc();
  uVar5 = (ulong)uVar2;
  if (uVar5 == 0) {
    iVar3 = clock_gettime(7,&local_48);
    if (iVar3 != 0) {
      iVar3 = gettimeofday((timeval *)&local_48,(__timezone_ptr_t)0x0);
      if (iVar3 != 0) {
        uVar5 = time((time_t *)0x0);
        goto LAB_0047a0bf;
      }
    }
    uVar5 = (local_48.tv_sec << 0x20) + local_48.tv_nsec;
  }
LAB_0047a0bf:
  local_28 = uVar5;
  ossl_rand_pool_add(param_1,local_38,0x18,0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

