
int * EVP_PKEY_get0_poly1305(int *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == 0x425) {
    piVar2 = (int *)evp_pkey_get_legacy();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = *(int **)(piVar2 + 2);
      *param_2 = (long)iVar1;
    }
    return piVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/evp/p_lib.c",0x326,"EVP_PKEY_get0_poly1305");
  ERR_set_error(6,0xa4,0);
  return (int *)0x0;
}

