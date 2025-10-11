
undefined8 is_trusted_path_normalize(char *param_1,long param_2)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  char cVar6;
  undefined1 *puVar7;
  long *plVar9;
  undefined1 *puVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  puVar7 = &stack0xfffffffffffffff8;
  puVar8 = &stack0xfffffffffffffff8;
  puVar3 = &stack0xfffffffffffffff8;
  while (puVar8 != &stack0xfffffffffffffff8 + -(param_2 + 0x19U & 0xfffffffffffff000)) {
    puVar7 = puVar3 + -0x1000;
    *(undefined8 *)(puVar3 + -8) = *(undefined8 *)(puVar3 + -8);
    puVar8 = puVar3 + -0x1000;
    puVar3 = puVar3 + -0x1000;
  }
  uVar5 = (ulong)((uint)(param_2 + 0x19U) & 0xff0);
  if (uVar5 != 0) {
    *(undefined8 *)(puVar7 + -8) = *(undefined8 *)(puVar7 + -8);
  }
  plVar9 = (long *)((ulong)(puVar7 + (0xf - uVar5)) & 0xfffffffffffffff0);
  plVar4 = plVar9;
  cVar6 = *param_1;
  if (*param_1 == '\0') {
LAB_007a957e:
    *(char *)plVar4 = '/';
    plVar4 = (long *)((long)plVar4 + 1);
  }
  else {
    do {
      while (cVar1 = param_1[1], cVar6 != '/') {
LAB_007a9530:
        *(char *)plVar4 = cVar6;
        param_1 = param_1 + 1;
        plVar4 = (long *)((long)plVar4 + 1);
        cVar6 = cVar1;
LAB_007a953c:
        if (cVar6 == '\0') goto LAB_007a9570;
      }
      if (cVar1 == '.') {
        cVar2 = param_1[2];
        if (cVar2 == '.') {
          cVar2 = param_1[3];
          if ((cVar2 != '/') && (cVar2 != '\0')) goto LAB_007a9553;
          do {
            if (plVar4 <= plVar9) break;
            plVar4 = (long *)((long)plVar4 + -1);
          } while (*(char *)plVar4 != '/');
          param_1 = param_1 + 3;
          cVar6 = cVar2;
        }
        else {
          if ((cVar2 != '/') && (cVar2 != '\0')) goto LAB_007a9553;
          param_1 = param_1 + 2;
          cVar6 = cVar2;
        }
        goto LAB_007a953c;
      }
LAB_007a9553:
      if ((plVar4 <= plVar9) || (*(char *)((long)plVar4 + -1) != '/')) goto LAB_007a9530;
      param_1 = param_1 + 1;
      cVar6 = cVar1;
    } while (cVar1 != '\0');
LAB_007a9570:
    if ((plVar4 == plVar9) || (*(char *)((long)plVar4 + -1) != '/')) goto LAB_007a957e;
  }
  uVar5 = (long)plVar4 - (long)plVar9;
  if (uVar5 < 0x16) {
    if (uVar5 < 5) goto LAB_007a960a;
  }
  else {
    if (((plVar9[1] == 0x756e696c2d34365f && *plVar9 == 0x3638782f62696c2f) &&
        ((int)plVar9[2] == 0x6e672d78)) && (*(short *)((long)plVar9 + 0x14) == 0x2f75)) {
      return 1;
    }
    if (((0x19 < uVar5) && (plVar9[1] == 0x2d34365f3638782f && *plVar9 == 0x62696c2f7273752f)) &&
       ((plVar9[2] == 0x6e672d78756e696c && ((short)plVar9[3] == 0x2f75)))) {
      return 1;
    }
  }
  if (((int)*plVar9 == 0x62696c2f) && (*(char *)((long)plVar9 + 4) == '/')) {
    return 1;
  }
LAB_007a960a:
  if (((8 < uVar5) && (*plVar9 == 0x62696c2f7273752f)) && ((char)plVar9[1] == '/')) {
    return 1;
  }
  return 0;
}

