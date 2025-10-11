
/* WARNING: Removing unreachable block (ram,0x007013ec) */
/* WARNING: Removing unreachable block (ram,0x00701350) */
/* WARNING: Removing unreachable block (ram,0x00701358) */
/* WARNING: Removing unreachable block (ram,0x0070135e) */
/* WARNING: Removing unreachable block (ram,0x007013f8) */

undefined8 __pthread_once_slow(uint *param_1,code *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long in_FS_OFFSET;
  bool bVar4;
  code *local_58;
  uint *local_50;
  undefined4 local_48;
  undefined1 auStack_44 [12];
  undefined1 local_38 [16];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    uVar2 = *param_1;
    do {
      if ((uVar2 & 2) != 0) goto LAB_00701301;
      uVar3 = __fork_generation | 1;
      LOCK();
      uVar1 = *param_1;
      bVar4 = uVar2 == uVar1;
      if (bVar4) {
        *param_1 = uVar3;
        uVar1 = uVar2;
      }
      uVar2 = uVar1;
      UNLOCK();
    } while (!bVar4);
    if ((uVar3 != uVar2) || ((uVar2 & 1) == 0)) break;
    syscall();
  }
  local_28 = 0;
  local_58 = clear_once_control;
  auStack_44 = SUB1612((undefined1  [16])0x0,4);
  local_48 = 1;
  local_38 = (undefined1  [16])0x0;
  local_50 = param_1;
                    /* try { // try from 007013b1 to 007013c1 has its CatchHandler @ 00701402 */
  __pthread_cleanup_push(auStack_44 + 4,__pthread_cleanup_combined_routine_voidptr,&local_58);
  (*param_2)();
  _pthread_cleanup_pop(auStack_44 + 4,0);
  *param_1 = 2;
  syscall();
LAB_00701301:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(param_1);
}

