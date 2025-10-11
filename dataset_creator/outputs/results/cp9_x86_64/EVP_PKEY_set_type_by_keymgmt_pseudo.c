
undefined8 EVP_PKEY_set_type_by_keymgmt(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (char *)0x0;
  local_30 = 0;
  iVar2 = EVP_KEYMGMT_names_do_all(param_2,find_ameth,&local_38);
  pcVar1 = local_38;
  if ((iVar2 == 0) || (local_30 != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0x655,"EVP_PKEY_set_type_by_keymgmt");
    ERR_set_error(6,0xc0103,0);
    uVar4 = 0;
  }
  else {
    uVar5 = 0xffffffff;
    if (local_38 != (char *)0x0) {
      sVar3 = strlen(local_38);
      uVar5 = sVar3 & 0xffffffff;
    }
    uVar4 = pkey_set_type(param_1,0,0,pcVar1,uVar5,param_2);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

