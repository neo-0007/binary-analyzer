
undefined8 bn_copy_words(void *param_1,undefined8 *param_2,int param_3)

{
  void *__dest;
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 1) <= param_3) {
    uVar1 = 1;
    __dest = memset(param_1,0,(long)param_3 << 3);
    if ((void *)*param_2 != (void *)0x0) {
      memcpy(__dest,(void *)*param_2,(long)*(int *)(param_2 + 1) << 3);
      return 1;
    }
  }
  return uVar1;
}

