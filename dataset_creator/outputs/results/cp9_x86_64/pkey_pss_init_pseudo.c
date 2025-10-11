
undefined8 pkey_pss_init(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  RSA *rsa;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  lVar1 = *(long *)(param_1 + 0x98);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (**(int **)(param_1 + 0x78) == 0x390) {
    uVar5 = 1;
    rsa = (RSA *)EVP_PKEY_get0_RSA(*(undefined8 *)(param_1 + 0x88));
    if (rsa->_method_mod_p == (BN_MONT_CTX *)0x0) goto LAB_00431014;
    iVar2 = ossl_rsa_pss_get_param(rsa->_method_mod_p,&local_40,&local_38,&local_44);
    if (iVar2 != 0) {
      iVar2 = RSA_size(rsa);
      iVar3 = EVP_MD_get_size(local_40);
      uVar4 = RSA_bits(rsa);
      if (local_44 <= (int)((iVar2 - iVar3) - (uint)((uVar4 & 7) == 1))) {
        *(int *)(lVar1 + 0x34) = local_44;
        *(int *)(lVar1 + 0x30) = local_44;
        *(undefined8 *)(lVar1 + 0x20) = local_40;
        *(undefined8 *)(lVar1 + 0x28) = local_38;
        goto LAB_00431014;
      }
      ERR_new();
      ERR_set_debug("../crypto/rsa/rsa_pmeth.c",0x365,"pkey_pss_init");
      ERR_set_error(4,0x96,0);
    }
  }
  uVar5 = 0;
LAB_00431014:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

