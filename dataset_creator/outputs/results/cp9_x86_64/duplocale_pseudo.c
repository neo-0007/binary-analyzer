
__locale_t duplocale(__locale_t __dataset)

{
  uint uVar1;
  __locale_data *p_Var2;
  ushort *puVar3;
  int *piVar4;
  size_t sVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long lVar8;
  __locale_t __dest;
  
  if (__dataset == (__locale_t)_nl_C_locobj) {
    puVar6 = _nl_C_locobj;
  }
  else {
    if (__dataset == (__locale_t)0xffffffffffffffff) {
      __dataset = (__locale_t)&_nl_global_locale;
    }
    if (__dataset->__names[0] == "C") {
      lVar8 = 0;
    }
    else {
      sVar5 = strlen(__dataset->__names[0]);
      lVar8 = sVar5 + 1;
    }
    if (__dataset->__names[1] != "C") {
      sVar5 = strlen(__dataset->__names[1]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[2] != "C") {
      sVar5 = strlen(__dataset->__names[2]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[3] != "C") {
      sVar5 = strlen(__dataset->__names[3]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[4] != "C") {
      sVar5 = strlen(__dataset->__names[4]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[5] != "C") {
      sVar5 = strlen(__dataset->__names[5]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[7] != "C") {
      sVar5 = strlen(__dataset->__names[7]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[8] != "C") {
      sVar5 = strlen(__dataset->__names[8]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[9] != "C") {
      sVar5 = strlen(__dataset->__names[9]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[10] != "C") {
      sVar5 = strlen(__dataset->__names[10]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[0xb] != "C") {
      sVar5 = strlen(__dataset->__names[0xb]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    if (__dataset->__names[0xc] != "C") {
      sVar5 = strlen(__dataset->__names[0xc]);
      lVar8 = lVar8 + 1 + sVar5;
    }
    puVar6 = (undefined1 *)malloc(lVar8 + 0xe8);
    if ((__locale_t)puVar6 != (__locale_t)0x0) {
      __dest = (__locale_t)((long)puVar6 + 0xe8);
      lVar8 = 0;
      pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
      do {
        if (lVar8 != 6) {
          p_Var2 = __dataset->__locales[lVar8];
          uVar1 = *(uint *)(p_Var2 + 0x30);
          ((__locale_t)puVar6)->__locales[lVar8] = p_Var2;
          if (uVar1 < 0xfffffffe) {
            *(uint *)(p_Var2 + 0x30) = uVar1 + 1;
          }
          pcVar7 = __dataset->__names[lVar8];
          if (pcVar7 == "C") {
            ((__locale_t)puVar6)->__names[lVar8] = "C";
          }
          else {
            ((__locale_t)puVar6)->__names[lVar8] = (char *)__dest;
            pcVar7 = stpcpy((char *)__dest,pcVar7);
            __dest = (__locale_t)(pcVar7 + 1);
          }
          if (lVar8 == 0xc) {
            puVar3 = __dataset->__ctype_b;
            piVar4 = __dataset->__ctype_tolower;
            ((__locale_t)puVar6)->__ctype_toupper = __dataset->__ctype_toupper;
            ((__locale_t)puVar6)->__ctype_b = puVar3;
            ((__locale_t)puVar6)->__ctype_tolower = piVar4;
            pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
            return (__locale_t)puVar6;
          }
        }
        lVar8 = lVar8 + 1;
      } while( true );
    }
  }
  return (__locale_t)puVar6;
}

