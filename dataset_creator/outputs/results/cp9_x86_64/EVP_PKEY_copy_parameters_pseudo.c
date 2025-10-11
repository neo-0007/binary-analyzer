
int EVP_PKEY_copy_parameters(EVP_PKEY *to,EVP_PKEY *from)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  stack_st_X509_ATTRIBUTE *psVar5;
  long in_FS_OFFSET;
  EVP_PKEY *local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = to->type;
  local_30 = (EVP_PKEY *)0x0;
  if (iVar2 == 0) {
LAB_00531fc8:
    if (*(long *)&to[1].save_parameters == 0) {
      if ((from->type == 0) || (*(long *)&from[1].save_parameters != 0)) {
        iVar2 = EVP_PKEY_set_type_by_keymgmt(to);
      }
      else {
        iVar2 = EVP_PKEY_set_type(to,from->type);
      }
      if (iVar2 == 0) goto LAB_00531ff8;
    }
LAB_00531f5f:
    iVar2 = EVP_PKEY_missing_parameters(from);
    if (iVar2 != 0) {
      ERR_new();
      uVar3 = 0;
      ERR_set_debug("../crypto/evp/p_lib.c",0xa6,"EVP_PKEY_copy_parameters");
      ERR_set_error(6,0x67,0);
      goto LAB_00531ffb;
    }
    iVar2 = EVP_PKEY_missing_parameters(to);
    if (iVar2 == 0) {
      uVar3 = EVP_PKEY_parameters_eq(to,from);
      if (uVar3 != 1) {
        ERR_new();
        uVar3 = 0;
        ERR_set_debug("../crypto/evp/p_lib.c",0xae,"EVP_PKEY_copy_parameters");
        ERR_set_error(6,0x99,0);
      }
      goto LAB_00531ffb;
    }
    if (*(long *)&to[1].save_parameters != 0) {
      if (*(long *)&from[1].save_parameters != 0) {
        uVar3 = evp_keymgmt_util_copy(to,from,4);
        goto LAB_00531ffb;
      }
      if (to[1].attributes == (stack_st_X509_ATTRIBUTE *)0x0) {
        local_28 = *(long *)&to[1].save_parameters;
        lVar4 = evp_pkey_export_to_provider(from,0,&local_28,0);
        if (lVar4 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/p_lib.c",0xca,"EVP_PKEY_copy_parameters");
          ERR_set_error(6,0x65,0);
          uVar3 = 0;
        }
        else {
          psVar5 = (stack_st_X509_ATTRIBUTE *)
                   evp_keymgmt_dup(*(undefined8 *)&to[1].save_parameters,lVar4,4);
          to[1].attributes = psVar5;
          uVar3 = (uint)(psVar5 != (stack_st_X509_ATTRIBUTE *)0x0);
        }
        goto LAB_00531ffb;
      }
    }
    if ((*(long *)&from->references != 0) &&
       (pcVar1 = *(code **)(*(long *)&from->references + 0x88), pcVar1 != (code *)0x0)) {
      uVar3 = (*pcVar1)(to,from);
      goto LAB_00531ffb;
    }
  }
  else {
    if (*(long *)&to[1].save_parameters != 0) goto LAB_00531f5f;
    if (*(long *)&from[1].save_parameters != 0) {
      iVar2 = evp_pkey_copy_downgraded(&local_30);
      if (iVar2 == 0) goto LAB_00531ff8;
      iVar2 = to->type;
      from = local_30;
      if (iVar2 == 0) goto LAB_00531fc8;
      if (*(long *)&to[1].save_parameters != 0) goto LAB_00531f5f;
    }
    if (from->type == iVar2) goto LAB_00531f5f;
    ERR_new();
    ERR_set_debug("../crypto/evp/p_lib.c",0xa0,"EVP_PKEY_copy_parameters");
    ERR_set_error(6,0x65,0);
  }
LAB_00531ff8:
  uVar3 = 0;
LAB_00531ffb:
  EVP_PKEY_free(local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

