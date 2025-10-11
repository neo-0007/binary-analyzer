
bool rsa_pub_cmp(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = RSA_flags(*(RSA **)(param_1 + 0x20));
  if (((uVar1 & 1) == 0) && (uVar1 = RSA_flags(*(RSA **)(param_2 + 0x20)), (uVar1 & 1) == 0)) {
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x28),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
    if (iVar2 != 0) {
      return false;
    }
    iVar2 = BN_cmp(*(BIGNUM **)(*(long *)(param_2 + 0x20) + 0x30),
                   *(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x30));
    return iVar2 == 0;
  }
  return true;
}

