
uint ossl_dsa_check_pairwise(long param_1)

{
  uint uVar1;
  int iVar2;
  BN_CTX *c;
  BIGNUM *a;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  uVar1 = dsa_precheck_params(param_1,&local_34);
  if (uVar1 != 0) {
    uVar1 = 0;
    if (((*(long *)(param_1 + 0x18) != 0) && (*(long *)(param_1 + 0x70) != 0)) &&
       (uVar1 = 0, *(long *)(param_1 + 0x68) != 0)) {
      c = (BN_CTX *)BN_CTX_new_ex(*(undefined8 *)(param_1 + 0xb8));
      if (c == (BN_CTX *)0x0) {
        a = (BIGNUM *)0x0;
        uVar1 = local_34;
      }
      else {
        a = BN_new();
        uVar1 = local_34;
        if ((a != (BIGNUM *)0x0) &&
           (iVar2 = ossl_dsa_generate_public_key(c,param_1,*(undefined8 *)(param_1 + 0x70),a),
           uVar1 = local_34, iVar2 != 0)) {
          iVar2 = BN_cmp(a,*(BIGNUM **)(param_1 + 0x68));
          uVar1 = (uint)(iVar2 == 0);
        }
      }
      BN_free(a);
      BN_CTX_free(c);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

