
int EVP_PKEY_get_bn_param_part_0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  void *ptr;
  long lVar3;
  undefined8 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  void *local_8b8;
  long lStack_8b0;
  long local_8a8;
  undefined8 local_898;
  undefined8 uStack_890;
  void *local_888;
  long lStack_880;
  long local_878;
  undefined8 local_870;
  undefined8 uStack_868;
  void *local_860;
  long lStack_858;
  long local_850;
  undefined8 local_848 [257];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = local_848;
  for (lVar3 = 0x100; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  OSSL_PARAM_construct_BN(&local_8c8,param_2,local_848,0x800);
  local_878 = local_8a8;
  local_898 = local_8c8;
  uStack_890 = uStack_8c0;
  local_888 = local_8b8;
  lStack_880 = lStack_8b0;
  OSSL_PARAM_construct_end(&local_8c8);
  local_850 = local_8a8;
  local_870 = local_8c8;
  uStack_868 = uStack_8c0;
  local_860 = local_8b8;
  lStack_858 = lStack_8b0;
  iVar1 = EVP_PKEY_get_params(param_1,&local_898);
  if (iVar1 == 0) {
    iVar1 = 0;
    iVar2 = OSSL_PARAM_modified(&local_898);
    lVar3 = local_878;
    if (((iVar2 == 0) || (local_878 == 0)) ||
       (ptr = (void *)CRYPTO_zalloc(local_878,"../crypto/evp/p_lib.c",0x858), ptr == (void *)0x0))
    goto LAB_00532d20;
    lStack_880 = lVar3;
    local_888 = ptr;
    iVar1 = EVP_PKEY_get_params(param_1,&local_898);
    if (iVar1 != 0) goto LAB_00532d59;
    iVar1 = 0;
  }
  else {
    ptr = (void *)0x0;
LAB_00532d59:
    iVar1 = OSSL_PARAM_modified(&local_898);
    if (iVar1 != 0) {
      iVar1 = OSSL_PARAM_get_BN(&local_898,param_3);
      CRYPTO_free(ptr);
      goto LAB_00532d20;
    }
  }
  CRYPTO_free(ptr);
LAB_00532d20:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

