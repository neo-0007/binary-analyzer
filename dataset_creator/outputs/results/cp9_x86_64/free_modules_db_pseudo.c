
void free_modules_db(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)((long)param_1 + 0x20);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar2 + 0x20);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          while (pvVar1 = *(void **)((long)pvVar4 + 0x28), **(char **)((long)pvVar4 + 0x18) == '/')
          {
            free(pvVar4);
            pvVar4 = pvVar1;
            if (pvVar1 == (void *)0x0) goto LAB_007c2900;
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
LAB_007c2900:
      pvVar4 = *(void **)((long)pvVar3 + 0x30);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          pvVar1 = *(void **)((long)pvVar4 + 0x28);
          if (**(char **)((long)pvVar4 + 0x18) == '/') {
            free(pvVar4);
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
      do {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        if (**(char **)((long)pvVar3 + 0x18) == '/') {
          free(pvVar3);
        }
        pvVar3 = pvVar4;
      } while (pvVar4 != (void *)0x0);
    }
    pvVar3 = *(void **)((long)pvVar2 + 0x30);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          while (pvVar1 = *(void **)((long)pvVar4 + 0x28), **(char **)((long)pvVar4 + 0x18) == '/')
          {
            free(pvVar4);
            pvVar4 = pvVar1;
            if (pvVar1 == (void *)0x0) goto LAB_007c29b0;
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
LAB_007c29b0:
      pvVar4 = *(void **)((long)pvVar3 + 0x30);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          pvVar1 = *(void **)((long)pvVar4 + 0x28);
          if (**(char **)((long)pvVar4 + 0x18) == '/') {
            free(pvVar4);
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
      do {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        if (**(char **)((long)pvVar3 + 0x18) == '/') {
          free(pvVar3);
        }
        pvVar3 = pvVar4;
      } while (pvVar4 != (void *)0x0);
    }
    do {
      while (pvVar3 = *(void **)((long)pvVar2 + 0x28), **(char **)((long)pvVar2 + 0x18) == '/') {
        free(pvVar2);
        pvVar2 = pvVar3;
        if (pvVar3 == (void *)0x0) goto LAB_007c2a25;
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
LAB_007c2a25:
  pvVar2 = *(void **)((long)param_1 + 0x30);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar2 + 0x20);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          while (pvVar1 = *(void **)((long)pvVar4 + 0x28), **(char **)((long)pvVar4 + 0x18) == '/')
          {
            free(pvVar4);
            pvVar4 = pvVar1;
            if (pvVar1 == (void *)0x0) goto LAB_007c2a90;
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
LAB_007c2a90:
      pvVar4 = *(void **)((long)pvVar3 + 0x30);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          pvVar1 = *(void **)((long)pvVar4 + 0x28);
          if (**(char **)((long)pvVar4 + 0x18) == '/') {
            free(pvVar4);
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
      do {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        if (**(char **)((long)pvVar3 + 0x18) == '/') {
          free(pvVar3);
        }
        pvVar3 = pvVar4;
      } while (pvVar4 != (void *)0x0);
    }
    pvVar3 = *(void **)((long)pvVar2 + 0x30);
    if (pvVar3 != (void *)0x0) {
      pvVar4 = *(void **)((long)pvVar3 + 0x20);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          while (pvVar1 = *(void **)((long)pvVar4 + 0x28), **(char **)((long)pvVar4 + 0x18) == '/')
          {
            free(pvVar4);
            pvVar4 = pvVar1;
            if (pvVar1 == (void *)0x0) goto LAB_007c2b70;
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
LAB_007c2b70:
      pvVar4 = *(void **)((long)pvVar3 + 0x30);
      if (pvVar4 != (void *)0x0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) {
          free_modules_db();
        }
        if (*(long *)((long)pvVar4 + 0x30) != 0) {
          free_modules_db();
        }
        do {
          pvVar1 = *(void **)((long)pvVar4 + 0x28);
          if (**(char **)((long)pvVar4 + 0x18) == '/') {
            free(pvVar4);
          }
          pvVar4 = pvVar1;
        } while (pvVar1 != (void *)0x0);
      }
      do {
        pvVar4 = *(void **)((long)pvVar3 + 0x28);
        if (**(char **)((long)pvVar3 + 0x18) == '/') {
          free(pvVar3);
        }
        pvVar3 = pvVar4;
      } while (pvVar4 != (void *)0x0);
    }
    do {
      pvVar3 = *(void **)((long)pvVar2 + 0x28);
      if (**(char **)((long)pvVar2 + 0x18) == '/') {
        free(pvVar2);
      }
      pvVar2 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  do {
    while (pvVar2 = *(void **)((long)param_1 + 0x28), **(char **)((long)param_1 + 0x18) != '/') {
      param_1 = pvVar2;
      if (pvVar2 == (void *)0x0) {
        return;
      }
    }
    free(param_1);
    param_1 = pvVar2;
  } while (pvVar2 != (void *)0x0);
  return;
}

