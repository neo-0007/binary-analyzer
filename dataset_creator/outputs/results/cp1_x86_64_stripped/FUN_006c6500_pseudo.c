
long * FUN_006c6500(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  char cVar8;
  long in_FS_OFFSET;
  char local_41;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == -1) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      plVar3 = (long *)FUN_006ca440();
      return plVar3;
    }
    goto LAB_006c67fc;
  }
  param_1[1] = 0;
  FUN_006755e0(&local_41,param_1,1);
  if ((0 < param_2) && (local_41 != '\0')) {
    plVar3 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xe8);
    if ((int *)plVar3[2] < (int *)plVar3[3]) {
      iVar2 = *(int *)plVar3[2];
    }
    else {
      iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
    }
    cVar8 = '\0';
LAB_006c65d8:
    do {
      lVar7 = param_1[1];
      while (lVar7 < param_2) {
        if (iVar2 == -1) {
          if (param_2 == 0x7fffffffffffffff) {
LAB_006c66df:
            if (cVar8 != '\0') {
              param_1[1] = 0x7fffffffffffffff;
            }
          }
          goto LAB_006c66f3;
        }
        if (iVar2 == param_3) {
          if (param_2 == 0x7fffffffffffffff) goto LAB_006c671f;
          goto LAB_006c6784;
        }
        piVar1 = (int *)plVar3[3];
        piVar5 = (int *)plVar3[2];
        lVar6 = (long)piVar1 - (long)piVar5 >> 2;
        if (param_2 - lVar7 < lVar6) {
          lVar6 = param_2 - lVar7;
        }
        if (lVar6 < 2) {
          param_1[1] = lVar7 + 1;
          if (piVar5 < piVar1) {
            iVar2 = *piVar5;
            plVar3[2] = (long)(piVar5 + 1);
          }
          else {
            iVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
          }
          if (iVar2 == -1) {
            if (param_2 == 0x7fffffffffffffff) goto LAB_006c66df;
            if (param_2 <= param_1[1]) goto LAB_006c6559;
            goto LAB_006c66f3;
          }
          piVar5 = (int *)plVar3[2];
          if ((int *)plVar3[3] <= piVar5) goto LAB_006c6767;
        }
        else {
          lVar4 = thunk_FUN_00756540(piVar5,param_3);
          if (lVar4 != 0) {
            lVar6 = lVar4 - (long)piVar5 >> 2;
          }
          piVar5 = piVar5 + lVar6;
          plVar3[2] = (long)piVar5;
          param_1[1] = lVar6 + lVar7;
          if (piVar1 <= piVar5) {
LAB_006c6767:
                    /* try { // try from 006c676d to 006c67f6 has its CatchHandler @ 006c6814 */
            iVar2 = (**(code **)(*plVar3 + 0x48))(plVar3);
            goto LAB_006c65d8;
          }
        }
        iVar2 = *piVar5;
        lVar7 = param_1[1];
      }
      if (param_2 != 0x7fffffffffffffff) break;
      if (iVar2 == -1) {
        if (cVar8 != '\0') {
          param_1[1] = 0x7fffffffffffffff;
        }
LAB_006c66f3:
        lVar7 = *(long *)(*param_1 + -0x18) + (long)param_1;
        FUN_0066f6e0(lVar7,*(uint *)(lVar7 + 0x20) | 2);
        break;
      }
      if (iVar2 == param_3) goto LAB_006c671f;
      param_1[1] = -0x8000000000000000;
      cVar8 = local_41;
    } while( true );
  }
  goto LAB_006c6559;
LAB_006c671f:
  if (cVar8 == '\0') {
    if (lVar7 != 0x7fffffffffffffff) {
LAB_006c6784:
      param_1[1] = lVar7 + 1;
    }
  }
  else {
    param_1[1] = 0x7fffffffffffffff;
  }
  if ((ulong)plVar3[2] < (ulong)plVar3[3]) {
    plVar3[2] = plVar3[2] + 4;
  }
  else {
    (**(code **)(*plVar3 + 0x50))(plVar3);
  }
LAB_006c6559:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
LAB_006c67fc:
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

