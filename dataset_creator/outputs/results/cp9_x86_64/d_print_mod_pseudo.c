
void d_print_mod(undefined1 *param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  char *pcVar5;
  undefined *puVar6;
  char cVar7;
  
  switch(*param_3) {
  case 3:
    param_3 = *(undefined4 **)(param_3 + 4);
    goto LAB_006be723;
  default:
    goto LAB_006be723;
  case 0x19:
  case 0x1c:
    pcVar5 = " restrict";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x1a:
  case 0x1d:
    pcVar5 = " volatile";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x1b:
  case 0x1e:
    pcVar5 = " const";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      pcVar5 = pcVar5 + 1;
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x1f:
    lVar1 = *(long *)(param_1 + 0x100);
    if (lVar1 != 0xff) {
      lVar2 = lVar1 + 1;
      *(long *)(param_1 + 0x100) = lVar2;
      param_1[lVar1] = 0x20;
      param_1[0x108] = 0x20;
      goto LAB_006be9ef;
    }
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *param_1 = 0x20;
    lVar2 = 1;
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
LAB_006be9fb:
    lVar1 = lVar2 + 1;
    goto LAB_006be9ff;
  case 0x20:
    lVar1 = *(long *)(param_1 + 0x100);
    if (lVar1 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar2 = 1;
      lVar1 = 0;
    }
    else {
      lVar2 = lVar1 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar2;
    param_1[lVar1] = 0x20;
    param_1[0x108] = 0x20;
    goto LAB_006bea27;
  case 0x21:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar1 = 1;
      lVar2 = 0;
    }
    else {
      lVar1 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar1;
    param_1[lVar2] = 0x20;
    param_1[0x108] = 0x20;
    param_3 = *(undefined4 **)(param_3 + 6);
LAB_006be723:
    d_print_comp(param_1,0x11,param_3);
    return;
  case 0x22:
    lVar2 = *(long *)(param_1 + 0x100);
    if (lVar2 == 0xff) {
      param_1[0xff] = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar1 = 1;
      lVar2 = 0;
    }
    else {
      lVar1 = lVar2 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar1;
    param_1[lVar2] = 0x2a;
    param_1[0x108] = 0x2a;
    break;
  case 0x23:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_006be9ef:
    if (lVar2 != 0xff) goto LAB_006be9fb;
    param_1[0xff] = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar1 = 1;
    lVar2 = 0;
LAB_006be9ff:
    *(long *)(param_1 + 0x100) = lVar1;
    param_1[lVar2] = 0x26;
    param_1[0x108] = 0x26;
    break;
  case 0x24:
    lVar2 = *(long *)(param_1 + 0x100);
LAB_006bea27:
    puVar6 = &DAT_00817e2b;
    uVar4 = 0x26;
    while( true ) {
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      puVar6 = puVar6 + 1;
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = uVar4;
      param_1[0x108] = uVar4;
      if (puVar6 == &DAT_00817e2d) break;
      uVar4 = *puVar6;
      lVar2 = lVar1;
    }
    break;
  case 0x25:
    pcVar5 = " _Complex";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x26:
    pcVar5 = " _Imaginary";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x2b:
    if (param_1[0x108] != '(') {
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = 0x20;
      param_1[0x108] = 0x20;
    }
    puVar6 = &DAT_00817e44;
    uVar4 = 0x3a;
    d_print_comp(param_1,0x11,*(undefined8 *)(param_3 + 4));
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      puVar6 = puVar6 + 1;
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = uVar4;
      param_1[0x108] = uVar4;
      if (puVar6 == &DAT_00817e47) break;
      uVar4 = *puVar6;
      lVar2 = lVar1;
    }
    break;
  case 0x2d:
    pcVar5 = " __vector(";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    lVar2 = *(long *)(param_3 + 4);
    goto LAB_006bedfd;
  case 0x4e:
    pcVar5 = " transaction_safe";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    break;
  case 0x50:
    pcVar5 = " noexcept";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      pcVar5 = pcVar5 + 1;
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
    goto LAB_006bedc0;
  case 0x51:
    pcVar5 = " throw";
    cVar7 = ' ';
    lVar2 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      pcVar5 = pcVar5 + 1;
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = cVar7;
      param_1[0x108] = cVar7;
      if (pcVar5 == "") break;
      cVar7 = *pcVar5;
      lVar2 = lVar1;
    }
LAB_006bedc0:
    lVar2 = *(long *)(param_3 + 6);
    if (lVar2 != 0) {
      if (lVar1 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar2 = *(long *)(param_3 + 6);
        lVar1 = 0;
        lVar3 = 1;
      }
      else {
        lVar3 = lVar1 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar3;
      param_1[lVar1] = 0x28;
      param_1[0x108] = 0x28;
LAB_006bedfd:
      d_print_comp(param_1,0x11,lVar2);
      lVar2 = *(long *)(param_1 + 0x100);
      if (lVar2 == 0xff) {
        param_1[0xff] = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar1 = 1;
        lVar2 = 0;
      }
      else {
        lVar1 = lVar2 + 1;
      }
      *(long *)(param_1 + 0x100) = lVar1;
      param_1[lVar2] = 0x29;
      param_1[0x108] = 0x29;
      return;
    }
  }
  return;
}

