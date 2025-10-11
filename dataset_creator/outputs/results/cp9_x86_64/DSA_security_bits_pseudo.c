
undefined8 DSA_security_bits(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  if (*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 0x10));
    iVar2 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    uVar3 = BN_security_bits(iVar2,iVar1);
    return uVar3;
  }
  return 0xffffffff;
}

