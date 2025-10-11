
undefined8 FUN_006c27d0(long param_1,undefined8 param_2,uint *param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  uVar8 = 0;
  if ((*param_3 & 0xfffffffd) == 0x38) {
    pcVar2 = (char *)**(undefined8 **)(*(long *)(param_3 + 4) + 0x10);
    if (*pcVar2 == 'd') {
      bVar1 = pcVar2[1];
      if (((bVar1 & 0xdf) == 0x58) || (bVar1 == 0x69)) {
        uVar8 = *(undefined8 *)(*(long *)(param_3 + 6) + 0x10);
        puVar9 = *(uint **)(*(long *)(param_3 + 6) + 0x18);
        lVar5 = *(long *)(param_1 + 0x100);
        if (bVar1 == 0x69) {
          if (lVar5 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar6 = 1;
            lVar5 = 0;
          }
          else {
            lVar6 = lVar5 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar6;
          *(undefined1 *)(param_1 + lVar5) = 0x2e;
          uVar3 = 0x2e;
        }
        else {
          if (lVar5 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar6 = 1;
            lVar5 = 0;
          }
          else {
            lVar6 = lVar5 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar6;
          *(undefined1 *)(param_1 + lVar5) = 0x5b;
          uVar3 = 0x5b;
        }
        *(undefined1 *)(param_1 + 0x108) = uVar3;
        FUN_006c06b0(param_1,0x11,uVar8);
        cVar4 = pcVar2[1];
        if (cVar4 == 'X') {
          puVar7 = &DAT_008215de;
          uVar3 = 0x20;
          lVar5 = *(long *)(param_1 + 0x100);
          while( true ) {
            if (lVar5 == 0xff) {
              *(undefined1 *)(param_1 + 0xff) = 0;
              (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
              *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
              lVar6 = 1;
              lVar5 = 0;
            }
            else {
              lVar6 = lVar5 + 1;
            }
            puVar7 = puVar7 + 1;
            *(long *)(param_1 + 0x100) = lVar6;
            *(undefined1 *)(param_1 + lVar5) = uVar3;
            *(undefined1 *)(param_1 + 0x108) = uVar3;
            if (puVar7 == &DAT_008215e3) break;
            uVar3 = *puVar7;
            lVar5 = lVar6;
          }
          FUN_006c06b0(param_1,0x11,*(undefined8 *)(puVar9 + 4));
          puVar9 = *(uint **)(puVar9 + 6);
          cVar4 = pcVar2[1];
        }
        if (cVar4 != 'i') {
          lVar5 = *(long *)(param_1 + 0x100);
          if (lVar5 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar6 = 1;
            lVar5 = 0;
          }
          else {
            lVar6 = lVar5 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar6;
          *(undefined1 *)(param_1 + lVar5) = 0x5d;
          *(undefined1 *)(param_1 + 0x108) = 0x5d;
        }
        if ((((*puVar9 & 0xfffffffd) == 0x38) &&
            (*(char *)**(undefined8 **)(*(long *)(puVar9 + 4) + 0x10) == 'd')) &&
           ((bVar1 = ((char *)**(undefined8 **)(*(long *)(puVar9 + 4) + 0x10))[1],
            (bVar1 & 0xdf) == 0x58 || (bVar1 == 0x69)))) {
          FUN_006c06b0(param_1,0x11,puVar9);
          uVar8 = 1;
        }
        else {
          lVar5 = *(long *)(param_1 + 0x100);
          if (lVar5 == 0xff) {
            *(undefined1 *)(param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x110))(param_1,0xff,*(undefined8 *)(param_1 + 0x118));
            *(long *)(param_1 + 0x140) = *(long *)(param_1 + 0x140) + 1;
            lVar6 = 1;
            lVar5 = 0;
          }
          else {
            lVar6 = lVar5 + 1;
          }
          *(long *)(param_1 + 0x100) = lVar6;
          *(undefined1 *)(param_1 + lVar5) = 0x3d;
          *(undefined1 *)(param_1 + 0x108) = 0x3d;
          FUN_006c2270(param_1,0x11,puVar9);
          uVar8 = 1;
        }
      }
    }
    return uVar8;
  }
  return 0;
}

