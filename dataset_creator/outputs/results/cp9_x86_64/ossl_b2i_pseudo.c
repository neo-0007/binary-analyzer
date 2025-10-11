
void ossl_b2i(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = -1;
  uVar1 = do_b2i_key_isra_0(*param_1,param_2,&local_14,param_3);
  uVar2 = 6;
  if ((local_14 != 0) && (uVar2 = 0x74, local_14 != 1)) {
    uVar2 = 0;
  }
  evp_pkey_new0_key(uVar1,uVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

