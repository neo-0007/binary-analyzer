
int pkey_dsa_paramgen(long param_1,EVP_PKEY *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  DSA *r;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined1 local_44 [4];
  long local_40;
  
  piVar1 = *(int **)(param_1 + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar3 = 0;
  }
  else {
    iVar2 = 0;
    lVar3 = BN_GENCB_new();
    if (lVar3 == 0) goto LAB_004cda45;
    evp_pkey_set_cb_translate(lVar3,param_1);
  }
  r = DSA_new();
  if (r == (DSA *)0x0) {
    iVar2 = 0;
    BN_GENCB_free(lVar3);
  }
  else {
    if (*(long *)(piVar1 + 6) != 0) {
      uVar4 = EVP_MD_get0_name();
      ossl_ffc_set_digest(&r->version,uVar4,0);
    }
    iVar2 = ossl_ffc_params_FIPS186_4_generate
                      (0,&r->version,0,(long)*piVar1,(long)piVar1[1],local_44,lVar3);
    BN_GENCB_free(lVar3);
    if (iVar2 < 1) {
      DSA_free(r);
    }
    else {
      EVP_PKEY_assign(param_2,0x74,r);
    }
  }
LAB_004cda45:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

