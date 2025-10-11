
/* WARNING: Type propagation algorithm not settling */

void freelocale(__locale_t __dataset)

{
  int iVar1;
  
  if (__dataset != (__locale_t)_nl_C_locobj) {
    pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
    if (*(int *)(__dataset->__locales[0] + 0x30) == -1) {
      iVar1 = *(int *)(__dataset->__locales[1] + 0x30);
    }
    else {
      _nl_remove_locale(0);
      iVar1 = *(int *)(__dataset->__locales[1] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[2] + 0x30);
    }
    else {
      _nl_remove_locale(1);
      iVar1 = *(int *)(__dataset->__locales[2] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[3] + 0x30);
    }
    else {
      _nl_remove_locale(2);
      iVar1 = *(int *)(__dataset->__locales[3] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[4] + 0x30);
    }
    else {
      _nl_remove_locale(3);
      iVar1 = *(int *)(__dataset->__locales[4] + 0x30);
    }
    if (iVar1 != -1) {
      _nl_remove_locale(4);
    }
    if (*(int *)(__dataset->__locales[5] + 0x30) != -1) {
      _nl_remove_locale(5);
    }
    if (*(int *)(__dataset->__locales[7] + 0x30) != -1) {
      _nl_remove_locale(7);
    }
    if (*(int *)(__dataset->__locales[8] + 0x30) == -1) {
      iVar1 = *(int *)(__dataset->__locales[9] + 0x30);
    }
    else {
      _nl_remove_locale(8);
      iVar1 = *(int *)(__dataset->__locales[9] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[10] + 0x30);
    }
    else {
      _nl_remove_locale(9);
      iVar1 = *(int *)(__dataset->__locales[10] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[0xb] + 0x30);
    }
    else {
      _nl_remove_locale(10);
      iVar1 = *(int *)(__dataset->__locales[0xb] + 0x30);
    }
    if (iVar1 == -1) {
      iVar1 = *(int *)(__dataset->__locales[0xc] + 0x30);
    }
    else {
      _nl_remove_locale(0xb);
      iVar1 = *(int *)(__dataset->__locales[0xc] + 0x30);
    }
    if (iVar1 != -1) {
      _nl_remove_locale(0xc);
    }
    pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
    free(__dataset);
    return;
  }
  return;
}

