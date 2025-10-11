
undefined8 blake2_mac_final(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = (ulong)*(byte *)(param_1 + 0x80);
  uVar2 = ossl_blake2s_final(param_2,param_1);
  return uVar2;
}

