
undefined8 pkey_cb(int param_1,long *param_2)

{
  int *piVar1;
  
  if ((param_1 == 2) && (piVar1 = *(int **)(*param_2 + 0x10), piVar1 != (int *)0x0)) {
    OPENSSL_cleanse(*(void **)(piVar1 + 2),(long)*piVar1);
    return 1;
  }
  return 1;
}

