
undefined8 free_slotinfo(long *param_1)

{
  long *__ptr;
  char cVar1;
  long lVar2;
  long *__ptr_00;
  long *__ptr_01;
  long *__ptr_02;
  long *__ptr_03;
  long *__ptr_04;
  long *__ptr_05;
  
  __ptr_00 = (long *)*param_1;
  if (__ptr_00 == (long *)0x0) {
    return 1;
  }
  __ptr_02 = (long *)__ptr_00[1];
  if (__ptr_02 != (long *)0x0) {
    __ptr_03 = (long *)__ptr_02[1];
    if (__ptr_03 != (long *)0x0) {
      __ptr_04 = (long *)__ptr_03[1];
      if (__ptr_04 != (long *)0x0) {
        __ptr_05 = (long *)__ptr_04[1];
        if (__ptr_05 != (long *)0x0) {
          __ptr_01 = (long *)__ptr_05[1];
          if (__ptr_01 != (long *)0x0) {
            if (__ptr_01[1] != 0) {
              cVar1 = free_slotinfo(__ptr_01[1] + 8);
              if (cVar1 == '\0') {
                return 0;
              }
              __ptr = (long *)__ptr_01[1];
              if (*__ptr != 0) {
                lVar2 = 0;
                do {
                  if (__ptr[lVar2 * 2 + 3] != 0) {
                    return 0;
                  }
                  lVar2 = lVar2 + 1;
                } while (lVar2 != *__ptr);
              }
              free(__ptr);
              __ptr_01[1] = 0;
              __ptr_01 = (long *)__ptr_05[1];
            }
            if (*__ptr_01 != 0) {
              lVar2 = 0;
              do {
                if (__ptr_01[lVar2 * 2 + 3] != 0) {
                  return 0;
                }
                lVar2 = lVar2 + 1;
              } while (*__ptr_01 != lVar2);
            }
            free(__ptr_01);
            __ptr_05[1] = 0;
            __ptr_05 = (long *)__ptr_04[1];
          }
          if (*__ptr_05 != 0) {
            lVar2 = 0;
            do {
              if (__ptr_05[lVar2 * 2 + 3] != 0) {
                return 0;
              }
              lVar2 = lVar2 + 1;
            } while (lVar2 != *__ptr_05);
          }
          free(__ptr_05);
          __ptr_04[1] = 0;
          __ptr_04 = (long *)__ptr_03[1];
        }
        if (*__ptr_04 != 0) {
          lVar2 = 0;
          do {
            if (__ptr_04[lVar2 * 2 + 3] != 0) {
              return 0;
            }
            lVar2 = lVar2 + 1;
          } while (*__ptr_04 != lVar2);
        }
        free(__ptr_04);
        __ptr_03[1] = 0;
        __ptr_03 = (long *)__ptr_02[1];
      }
      if (*__ptr_03 != 0) {
        lVar2 = 0;
        do {
          if (__ptr_03[lVar2 * 2 + 3] != 0) {
            return 0;
          }
          lVar2 = lVar2 + 1;
        } while (lVar2 != *__ptr_03);
      }
      free(__ptr_03);
      __ptr_02[1] = 0;
      __ptr_02 = (long *)__ptr_00[1];
    }
    if (*__ptr_02 != 0) {
      lVar2 = 0;
      do {
        if (__ptr_02[lVar2 * 2 + 3] != 0) {
          return 0;
        }
        lVar2 = lVar2 + 1;
      } while (*__ptr_02 != lVar2);
    }
    free(__ptr_02);
    __ptr_00[1] = 0;
    __ptr_00 = (long *)*param_1;
  }
  if (*__ptr_00 != 0) {
    lVar2 = 0;
    do {
      if (__ptr_00[lVar2 * 2 + 3] != 0) {
        return 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != *__ptr_00);
  }
  free(__ptr_00);
  *param_1 = 0;
  return 1;
}

