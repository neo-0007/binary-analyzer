
char * EVP_MD_get0_name(long param_1)

{
  int n;
  char *pcVar1;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (*(char **)(param_1 + 0x60) != (char *)0x0) {
    return *(char **)(param_1 + 0x60);
  }
  n = EVP_MD_get_type();
  pcVar1 = OBJ_nid2sn(n);
  return pcVar1;
}

