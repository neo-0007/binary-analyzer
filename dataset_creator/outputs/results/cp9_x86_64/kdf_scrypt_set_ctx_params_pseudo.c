
ulong kdf_scrypt_set_ctx_params(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 1;
  if (param_2 == 0) goto LAB_00467f90;
  lVar3 = OSSL_PARAM_locate_const(param_2,"pass");
  if (lVar3 != 0) {
    uVar2 = scrypt_set_membuf(param_1 + 0x10,param_1 + 0x18,lVar3);
    if ((int)uVar2 == 0) goto LAB_00467f90;
  }
  lVar3 = OSSL_PARAM_locate_const(param_2,"salt");
  if (lVar3 == 0) {
LAB_00467e1b:
    lVar3 = OSSL_PARAM_locate_const(param_2,"n");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_28);
      if (((iVar1 == 0) || (local_28 < 2)) || ((local_28 - 1 & local_28) != 0)) goto LAB_00467fe0;
      *(ulong *)(param_1 + 0x30) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"r");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00467fe0;
      *(ulong *)(param_1 + 0x38) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"p");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00467fe0;
      *(ulong *)(param_1 + 0x40) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"maxmem_bytes");
    if (lVar3 != 0) {
      iVar1 = OSSL_PARAM_get_uint64(lVar3,&local_28);
      if ((iVar1 == 0) || (local_28 == 0)) goto LAB_00467fe0;
      *(ulong *)(param_1 + 0x48) = local_28;
    }
    lVar3 = OSSL_PARAM_locate_const(param_2,"properties");
    uVar2 = 1;
    if (lVar3 == 0) goto LAB_00467f90;
    if (*(int *)(lVar3 + 8) == 4) {
      pcVar4 = *(char **)(lVar3 + 0x10);
      CRYPTO_free(*(void **)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      if (pcVar4 != (char *)0x0) {
        pcVar4 = CRYPTO_strdup(pcVar4,"../providers/implementations/kdfs/scrypt.c",0x8f);
        *(char **)(param_1 + 8) = pcVar4;
        if (pcVar4 == (char *)0x0) {
          ERR_new();
          ERR_set_debug("../providers/implementations/kdfs/scrypt.c",0x91,"set_property_query");
          ERR_set_error(0x39,0xc0100,0);
          goto LAB_00467fe0;
        }
      }
      iVar1 = set_digest(param_1);
      uVar2 = (ulong)(iVar1 != 0);
      goto LAB_00467f90;
    }
  }
  else {
    iVar1 = scrypt_set_membuf(param_1 + 0x20,param_1 + 0x28,lVar3);
    if (iVar1 != 0) goto LAB_00467e1b;
  }
LAB_00467fe0:
  uVar2 = 0;
LAB_00467f90:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

