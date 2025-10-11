
int dl_iterate_phdr(code *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  long local_68;
  long lStack_60;
  long local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_write_lock);
  uVar4 = (ulong)DAT_00931b88;
  if (_dl_ns != (undefined *)0x0) {
    puVar3 = _dl_ns;
    do {
      puVar1 = *(undefined8 **)(puVar3 + 0x28);
      local_88 = *puVar1;
      local_80 = puVar1[1];
      local_50 = 0;
      local_70 = *(undefined2 *)(puVar1 + 0x57);
      uStack_78 = puVar1[0x55];
      local_68 = _dl_load_adds;
      lStack_60 = _dl_load_adds - uVar4;
      local_58 = puVar1[0x8c];
      if (local_58 != 0) {
        local_50 = _dl_tls_get_addr_soft();
      }
                    /* try { // try from 00784433 to 007844b4 has its CatchHandler @ 007844fc */
      iVar2 = (*param_1)(&local_88,0x40,param_2);
      if (iVar2 != 0) goto LAB_007844c3;
      puVar3 = *(undefined **)(puVar3 + 0x18);
    } while (puVar3 != (undefined *)0x0);
  }
  iVar2 = 0;
LAB_007844c3:
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_write_lock);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

