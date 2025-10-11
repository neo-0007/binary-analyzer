
ulong EVP_PKEY_get_default_digest_name(EVP_PKEY *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char *pcVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)&param_1->references == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = evp_keymgmt_util_get_deflt_digest_name
                        (*(undefined8 *)&param_1[1].save_parameters,param_1[1].attributes,param_2,
                         param_3);
      return uVar3;
    }
  }
  else {
    local_24 = 0;
    uVar1 = EVP_PKEY_get_default_digest_nid(param_1,&local_24);
    if (0 < (int)uVar1) {
      pcVar2 = OBJ_nid2sn(local_24);
      OPENSSL_strlcpy(param_2,pcVar2,param_3);
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      return (ulong)uVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

