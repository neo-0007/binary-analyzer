
bool dh_validate(DH *param_1,uint param_2,int param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  int local_3c;
  BIGNUM *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
LAB_0046c9a8:
    bVar2 = false;
  }
  else {
    if ((param_2 & 7) != 0) {
      if ((param_2 & 4) != 0) {
        if (param_3 == 1) {
          iVar1 = DH_check_params_ex();
          if (iVar1 != 0) {
            if ((param_2 & 2) == 0) goto joined_r0x0046c9f5;
            local_38 = (BIGNUM *)0x0;
            local_3c = 0;
            DH_get0_key(param_1,&local_38,0);
            if (local_38 != (BIGNUM *)0x0) goto LAB_0046ca7c;
          }
        }
        else {
          iVar1 = DH_check_ex(param_1);
          if (iVar1 != 0) {
            if ((param_2 & 2) == 0) goto joined_r0x0046c9f5;
            local_38 = (BIGNUM *)0x0;
            local_3c = 0;
            DH_get0_key(param_1,&local_38,0);
            if (local_38 != (BIGNUM *)0x0) goto LAB_0046c950;
          }
        }
        goto LAB_0046c9a8;
      }
      if ((param_2 & 2) != 0) {
        local_38 = (BIGNUM *)0x0;
        local_3c = 0;
        DH_get0_key(param_1,&local_38,0);
        if (local_38 == (BIGNUM *)0x0) goto LAB_0046c9a8;
        if (param_3 == 1) {
LAB_0046ca7c:
          iVar1 = ossl_dh_is_named_safe_prime_group(param_1);
          if (iVar1 == 0) goto LAB_0046c950;
          iVar1 = ossl_dh_check_pub_key_partial(param_1,local_38,&local_3c);
        }
        else {
LAB_0046c950:
          iVar1 = DH_check_pub_key(param_1,local_38,&local_3c);
        }
        if (iVar1 == 0) goto LAB_0046c9a8;
      }
joined_r0x0046c9f5:
      if ((param_2 & 1) != 0) {
        local_3c = 0;
        local_38 = (BIGNUM *)0x0;
        DH_get0_key(param_1,0,&local_38);
        bVar2 = false;
        if (local_38 == (BIGNUM *)0x0) goto LAB_0046c9aa;
        iVar1 = ossl_dh_check_priv_key(param_1,local_38,&local_3c);
        if (iVar1 == 0) goto LAB_0046c9a8;
      }
      if ((param_2 & 3) == 3) {
        iVar1 = ossl_dh_check_pairwise(param_1);
        bVar2 = iVar1 != 0;
        goto LAB_0046c9aa;
      }
    }
    bVar2 = true;
  }
LAB_0046c9aa:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return bVar2;
}

