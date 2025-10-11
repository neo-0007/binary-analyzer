
long EVP_PKEY_get1_encoded_public_key(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 0) || (*(long *)(param_1 + 0x60) == 0)) {
    if ((*(long *)(param_1 + 8) != 0) &&
       ((pcVar1 = *(code **)(*(long *)(param_1 + 8) + 0xb0), pcVar1 != (code *)0x0 &&
        (iVar2 = (*pcVar1)(param_1,10,0,param_2), 0 < iVar2)))) {
      lVar4 = (long)iVar2;
      goto LAB_00532fd2;
    }
  }
  else {
    local_28 = -1;
    EVP_PKEY_get_octet_string_param(param_1,"encoded-pub-key",0,0,&local_28);
    if (local_28 != -1) {
      pvVar3 = CRYPTO_malloc((int)local_28,"../crypto/evp/p_lib.c",0x578);
      *param_2 = pvVar3;
      if ((pvVar3 != (void *)0x0) &&
         (iVar2 = EVP_PKEY_get_octet_string_param(param_1,"encoded-pub-key",pvVar3,local_28,0),
         lVar4 = local_28, iVar2 != 0)) goto LAB_00532fd2;
    }
  }
  lVar4 = 0;
LAB_00532fd2:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return lVar4;
}

