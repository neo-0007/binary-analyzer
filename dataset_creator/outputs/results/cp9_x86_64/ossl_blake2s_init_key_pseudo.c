
undefined8 ossl_blake2s_init_key(undefined8 param_1,long param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68[0] = blake2s_init_param(0);
  local_58 = local_68[0];
  local_48 = local_68[0];
  local_38 = local_68[0];
  __memcpy_chk(local_68,param_3,*(undefined1 *)(param_2 + 1),0x40);
  ossl_blake2s_update(param_1,local_68,0x40);
  OPENSSL_cleanse(local_68,0x40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

