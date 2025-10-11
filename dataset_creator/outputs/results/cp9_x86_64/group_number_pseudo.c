
void * group_number(void *param_1,void *param_2,void *param_3,char *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  byte bVar2;
  void *__src;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  byte *pbVar6;
  
  iVar4 = (int)*param_4;
  if ((byte)(*param_4 - 1U) < 0x7e) {
    pbVar6 = (byte *)(param_4 + 1);
    __src = memmove(param_1,param_2,(long)param_3 - (long)param_2);
    pvVar3 = (void *)((long)__src + ((long)param_3 - (long)param_2));
    param_2 = param_3;
    while (pvVar5 = param_2, __src < pvVar3) {
      while( true ) {
        puVar1 = (undefined4 *)((long)pvVar3 - 4);
        pvVar3 = (void *)((long)pvVar3 - 4);
        param_2 = (void *)((long)pvVar5 + -4);
        *(undefined4 *)((long)pvVar5 + -4) = *puVar1;
        iVar4 = iVar4 + -1;
        if (iVar4 != 0) break;
        if (pvVar3 <= __src) {
          return param_2;
        }
        if (pvVar3 == param_2) {
LAB_007914f0:
          pvVar3 = memmove((void *)((long)param_2 - ((long)pvVar3 - (long)__src)),__src,
                           (long)pvVar3 - (long)__src);
          return pvVar3;
        }
        *(undefined4 *)((long)pvVar5 + -8) = param_5;
        bVar2 = *pbVar6;
        iVar4 = (int)(char)bVar2;
        param_2 = (void *)((long)pvVar5 + -8);
        if (0x7e < bVar2) goto LAB_007914f0;
        pvVar5 = param_2;
        if (bVar2 == 0) {
          iVar4 = (int)(char)pbVar6[-1];
        }
        else {
          pbVar6 = pbVar6 + 1;
        }
      }
    }
  }
  return param_2;
}

