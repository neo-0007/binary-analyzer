
undefined8 UI_set_result_ex(long param_1,uint *param_2,char *param_3,int param_4)

{
  uint uVar1;
  char *__s;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;
  undefined8 uVar6;
  size_t __n;
  
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1 + 0x28) & 0xfffffffe;
  *(uint *)(param_1 + 0x28) = uVar2;
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      if (param_4 < (int)param_2[10]) {
        *(uint *)(param_1 + 0x28) = uVar2 | 1;
        ERR_new();
        ERR_set_debug("../crypto/ui/ui_lib.c",0x374,"UI_set_result_ex");
        ERR_set_error(0x28,0x65,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
        return 0xffffffff;
      }
      if ((int)param_2[0xb] < param_4) {
        *(uint *)(param_1 + 0x28) = uVar2 | 1;
        ERR_new();
        ERR_set_debug("../crypto/ui/ui_lib.c",0x37c,"UI_set_result_ex");
        ERR_set_error(0x28,100,"You must type in %d to %d characters",param_2[10],param_2[0xb]);
        return 0xffffffff;
      }
      if (*(void **)(param_2 + 6) != (void *)0x0) {
        __n = (size_t)param_4;
        memcpy(*(void **)(param_2 + 6),param_3,__n);
        if (param_4 <= (int)param_2[0xb]) {
          *(undefined1 *)(*(long *)(param_2 + 6) + __n) = 0;
        }
        *(size_t *)(param_2 + 8) = __n;
        return 0;
      }
      ERR_new();
      uVar6 = 900;
LAB_005836b6:
      ERR_set_debug("../crypto/ui/ui_lib.c",uVar6,"UI_set_result_ex");
      ERR_set_error(0x28,0x69,0);
      return 0xffffffff;
    }
  }
  else if (uVar1 == 3) {
    if (*(undefined1 **)(param_2 + 6) == (undefined1 *)0x0) {
      ERR_new();
      uVar6 = 0x392;
      goto LAB_005836b6;
    }
    **(undefined1 **)(param_2 + 6) = 0;
    cVar5 = *param_3;
    if (cVar5 != '\0') {
      __s = *(char **)(param_2 + 0xc);
      do {
        pcVar4 = strchr(__s,(int)cVar5);
        if (pcVar4 != (char *)0x0) {
          **(char **)(param_2 + 6) = *__s;
          return 0;
        }
        pcVar4 = *(char **)(param_2 + 0xe);
        pcVar3 = strchr(pcVar4,(int)cVar5);
        if (pcVar3 != (char *)0x0) {
          **(char **)(param_2 + 6) = *pcVar4;
          return 0;
        }
        cVar5 = param_3[1];
        param_3 = param_3 + 1;
      } while (cVar5 != '\0');
    }
  }
  return 0;
}

