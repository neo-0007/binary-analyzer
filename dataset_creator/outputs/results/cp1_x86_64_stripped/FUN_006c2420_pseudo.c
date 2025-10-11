
undefined8 FUN_006c2420(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  int *piVar10;
  undefined1 uVar11;
  
  pcVar3 = (char *)**(undefined8 **)(*(long *)(param_3 + 0x10) + 0x10);
  if (*pcVar3 != 'f') {
    return 0;
  }
  piVar10 = (int *)0x0;
  piVar7 = *(int **)(*(long *)(param_3 + 0x18) + 0x18);
  uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  if (*piVar7 == 0x3c) {
    piVar10 = *(int **)(piVar7 + 6);
    piVar7 = *(int **)(piVar7 + 4);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0xffffffff;
  cVar1 = pcVar3[1];
  if (cVar1 == 'l') {
    puVar9 = &DAT_008215d4;
    uVar11 = 0x28;
    lVar6 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar6 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar6 = 0;
        lVar5 = 1;
      }
      else {
        lVar5 = lVar6 + 1;
      }
      puVar9 = puVar9 + 1;
      *(long *)(param_1 + 0x100) = lVar5;
      *(undefined1 *)(param_1 + lVar6) = uVar11;
      *(undefined1 *)(param_1 + 0x108) = uVar11;
      if (puVar9 == &DAT_008215d8) break;
      uVar11 = *puVar9;
      lVar6 = lVar5;
    }
    FUN_006c1ab0(param_1,0x11,uVar4);
  }
  else {
    if ('l' < cVar1) {
      if (cVar1 == 'r') {
        lVar6 = *(long *)(param_1 + 0x100);
        if (lVar6 == 0xff) {
          *(undefined1 *)(param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
          *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
          lVar5 = 1;
          lVar6 = 0;
        }
        else {
          lVar5 = lVar6 + 1;
        }
        *(long *)(param_1 + 0x100) = lVar5;
        *(undefined1 *)(param_1 + lVar6) = 0x28;
        puVar9 = &DAT_008215d9;
        *(undefined1 *)(param_1 + 0x108) = 0x28;
        FUN_006c2270(param_1,0x11,piVar7);
        FUN_006c1ab0(param_1,0x11,uVar4);
        uVar11 = 0x2e;
        lVar6 = *(long *)(param_1 + 0x100);
        while( true ) {
          if (lVar6 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar5 = 1;
            lVar6 = 0;
          }
          else {
            lVar5 = lVar6 + 1;
          }
          puVar9 = puVar9 + 1;
          *(long *)(param_1 + 0x100) = lVar5;
          *(undefined1 *)(param_1 + lVar6) = uVar11;
          *(undefined1 *)(param_1 + 0x108) = uVar11;
          if (puVar9 == &DAT_008215dd) break;
          uVar11 = *puVar9;
          lVar6 = lVar5;
        }
      }
      goto LAB_006c25a9;
    }
    if ((cVar1 != 'L') && (cVar1 != 'R')) goto LAB_006c25a9;
    lVar6 = *(long *)(param_1 + 0x100);
    if (lVar6 == 0xff) {
      *(undefined1 *)(param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
      *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
      lVar5 = 1;
      lVar6 = 0;
    }
    else {
      lVar5 = lVar6 + 1;
    }
    *(long *)(param_1 + 0x100) = lVar5;
    *(undefined1 *)(param_1 + lVar6) = 0x28;
    puVar8 = &DAT_008215d5;
    uVar11 = 0x2e;
    *(undefined1 *)(param_1 + 0x108) = 0x28;
    FUN_006c2270(param_1,0x11,piVar7);
    FUN_006c1ab0(param_1,0x11,uVar4);
    lVar6 = *(long *)(param_1 + 0x100);
    while( true ) {
      if (lVar6 == 0xff) {
        *(undefined1 *)(param_1 + 0xff) = 0;
        (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
        *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
        lVar6 = 0;
        lVar5 = 1;
      }
      else {
        lVar5 = lVar6 + 1;
      }
      puVar8 = puVar8 + 1;
      *(long *)(param_1 + 0x100) = lVar5;
      *(undefined1 *)(param_1 + lVar6) = uVar11;
      *(undefined1 *)(param_1 + 0x108) = uVar11;
      if (puVar8 == &DAT_008215d8) break;
      uVar11 = *puVar8;
      lVar6 = lVar5;
    }
    FUN_006c1ab0(param_1,0x11,uVar4);
    piVar7 = piVar10;
  }
  FUN_006c2270(param_1,0x11,piVar7);
  lVar6 = *(long *)(param_1 + 0x100);
  if (lVar6 == 0xff) {
    *(undefined1 *)(param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
    *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
    lVar5 = 1;
    lVar6 = 0;
  }
  else {
    lVar5 = lVar6 + 1;
  }
  *(long *)(param_1 + 0x100) = lVar5;
  *(undefined1 *)(param_1 + lVar6) = 0x29;
  *(undefined1 *)(param_1 + 0x108) = 0x29;
LAB_006c25a9:
  *(undefined4 *)(param_1 + 0x13c) = uVar2;
  return 1;
}

