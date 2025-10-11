
undefined8
get_string_internal_part_0(long param_1,long *param_2,ulong *param_3,ulong *param_4,int param_5)

{
  ulong __n;
  void *pvVar1;
  ulong uVar2;
  
  __n = *(ulong *)(param_1 + 0x18);
  if (param_4 != (ulong *)0x0) {
    *param_4 = __n;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (param_2 == (long *)0x0) {
      return 1;
    }
    if (*param_2 == 0) {
      uVar2 = (param_5 == 4 || __n == 0) + __n;
      pvVar1 = CRYPTO_malloc((int)uVar2,"../crypto/params.c",1099);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_2 = (long)pvVar1;
      *param_3 = uVar2;
    }
    else {
      uVar2 = *param_3;
    }
    if (__n <= uVar2) {
      memcpy((void *)*param_2,*(void **)(param_1 + 0x10),__n);
      return 1;
    }
  }
  return 0;
}

