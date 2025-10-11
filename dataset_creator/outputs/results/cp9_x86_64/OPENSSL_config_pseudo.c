
void OPENSSL_config(char *config_name)

{
  char *pcVar1;
  long in_FS_OFFSET;
  undefined1 local_28 [16];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  if (config_name != (char *)0x0) {
    pcVar1 = strdup(config_name);
    local_28._8_8_ = pcVar1;
  }
  local_18 = 0x32;
  OPENSSL_init_crypto(0x40,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

