
void d_print_array_type(undefined2 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  
  plVar1 = param_4;
  if (param_4 != (long *)0x0) {
LAB_006bf760:
    if ((int)plVar1[2] != 0) goto code_r0x006bf76b;
    if (*(int *)plVar1[1] != 0x2a) {
      pcVar4 = " (";
      cVar5 = ' ';
      lVar3 = *(long *)(param_1 + 0x80);
      while( true ) {
        if (lVar3 == 0xff) {
          *(undefined1 *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar2 = 1;
          lVar3 = 0;
        }
        else {
          lVar2 = lVar3 + 1;
        }
        pcVar4 = pcVar4 + 1;
        *(long *)(param_1 + 0x80) = lVar2;
        *(char *)((long)param_1 + lVar3) = cVar5;
        *(char *)(param_1 + 0x84) = cVar5;
        if (pcVar4 == "") break;
        cVar5 = *pcVar4;
        lVar3 = lVar2;
      }
      d_print_mod_list(param_1,0x11,param_4,0);
      lVar3 = *(long *)(param_1 + 0x80);
      if (lVar3 != 0xff) {
        lVar2 = lVar3 + 1;
        *(long *)(param_1 + 0x80) = lVar2;
        *(undefined1 *)((long)param_1 + lVar3) = 0x29;
        *(undefined1 *)(param_1 + 0x84) = 0x29;
        if (lVar2 != 0xff) goto LAB_006bf798;
        goto LAB_006bf9a4;
      }
      *(undefined1 *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined1 *)param_1 = 0x29;
      lVar2 = 1;
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      goto LAB_006bf798;
    }
    d_print_mod_list(param_1,0x11,param_4,0);
    lVar3 = *(long *)(param_1 + 0x80);
    goto joined_r0x006bf84d;
  }
LAB_006bf785:
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 == 0xff) {
LAB_006bf9a4:
    *(undefined1 *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined1 *)(param_1 + 0x84) = 0x5b;
    *param_1 = 0x5b20;
    lVar3 = *(long *)(param_3 + 0x10);
    lVar2 = 2;
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 2;
    if (lVar3 != 0) goto LAB_006bf7da;
  }
  else {
LAB_006bf798:
    lVar3 = lVar2 + 1;
    *(long *)(param_1 + 0x80) = lVar3;
    *(undefined1 *)((long)param_1 + lVar2) = 0x20;
    *(undefined1 *)(param_1 + 0x84) = 0x20;
joined_r0x006bf84d:
    if (lVar3 == 0xff) {
      *(undefined1 *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(undefined1 *)param_1 = 0x5b;
      *(undefined1 *)(param_1 + 0x84) = 0x5b;
      lVar3 = *(long *)(param_3 + 0x10);
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      *(undefined8 *)(param_1 + 0x80) = 1;
      if (lVar3 == 0) {
        lVar2 = 1;
        goto LAB_006bf7fa;
      }
LAB_006bf7da:
      d_print_comp(param_1,0x11);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    else {
      lVar2 = lVar3 + 1;
      *(long *)(param_1 + 0x80) = lVar2;
      *(undefined1 *)((long)param_1 + lVar3) = 0x5b;
      *(undefined1 *)(param_1 + 0x84) = 0x5b;
      if (*(long *)(param_3 + 0x10) != 0) goto LAB_006bf7da;
    }
    if (lVar2 == 0xff) {
      *(undefined1 *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar3 = 1;
      lVar2 = 0;
      goto LAB_006bf7fe;
    }
  }
LAB_006bf7fa:
  lVar3 = lVar2 + 1;
LAB_006bf7fe:
  *(long *)(param_1 + 0x80) = lVar3;
  *(undefined1 *)((long)param_1 + lVar2) = 0x5d;
  *(undefined1 *)(param_1 + 0x84) = 0x5d;
  return;
code_r0x006bf76b:
  plVar1 = (long *)*plVar1;
  if (plVar1 == (long *)0x0) goto code_r0x006bf773;
  goto LAB_006bf760;
code_r0x006bf773:
  d_print_mod_list(param_1,0x11,param_4,0);
  goto LAB_006bf785;
}

