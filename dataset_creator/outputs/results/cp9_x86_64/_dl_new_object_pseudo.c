
void * _dl_new_object(char *param_1,char *param_2,byte param_3,void *param_4,uint param_5,
                     long param_6)

{
  char cVar1;
  bool bVar2;
  size_t sVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *puVar6;
  size_t sVar7;
  size_t sVar8;
  char *pcVar9;
  char *pcVar10;
  char *__buf;
  undefined *puVar11;
  undefined8 *puVar12;
  long in_FS_OFFSET;
  
  sVar3 = strlen(param_2);
  pvVar4 = calloc(sVar3 + 0x4a9,1);
  if (pvVar4 == (void *)0x0) {
    return (void *)0x0;
  }
  *(void **)((long)pvVar4 + 0x28) = pvVar4;
  *(long *)((long)pvVar4 + 0x2d0) = (long)pvVar4 + 0x488;
  *(long *)((long)pvVar4 + 0x38) = (long)pvVar4 + 0x490;
  pvVar5 = memcpy((void *)((long)pvVar4 + 0x4a8),param_2,sVar3 + 1);
  *(undefined4 *)((long)pvVar4 + 0x4a0) = 1;
  *(void **)((long)pvVar4 + 0x490) = pvVar5;
  cVar1 = *param_1;
  pcVar9 = (char *)((long)pvVar5 + sVar3);
  if (cVar1 != '\0') {
    pcVar9 = param_1;
  }
  *(char **)((long)pvVar4 + 8) = pcVar9;
  *(byte *)((long)pvVar4 + 0x31c) = param_3 & 3 | *(byte *)((long)pvVar4 + 0x31c) & 0xfc;
  if ((_dl_debug_mask._1_1_ & 1) == 0) {
    *(undefined4 *)((long)pvVar4 + 0x3e4) = 1;
  }
  *(void **)((long)pvVar4 + 0x2e0) = param_4;
  puVar12 = (undefined8 *)((long)pvVar4 + 0x370);
  *(long *)((long)pvVar4 + 0x30) = param_6;
  puVar11 = (&_dl_ns)[param_6 * 0x14];
  *(undefined8 **)((long)pvVar4 + 0x398) = puVar12;
  *(undefined8 *)((long)pvVar4 + 0x390) = 4;
  pvVar5 = pvVar4;
  if (puVar11 == (undefined *)0x0) {
    bVar2 = false;
    if (param_4 != (void *)0x0) goto LAB_007afee8;
LAB_007afeff:
    puVar6 = (undefined *)((long)pvVar5 + 0x2c0);
  }
  else {
    puVar11 = puVar11 + 0x2c0;
    *(undefined **)((long)pvVar4 + 0x370) = puVar11;
    if (param_4 != (void *)0x0) {
      bVar2 = true;
LAB_007afee8:
      do {
        pvVar5 = param_4;
        param_4 = *(void **)((long)pvVar5 + 0x2e0);
      } while (*(void **)((long)pvVar5 + 0x2e0) != (void *)0x0);
      if (!bVar2) goto LAB_007afeff;
      puVar11 = *(undefined **)((long)pvVar4 + 0x370);
    }
    puVar6 = (undefined *)((long)pvVar5 + 0x2c0);
    if (puVar6 == puVar11) goto LAB_007aff08;
    if ((param_5 & 8) == 0) {
      puVar12 = (undefined8 *)((long)pvVar4 + 0x378);
    }
    else {
      *(undefined **)((long)pvVar4 + 0x378) = puVar11;
    }
  }
  *puVar12 = puVar6;
LAB_007aff08:
  *(long *)((long)pvVar4 + 0x3a0) = (long)pvVar4 + 0x2c0;
  if (cVar1 != '\0') {
    sVar7 = strlen(param_1);
    sVar3 = sVar7 + 1;
    pcVar9 = (char *)0x0;
    sVar8 = sVar3;
    if (cVar1 == '/') {
      __buf = (char *)malloc(sVar3);
      pcVar9 = __buf;
      if (__buf == (char *)0x0) {
        __buf = (char *)0xffffffffffffffff;
      }
      else {
LAB_007affb0:
        pcVar9 = (char *)mempcpy(pcVar9,param_1,sVar3);
        do {
          pcVar10 = pcVar9;
          pcVar9 = pcVar10 + -1;
        } while (*pcVar9 != '/');
        if (__buf == pcVar9) {
          pcVar9 = pcVar10;
        }
        *pcVar9 = '\0';
      }
    }
    else {
      do {
        __buf = (char *)realloc(pcVar9,sVar8 + 0x80);
        if (__buf == (char *)0x0) break;
        pcVar9 = getcwd(__buf,(sVar8 + 0x7f) - sVar7);
        if (pcVar9 != (char *)0x0) {
          sVar8 = strlen(__buf);
          pcVar9 = __buf + sVar8;
          if (pcVar9[-1] != '/') {
            *pcVar9 = '/';
            pcVar9 = pcVar9 + 1;
          }
          goto LAB_007affb0;
        }
        pcVar9 = __buf;
        sVar8 = sVar8 + 0x80;
      } while (*(int *)(in_FS_OFFSET + -0x58) == 0x22);
      __buf = (char *)0xffffffffffffffff;
      free(pcVar9);
    }
    *(char **)((long)pvVar4 + 0x350) = __buf;
  }
  return pvVar4;
}

