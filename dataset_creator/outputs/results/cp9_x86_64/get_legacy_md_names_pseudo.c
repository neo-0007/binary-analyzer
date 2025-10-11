
void get_legacy_md_names(int *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = OBJ_NAME_get(*(char **)(param_1 + 2),*param_1);
  if (pcVar2 != (char *)0x0) {
    uVar1 = EVP_MD_get_type(pcVar2);
    get_legacy_evp_names(0,uVar1,0,param_2);
    return;
  }
  return;
}

