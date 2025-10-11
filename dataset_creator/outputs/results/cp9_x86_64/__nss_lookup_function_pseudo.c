
undefined8 __nss_lookup_function(long *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = __nss_module_get_function();
    return uVar1;
  }
  return 0;
}

