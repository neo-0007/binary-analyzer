
undefined8
mac_digest_sign_final(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = ossl_prov_is_running();
  if (((param_1 != 0) && (iVar1 != 0)) && (*(long *)(param_1 + 0x18) != 0)) {
    uVar2 = EVP_MAC_final(*(long *)(param_1 + 0x18),param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

