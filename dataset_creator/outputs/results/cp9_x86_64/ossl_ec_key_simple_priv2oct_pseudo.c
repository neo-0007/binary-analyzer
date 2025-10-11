
ulong ossl_ec_key_simple_priv2oct(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  iVar1 = EC_GROUP_order_bits(*(undefined8 *)(param_1 + 0x18));
  iVar2 = iVar1 + 0xe;
  if (-1 < iVar1 + 7) {
    iVar2 = iVar1 + 7;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar3 = (ulong)(iVar2 >> 3);
    if (param_2 == 0) {
      return uVar3;
    }
    if (uVar3 <= param_3) {
      iVar2 = BN_bn2binpad(*(long *)(param_1 + 0x28),param_2);
      if (iVar2 != -1) {
        return uVar3;
      }
      ERR_new();
      ERR_set_debug("../crypto/ec/ec_key.c",0x396,"ossl_ec_key_simple_priv2oct");
      ERR_set_error(0x10,100,0);
      return 0;
    }
  }
  return 0;
}

