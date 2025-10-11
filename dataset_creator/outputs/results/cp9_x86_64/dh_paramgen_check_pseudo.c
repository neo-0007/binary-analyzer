
undefined8 dh_paramgen_check(int *param_1)

{
  if ((param_1 == (int *)0x0) || ((*param_1 - 2U & 0xfffffffd) != 0)) {
    ERR_new();
    ERR_set_debug("../crypto/evp/dh_ctrl.c",0x16,"dh_paramgen_check");
    ERR_set_error(6,0x93,0);
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

