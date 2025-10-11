
void FUN_006755e0(undefined1 *param_1,long *param_2,char param_3)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  
  lVar7 = *param_2;
  *param_1 = 0;
  lVar7 = *(long *)(lVar7 + -0x18) + (long)param_2;
  uVar6 = *(uint *)(lVar7 + 0x20);
  if (uVar6 == 0) {
    if (*(long *)(lVar7 + 0xd8) == 0) {
      if ((param_3 != '\0') || ((*(byte *)(lVar7 + 0x19) & 0x10) == 0)) {
LAB_0067565a:
        *param_1 = 1;
        return;
      }
    }
    else {
                    /* try { // try from 0067561a to 0067561e has its CatchHandler @ 0067576f */
      FUN_0068f8c0(*(long *)(lVar7 + 0xd8));
      lVar7 = *(long *)(*param_2 + -0x18) + (long)param_2;
      if ((param_3 != '\0') || ((*(byte *)(lVar7 + 0x19) & 0x10) == 0)) {
LAB_00675634:
        uVar6 = *(uint *)(lVar7 + 0x20);
        if (uVar6 == 0) goto LAB_0067565a;
        goto LAB_0067563b;
      }
    }
    plVar1 = *(long **)(lVar7 + 0xe8);
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar5 = *(int *)plVar1[2];
    }
    else {
                    /* try { // try from 00675756 to 0067576e has its CatchHandler @ 0067576f */
      iVar5 = (**(code **)(*plVar1 + 0x48))(plVar1);
      lVar7 = *(long *)(*param_2 + -0x18) + (long)param_2;
    }
    plVar2 = *(long **)(lVar7 + 0xf0);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00403826();
    }
    if (iVar5 != -1) {
      do {
                    /* try { // try from 006756cf to 00675711 has its CatchHandler @ 0067576f */
        cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x2000);
        if (cVar4 == '\0') {
          lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
          goto LAB_00675634;
        }
        piVar3 = (int *)plVar1[2];
        if (piVar3 < (int *)plVar1[3]) {
          iVar5 = *piVar3;
          plVar1[2] = (long)(piVar3 + 1);
        }
        else {
          iVar5 = (**(code **)(*plVar1 + 0x50))(plVar1);
        }
        if (iVar5 == -1) break;
        if ((int *)plVar1[2] < (int *)plVar1[3]) {
          iVar5 = *(int *)plVar1[2];
        }
        else {
          iVar5 = (**(code **)(*plVar1 + 0x48))(plVar1);
        }
      } while (iVar5 != -1);
      lVar7 = (long)param_2 + *(long *)(*param_2 + -0x18);
    }
    uVar6 = *(uint *)(lVar7 + 0x20) | 2;
  }
LAB_0067563b:
  FUN_0066f6e0(lVar7,uVar6 | 4);
  return;
}

