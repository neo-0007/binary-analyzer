
undefined8 siphash_final(long param_1,undefined8 param_2,ulong *param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = SipHash_hash_size(param_1 + 8);
  iVar1 = ossl_prov_is_running();
  if ((uVar2 <= param_4) && (iVar1 != 0)) {
    *param_3 = uVar2;
    uVar3 = SipHash_Final(param_1 + 8,param_2,uVar2);
    return uVar3;
  }
  return 0;
}

