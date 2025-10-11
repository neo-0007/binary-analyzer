
int FUN_005261f0(int *param_1)

{
  bool bVar1;
  
  if ((param_1 != (int *)0x0) && ((*param_1 - 2U & 0xfffffffd) == 0)) {
    if (*(int **)(param_1 + 0x1e) != (int *)0x0) {
      bVar1 = **(int **)(param_1 + 0x1e) == 0x74;
      return (bVar1 - 1) + (uint)bVar1;
    }
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/evp/dsa_ctrl.c",0x14,"dsa_paramgen_check");
  FUN_0051f8f0(6,0x93,0);
  return -2;
}

