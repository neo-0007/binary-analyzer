
void _nl_init_era_entries_part_0(long param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  size_t sVar5;
  wchar_t *pwVar6;
  int *__ptr;
  int *piVar7;
  int *piVar8;
  ulong uVar9;
  
  pthread_rwlock_wrlock((pthread_rwlock_t *)__libc_setlocale_lock);
  puVar4 = *(undefined8 **)(param_1 + 0x28);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)calloc(0x30,1);
    *(undefined8 **)(param_1 + 0x28) = puVar4;
    if (puVar4 == (undefined8 *)0x0) goto LAB_0075e651;
    *(code **)(param_1 + 0x20) = _nl_cleanup_time;
  }
  else if (*(int *)(puVar4 + 2) != 0) goto LAB_0075e651;
  uVar9 = (ulong)*(uint *)(param_1 + 0x1d0);
  __ptr = (int *)*puVar4;
  if (uVar9 == 0) {
    if (__ptr != (int *)0x0) {
      free(__ptr);
      *puVar4 = 0;
    }
  }
  else {
    if (uVar9 != puVar4[1]) {
      __ptr = (int *)realloc(__ptr,uVar9 * 0x48);
    }
    if (__ptr == (int *)0x0) {
      free((void *)*puVar4);
      puVar4[1] = 0;
      *puVar4 = 0;
    }
    else {
      pwVar6 = *(wchar_t **)(param_1 + 0x1d8);
      puVar4[1] = uVar9;
      *puVar4 = __ptr;
      piVar8 = __ptr;
      do {
        uVar2 = *(undefined8 *)(pwVar6 + 2);
        *(undefined8 *)piVar8 = *(undefined8 *)pwVar6;
        *(undefined8 *)(piVar8 + 2) = uVar2;
        uVar2 = *(undefined8 *)(pwVar6 + 6);
        *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(pwVar6 + 4);
        *(undefined8 *)(piVar8 + 6) = uVar2;
        if ((piVar8[2] < piVar8[5]) ||
           ((piVar8[2] == piVar8[5] &&
            ((piVar8[3] < piVar8[6] || ((piVar8[3] == piVar8[6] && (piVar8[4] <= piVar8[7])))))))) {
          iVar3 = (uint)(*piVar8 == 0x2b) * 2 + -1;
        }
        else {
          iVar3 = ((*piVar8 != 0x2b) - 1) + (uint)(*piVar8 != 0x2b);
        }
        piVar8[0x10] = iVar3;
        piVar7 = piVar8 + 0x12;
        *(wchar_t **)(piVar8 + 8) = pwVar6 + 8;
        sVar5 = strlen((char *)(pwVar6 + 8));
        pcVar1 = (char *)((long)pwVar6 + sVar5 + 0x21);
        *(char **)(piVar8 + 10) = pcVar1;
        sVar5 = strlen(pcVar1);
        pcVar1 = pcVar1 + sVar5 + 1;
        *(char **)(piVar8 + 0xc) = pcVar1 + ((int)pwVar6 - (int)pcVar1 & 3);
        pwVar6 = wcschr((wchar_t *)(pcVar1 + ((int)pwVar6 - (int)pcVar1 & 3)),L'\0');
        *(wchar_t **)(piVar8 + 0xe) = pwVar6 + 1;
        pwVar6 = wcschr(pwVar6 + 1,L'\0');
        pwVar6 = pwVar6 + 1;
        piVar8 = piVar7;
      } while (piVar7 != __ptr + uVar9 * 0x12);
    }
  }
  *(undefined4 *)(puVar4 + 2) = 1;
LAB_0075e651:
  pthread_rwlock_unlock((pthread_rwlock_t *)__libc_setlocale_lock);
  return;
}

