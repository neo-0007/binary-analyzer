
ulong EVP_PKEY_type_names_do_all(uint *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  int n;
  ulong uVar2;
  char *pcVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*param_1 == 0) {
    if (lVar1 == 0) {
      return (ulong)*param_1;
    }
  }
  else if (lVar1 == 0) {
    n = EVP_PKEY_get_id();
    pcVar3 = OBJ_nid2sn(n);
    (*param_2)(pcVar3,param_3);
    return 1;
  }
  uVar2 = EVP_KEYMGMT_names_do_all(lVar1,param_2);
  return uVar2;
}

