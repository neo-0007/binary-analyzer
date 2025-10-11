
void set_legacy_nid(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = OBJ_NAME_get(param_1,1);
  if ((*param_2 != -1) && (pcVar2 != (char *)0x0)) {
    iVar1 = EVP_MD_get_type(pcVar2);
    if ((*param_2 != iVar1) && (*param_2 != 0)) {
      *param_2 = -1;
      return;
    }
    *param_2 = iVar1;
  }
  return;
}

