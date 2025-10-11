
void insert_module(undefined8 *param_1,int param_2)

{
  char *__s1;
  char *__s1_00;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (__gconv_modules_db == (undefined8 *)0x0) {
    puVar5 = &__gconv_modules_db;
  }
  else {
    __s1 = (char *)*param_1;
    puVar5 = &__gconv_modules_db;
    puVar6 = __gconv_modules_db;
    do {
      iVar4 = strcmp(__s1,(char *)*puVar6);
      if (iVar4 == 0) {
        __s1_00 = (char *)param_1[1];
        do {
          iVar4 = strcmp(__s1_00,(char *)puVar6[1]);
          if (iVar4 == 0) {
            if ((*(int *)(param_1 + 2) < *(int *)(puVar6 + 2)) ||
               ((*(int *)(param_1 + 2) == *(int *)(puVar6 + 2) &&
                (*(int *)((long)param_1 + 0x14) < *(int *)((long)puVar6 + 0x14))))) {
              uVar1 = puVar6[5];
              uVar2 = puVar6[6];
              param_1[4] = puVar6[4];
              param_1[5] = uVar1;
              param_1[6] = uVar2;
              *puVar5 = param_1;
              param_1 = puVar6;
            }
            else if (param_2 == 0) {
              return;
            }
            free(param_1);
            return;
          }
          puVar3 = (undefined8 *)puVar6[5];
          puVar5 = puVar6;
          while( true ) {
            puVar6 = puVar3;
            puVar5 = puVar5 + 5;
            if (puVar6 == (undefined8 *)0x0) goto LAB_006cad90;
            iVar4 = strcmp(__s1,(char *)*puVar6);
            if (iVar4 == 0) break;
            puVar3 = (undefined8 *)puVar6[5];
            puVar5 = puVar6;
          }
        } while( true );
      }
      puVar5 = puVar6 + 4;
      if (-1 < iVar4) {
        puVar5 = puVar6 + 6;
      }
      puVar6 = (undefined8 *)*puVar5;
    } while (puVar6 != (undefined8 *)0x0);
  }
LAB_006cad90:
  *puVar5 = param_1;
  return;
}

