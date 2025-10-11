
int ENGINE_register_digests(ENGINE *e)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  iVar2 = 1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(e + 0x40) != (code *)0x0) {
    iVar1 = (**(code **)(e + 0x40))(e,0,&local_28,0);
    if (0 < iVar1) {
      iVar2 = engine_table_register(&digest_table,engine_unregister_all_digests,e,local_28,iVar1,0);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

