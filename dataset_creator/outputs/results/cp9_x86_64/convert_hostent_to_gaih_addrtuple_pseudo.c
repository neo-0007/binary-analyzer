
undefined8
convert_hostent_to_gaih_addrtuple(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 *__src;
  undefined8 *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (*(long *)param_3[3] == 0) {
    return 1;
  }
  lVar8 = 0;
  do {
    lVar8 = lVar8 + 1;
  } while (((long *)param_3[3])[lVar8] != 0);
  if (lVar8 == 0) {
    return 1;
  }
  if (0x10 < *(uint *)((long)param_3 + 0x14)) {
    return 1;
  }
  puVar2 = (undefined8 *)*param_4;
  if (puVar2 == (undefined8 *)0x0) {
    lVar10 = 0;
    lVar9 = lVar8;
  }
  else {
    lVar10 = 0;
    puVar3 = puVar2;
    do {
      puVar3 = (undefined8 *)*puVar3;
      lVar10 = lVar10 + 1;
    } while (puVar3 != (undefined8 *)0x0);
    lVar9 = lVar10 + lVar8;
  }
  pvVar4 = realloc(puVar2,lVar9 * 0x28);
  if (pvVar4 == (void *)0x0) {
LAB_0075fff6:
    uVar6 = 0;
  }
  else {
    *param_4 = pvVar4;
    *(bool *)((long)param_4 + 0x19) = param_2 == 10;
    *(undefined1 *)(param_4 + 3) = 1;
    if (param_4[2] == 0) {
      pcVar7 = strdup((char *)*param_3);
      param_4[2] = pcVar7;
      if (pcVar7 == (char *)0x0) goto LAB_0075fff6;
    }
    if (lVar10 != 0) {
      puVar2 = (undefined8 *)pvVar4;
      do {
        pvVar5 = puVar2 + 5;
        *puVar2 = pvVar5;
        puVar2 = (undefined8 *)pvVar5;
      } while (pvVar5 != (void *)((long)pvVar4 + lVar10 * 0x28));
    }
    puVar2 = (undefined8 *)((long)pvVar4 + lVar10 * 0x28);
    memset(puVar2,0,lVar8 * 0x28);
    if (param_2 == 2) {
      lVar9 = 0;
      pvVar4 = (void *)((long)puVar2 + 0x14);
      do {
        while (__src = *(undefined4 **)(param_3[3] + lVar9), *(int *)(param_1 + 4) != 10) {
          *(undefined4 *)((long)pvVar4 + -4) = 2;
          lVar9 = lVar9 + 8;
          pvVar4 = memcpy(pvVar4,__src,(long)*(int *)((long)param_3 + 0x14));
          *(long *)((long)pvVar4 + -0x14) = (long)pvVar4 + 0x14;
          pvVar4 = (void *)((long)pvVar4 + 0x28);
          if (lVar9 == lVar8 * 8) goto LAB_0075ff3a;
        }
        *(undefined4 *)((long)pvVar4 + -4) = 10;
        uVar1 = *__src;
        lVar9 = lVar9 + 8;
        *(undefined4 *)((long)pvVar4 + 8) = 0xffff0000;
        *(undefined4 *)((long)pvVar4 + 0xc) = uVar1;
        *(long *)((long)pvVar4 + -0x14) = (long)pvVar4 + 0x14;
        pvVar4 = (void *)((long)pvVar4 + 0x28);
      } while (lVar8 * 8 != lVar9);
    }
    else {
      lVar9 = 0;
      puVar3 = puVar2;
      do {
        pvVar4 = *(void **)(param_3[3] + lVar9);
        *(int *)(puVar3 + 2) = param_2;
        lVar9 = lVar9 + 8;
        memcpy((void *)((long)puVar3 + 0x14),pvVar4,(long)*(int *)((long)param_3 + 0x14));
        *puVar3 = puVar3 + 5;
        puVar3 = puVar3 + 5;
      } while (lVar9 != lVar8 * 8);
    }
LAB_0075ff3a:
    puVar2[lVar8 * 5 + -5] = 0;
    uVar6 = 1;
  }
  return uVar6;
}

