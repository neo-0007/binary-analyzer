
char * expand_dynamic_string_token(long param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  size_t sVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  long lVar7;
  
  pcVar1 = strchr(param_2,0x24);
  if (pcVar1 == (char *)0x0) {
LAB_007ac3d6:
    pcVar1 = strdup(param_2);
    return pcVar1;
  }
  lVar7 = 0;
  do {
    pcVar1 = pcVar1 + 1;
    lVar2 = is_dst(pcVar1,"ORIGIN");
    if (((lVar2 != 0) || (lVar2 = is_dst(pcVar1,"PLATFORM"), lVar2 != 0)) ||
       (lVar2 = is_dst(pcVar1,&DAT_007c65b1), lVar2 != 0)) {
      lVar7 = lVar7 + 1;
      pcVar1 = pcVar1 + lVar2;
    }
    pcVar1 = strchr(pcVar1,0x24);
  } while (pcVar1 != (char *)0x0);
  if (lVar7 == 0) goto LAB_007ac3d6;
  sVar3 = strlen(param_2);
  pcVar1 = *(char **)(param_1 + 0x350);
  if (pcVar1 == (char *)0x0) {
    if (**(char **)(param_1 + 8) != '\0') {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(l)->l_name[0] == \'\\0\' || IS_RTLD (l)","dl-load.c",0x192,
                    "expand_dynamic_string_token");
    }
    pcVar1 = (char *)_dl_get_origin();
    *(char **)(param_1 + 0x350) = pcVar1;
    if ((char *)0xfffffffffffffffd < pcVar1 + -1) goto LAB_007ac4fc;
  }
  else if (pcVar1 == (char *)0xffffffffffffffff) {
LAB_007ac4fc:
    uVar4 = 0;
    goto LAB_007ac485;
  }
  uVar4 = strlen(pcVar1);
LAB_007ac485:
  uVar6 = _dl_platformlen;
  if (_dl_platformlen < 0x14) {
    uVar6 = 0x14;
  }
  if (uVar6 < uVar4) {
    uVar6 = uVar4;
  }
  pvVar5 = malloc(sVar3 + 1 + (uVar6 - 4) * lVar7);
  if (pvVar5 == (void *)0x0) {
    return (char *)0x0;
  }
  pcVar1 = (char *)_dl_dst_substitute(param_1,param_2,pvVar5);
  return pcVar1;
}

