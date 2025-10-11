
void EC_ec_pre_comp_free(void *param_1)

{
  int *piVar1;
  int iVar2;
  long *ptr;
  EC_POINT *point;
  
  if (param_1 == (void *)0x0) {
    return;
  }
  LOCK();
  piVar1 = (int *)((long)param_1 + 0x30);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((iVar2 != 1) && (0 < iVar2 + -1)) {
    return;
  }
  ptr = *(long **)((long)param_1 + 0x20);
  if (ptr != (long *)0x0) {
    point = (EC_POINT *)*ptr;
    if (point != (EC_POINT *)0x0) {
      do {
        EC_POINT_free(point);
        point = (EC_POINT *)ptr[1];
        ptr = ptr + 1;
      } while (point != (EC_POINT *)0x0);
      ptr = *(long **)((long)param_1 + 0x20);
    }
    CRYPTO_free(ptr);
  }
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x38));
  CRYPTO_free(param_1);
  return;
}

