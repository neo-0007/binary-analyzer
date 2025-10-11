
bool ossl_policy_node_match(long param_1,undefined8 *param_2,ASN1_OBJECT *param_3)

{
  byte *pbVar1;
  int iVar2;
  ASN1_OBJECT *a;
  int iVar3;
  
  pbVar1 = (byte *)*param_2;
  if (((*(byte *)(param_1 + 0x19) & 4) == 0) && ((*pbVar1 & 3) != 0)) {
    iVar3 = 0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(pbVar1 + 0x18));
      if (iVar2 <= iVar3) {
        return false;
      }
      a = (ASN1_OBJECT *)OPENSSL_sk_value(*(undefined8 *)(pbVar1 + 0x18),iVar3);
      iVar2 = OBJ_cmp(a,param_3);
      if (iVar2 == 0) break;
      iVar3 = iVar3 + 1;
    }
    return true;
  }
  iVar3 = OBJ_cmp(*(ASN1_OBJECT **)(pbVar1 + 8),param_3);
  return iVar3 == 0;
}

