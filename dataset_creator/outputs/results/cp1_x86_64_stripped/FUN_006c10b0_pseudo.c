
void FUN_006c10b0(undefined2 *param_1,undefined8 param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  plVar1 = param_4;
  if (param_4 != (long *)0x0) {
    do {
      if ((int)plVar1[2] != 0) break;
      if (*(uint *)plVar1[1] < 0x2c) {
        uVar4 = 1L << ((byte)*(uint *)plVar1[1] & 0x3f);
        if ((uVar4 & 0x8620e000000) == 0) {
          if ((uVar4 & 0x1c00000000) == 0) goto LAB_006c110e;
          bVar3 = *(byte *)(param_1 + 0x84);
          if ((bVar3 & 0xfd) != 0x28) goto LAB_006c11df;
          lVar2 = *(long *)(param_1 + 0x80);
          if (lVar2 != 0xff) goto LAB_006c11fb;
LAB_006c12e7:
          *(undefined1 *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          lVar5 = 1;
          lVar2 = 0;
        }
        else {
          bVar3 = *(byte *)(param_1 + 0x84);
LAB_006c11df:
          lVar5 = *(long *)(param_1 + 0x80);
          lVar2 = lVar5;
          if (bVar3 == 0x20) {
LAB_006c11ef:
            if (lVar2 == 0xff) goto LAB_006c12e7;
          }
          else {
            if (lVar5 != 0xff) {
              lVar2 = lVar5 + 1;
              *(long *)(param_1 + 0x80) = lVar2;
              *(undefined1 *)((long)param_1 + lVar5) = 0x20;
              *(undefined1 *)(param_1 + 0x84) = 0x20;
              goto LAB_006c11ef;
            }
            *(undefined1 *)((long)param_1 + 0xff) = 0;
            (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
            *(undefined1 *)param_1 = 0x20;
            lVar2 = 1;
            *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          }
LAB_006c11fb:
          lVar5 = lVar2 + 1;
        }
        *(long *)(param_1 + 0x80) = lVar5;
        *(undefined1 *)((long)param_1 + lVar2) = 0x28;
        uVar6 = *(undefined8 *)(param_1 + 0x94);
        *(undefined1 *)(param_1 + 0x84) = 0x28;
        *(undefined8 *)(param_1 + 0x94) = 0;
        FUN_006c1410(param_1,0x11,param_4,0);
        lVar2 = *(long *)(param_1 + 0x80);
        if (lVar2 == 0xff) {
          *(undefined1 *)((long)param_1 + 0xff) = 0;
          (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
          *(undefined1 *)(param_1 + 0x84) = 0x28;
          *param_1 = 0x2829;
          lVar5 = *(long *)(param_3 + 0x18);
          lVar2 = 2;
          *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
          *(undefined8 *)(param_1 + 0x80) = 2;
          if (lVar5 == 0) goto LAB_006c1197;
          goto LAB_006c1177;
        }
        lVar5 = lVar2 + 1;
        *(long *)(param_1 + 0x80) = lVar5;
        *(undefined1 *)((long)param_1 + lVar2) = 0x29;
        *(undefined1 *)(param_1 + 0x84) = 0x29;
        goto joined_r0x006c1265;
      }
LAB_006c110e:
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x94);
  *(undefined8 *)(param_1 + 0x94) = 0;
  FUN_006c1410(param_1,0x11,param_4,0);
  lVar5 = *(long *)(param_1 + 0x80);
joined_r0x006c1265:
  if (lVar5 == 0xff) {
    *(undefined1 *)((long)param_1 + 0xff) = 0;
    (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
    *(undefined1 *)param_1 = 0x28;
    *(undefined1 *)(param_1 + 0x84) = 0x28;
    lVar2 = *(long *)(param_3 + 0x18);
    *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
    *(undefined8 *)(param_1 + 0x80) = 1;
    if (lVar2 != 0) goto LAB_006c1177;
    lVar2 = 1;
  }
  else {
    lVar2 = lVar5 + 1;
    *(long *)(param_1 + 0x80) = lVar2;
    *(undefined1 *)((long)param_1 + lVar5) = 0x28;
    *(undefined1 *)(param_1 + 0x84) = 0x28;
    if (*(long *)(param_3 + 0x18) != 0) {
LAB_006c1177:
      FUN_006c06b0(param_1,0x11);
      lVar2 = *(long *)(param_1 + 0x80);
    }
    if (lVar2 == 0xff) {
      *(undefined1 *)((long)param_1 + 0xff) = 0;
      (**(code **)(param_1 + 0x88))(param_1,0xff,*(undefined8 *)(param_1 + 0x8c));
      *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
      lVar5 = 1;
      lVar2 = 0;
      goto LAB_006c119b;
    }
  }
LAB_006c1197:
  lVar5 = lVar2 + 1;
LAB_006c119b:
  *(long *)(param_1 + 0x80) = lVar5;
  *(undefined1 *)((long)param_1 + lVar2) = 0x29;
  *(undefined1 *)(param_1 + 0x84) = 0x29;
  FUN_006c1410(param_1,0x11,param_4,1);
  *(undefined8 *)(param_1 + 0x94) = uVar6;
  return;
}

