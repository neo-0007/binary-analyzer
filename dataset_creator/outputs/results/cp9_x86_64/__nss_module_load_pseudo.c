
undefined8 __nss_module_load(int *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 1) {
    return 1;
  }
  if (*param_1 == 2) {
    return 0;
  }
  uVar1 = module_load();
  return uVar1;
}

