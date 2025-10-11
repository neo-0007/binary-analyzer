
undefined8
ossl_prov_get_capabilities(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  iVar1 = OPENSSL_strcasecmp(param_2,"TLS-GROUP");
  if (iVar1 == 0) {
    puVar3 = param_group_list;
    do {
      iVar1 = (*param_3)(puVar3,param_4);
      if (iVar1 == 0) goto LAB_00439c87;
      puVar3 = puVar3 + 400;
    } while (puVar3 != ossl_rsa_asym_cipher_functions);
    uVar2 = 1;
  }
  else {
LAB_00439c87:
    uVar2 = 0;
  }
  return uVar2;
}

