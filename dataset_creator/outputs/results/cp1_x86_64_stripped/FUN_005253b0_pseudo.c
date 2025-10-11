
undefined8 FUN_005253b0(int *param_1)

{
  if ((param_1 == (int *)0x0) || ((*param_1 - 2U & 0xfffffffd) != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    FUN_0051f8f0(6,0x93,0);
    return 0xfffffffe;
  }
  if (*(long *)(param_1 + 8) != 0) {
    return 1;
  }
  if ((**(int **)(param_1 + 0x1e) != 0x1c) && (**(int **)(param_1 + 0x1e) != 0x398)) {
    return 0xffffffff;
  }
  return 1;
}

