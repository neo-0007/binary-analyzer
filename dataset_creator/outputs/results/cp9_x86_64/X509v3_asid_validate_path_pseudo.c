
undefined8 X509v3_asid_validate_path(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar1 = OPENSSL_sk_num();
    if ((iVar1 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
      uVar2 = asid_validate_path_internal(param_1,*(undefined8 *)(param_1 + 0x98),0);
      return uVar2;
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return 0;
}

