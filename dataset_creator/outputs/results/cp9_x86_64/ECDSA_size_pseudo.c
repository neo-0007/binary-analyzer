
int ECDSA_size(EC_KEY *eckey)

{
  int iVar1;
  EC_GROUP *pEVar2;
  BIGNUM *pBVar3;
  long in_FS_OFFSET;
  ECDSA_SIG local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  if (eckey != (EC_KEY *)0x0) {
    pEVar2 = EC_KEY_get0_group(eckey);
    if (pEVar2 != (EC_GROUP *)0x0) {
      pBVar3 = (BIGNUM *)EC_GROUP_get0_order(pEVar2);
      if (pBVar3 != (BIGNUM *)0x0) {
        local_28.r = pBVar3;
        local_28.s = pBVar3;
        iVar1 = i2d_ECDSA_SIG(&local_28,(uchar **)0x0);
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        goto LAB_004de85e;
      }
    }
    iVar1 = 0;
  }
LAB_004de85e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

