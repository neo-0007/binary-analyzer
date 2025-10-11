
ulong EVP_PKEY_is_a(int *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    uVar2 = EVP_KEYMGMT_is_a();
    return uVar2;
  }
  iVar1 = evp_pkey_name2type(param_2);
  return (ulong)(*param_1 == iVar1);
}

