
void FUN_00677410(long *param_1,int *param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  char local_49;
  undefined1 local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_006755e0(&local_49,param_1,0);
  lVar8 = *param_1;
  if (local_49 == '\0') {
    uVar7 = 4;
  }
  else {
    lVar10 = *(long *)((long)param_1 + *(long *)(lVar8 + -0x18) + 0x10);
    if ((lVar10 < 1) || (param_3 <= lVar10)) {
      lVar10 = param_3;
    }
    FUN_00625160(local_48,(long)param_1 + *(long *)(lVar8 + -0x18) + 0xd0);
                    /* try { // try from 0067748c to 00677490 has its CatchHandler @ 006776bb */
    plVar6 = (long *)FUN_006a4ba0(local_48);
    FUN_00625980(local_48);
    plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar1[2] < (int *)plVar1[3]) {
      iVar5 = *(int *)plVar1[2];
    }
    else {
                    /* try { // try from 00677646 to 00677648 has its CatchHandler @ 006776c7 */
      iVar5 = (**(code **)(*plVar1 + 0x48))(plVar1);
    }
    lVar10 = lVar10 + -1;
    if (lVar10 < 1) {
      lVar8 = *param_1;
      *param_2 = 0;
      uVar7 = 4;
      *(undefined8 *)((long)param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
    else if (iVar5 == -1) {
      lVar8 = *param_1;
      *param_2 = 0;
      uVar7 = 6;
      *(undefined8 *)((long)param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
    else {
      lVar11 = 0;
      do {
                    /* try { // try from 00677520 to 0067754a has its CatchHandler @ 006776d3 */
        cVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x2000,iVar5);
        if (cVar4 != '\0') {
          lVar8 = *param_1;
          uVar7 = 4;
          lVar10 = *(long *)(lVar8 + -0x18);
          *param_2 = 0;
          *(undefined8 *)((long)param_1 + lVar10 + 0x10) = 0;
          if (lVar11 == 0) goto LAB_00677585;
          goto LAB_00677594;
        }
        piVar9 = param_2 + 1;
        piVar2 = (int *)plVar1[2];
        lVar11 = lVar11 + 1;
        *param_2 = iVar5;
        if (piVar2 < (int *)plVar1[3]) {
          iVar5 = *piVar2;
          plVar1[2] = (long)(piVar2 + 1);
          if (iVar5 != -1) goto LAB_006774ef;
LAB_00677550:
          lVar8 = *param_1;
          lVar3 = *(long *)(lVar8 + -0x18);
          if (lVar11 < lVar10) {
            *piVar9 = 0;
            uVar7 = 2;
            *(undefined8 *)((long)param_1 + lVar3 + 0x10) = 0;
            goto LAB_00677585;
          }
LAB_006775f3:
          lVar8 = *(long *)(lVar8 + -0x18);
          *piVar9 = 0;
          *(undefined8 *)((long)param_1 + lVar8 + 0x10) = 0;
          goto LAB_00677594;
        }
        iVar5 = (**(code **)(*plVar1 + 0x50))(plVar1);
        if (iVar5 == -1) goto LAB_00677550;
LAB_006774ef:
        if ((int *)plVar1[2] < (int *)plVar1[3]) {
          iVar5 = *(int *)plVar1[2];
        }
        else {
                    /* try { // try from 006775d6 to 006775d8 has its CatchHandler @ 006776d3 */
          iVar5 = (**(code **)(*plVar1 + 0x48))(plVar1);
        }
        if (lVar11 == lVar10) {
          lVar8 = *param_1;
          goto LAB_006775f3;
        }
        param_2 = piVar9;
      } while (iVar5 != -1);
      lVar8 = *param_1;
      *piVar9 = 0;
      uVar7 = 2;
      *(undefined8 *)((long)param_1 + *(long *)(lVar8 + -0x18) + 0x10) = 0;
    }
  }
LAB_00677585:
  lVar8 = *(long *)(lVar8 + -0x18) + (long)param_1;
  FUN_0066f6e0(lVar8,uVar7 | *(uint *)(lVar8 + 0x20));
LAB_00677594:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

