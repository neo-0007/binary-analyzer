
void _GLOBAL__sub_I_eh_alloc_cc(void)

{
  undefined8 *puVar1;
  
  (anonymous_namespace)::emergency_pool._32_8_ = 0;
  (anonymous_namespace)::emergency_pool._56_8_ = 0x11c00;
  (anonymous_namespace)::emergency_pool._0_16_ = (undefined1  [16])0x0;
  (anonymous_namespace)::emergency_pool._16_16_ = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)malloc(0x11c00);
  (anonymous_namespace)::emergency_pool._48_8_ = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    (anonymous_namespace)::emergency_pool._56_8_ = 0;
    (anonymous_namespace)::emergency_pool._40_8_ = 0;
  }
  else {
    (anonymous_namespace)::emergency_pool._40_8_ = puVar1;
    *puVar1 = 0x11c00;
    puVar1[1] = 0;
  }
  return;
}

