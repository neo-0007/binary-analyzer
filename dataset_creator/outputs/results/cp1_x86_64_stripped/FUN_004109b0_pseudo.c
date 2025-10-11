
int * FUN_004109b0(int *param_1,long *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (*param_1 == 0x425) {
    piVar2 = (int *)FUN_00410840();
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      piVar2 = *(int **)(piVar2 + 2);
      *param_2 = (long)iVar1;
    }
    return piVar2;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/p_lib.c",0x326,"EVP_PKEY_get0_poly1305");
  FUN_0051f8f0(6,0xa4,0);
  return (int *)0x0;
}

