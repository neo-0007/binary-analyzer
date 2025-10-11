
int ec_security_bits(long param_1)

{
  int iVar1;
  EC_GROUP *pEVar2;
  int iVar3;
  
  pEVar2 = EC_KEY_get0_group(*(EC_KEY **)(param_1 + 0x20));
  iVar1 = EC_GROUP_order_bits(pEVar2);
  iVar3 = 0x100;
  if ((((iVar1 < 0x200) && (iVar3 = 0xc0, iVar1 < 0x180)) && (iVar3 = 0x80, iVar1 < 0x100)) &&
     ((iVar3 = 0x70, iVar1 < 0xe0 && (iVar3 = 0x50, iVar1 < 0xa0)))) {
    iVar3 = iVar1 / 2;
  }
  return iVar3;
}

