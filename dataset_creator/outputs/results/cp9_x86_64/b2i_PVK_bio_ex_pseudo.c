
void b2i_PVK_bio_ex(void)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 uStack_20;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = do_PVK_key_bio();
  evp_pkey_new0_key(uVar2,0,0,uStack_20);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

