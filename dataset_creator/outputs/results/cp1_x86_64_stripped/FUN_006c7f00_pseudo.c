
long FUN_006c7f00(long *param_1,long *param_2,undefined1 *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  piVar1 = (int *)param_1[2];
  *param_3 = 1;
  if (piVar1 < (int *)param_1[3]) {
    iVar3 = *piVar1;
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x48))();
  }
  lVar7 = 0;
  do {
    while( true ) {
      if (iVar3 == -1) {
        return lVar7;
      }
      piVar1 = (int *)param_1[3];
      piVar6 = (int *)param_1[2];
      lVar5 = (long)piVar1 - (long)piVar6;
      if (lVar5 < 5) break;
      lVar4 = (**(code **)(*param_2 + 0x60))(param_2);
      lVar7 = lVar7 + lVar4;
      param_1[2] = param_1[2] + lVar4 * 4;
      if (lVar4 < lVar5 >> 2) {
LAB_006c7fc0:
        *param_3 = 0;
        return lVar7;
      }
LAB_006c7f5c:
      iVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    }
    piVar2 = (int *)param_2[5];
    if (piVar2 < (int *)param_2[6]) {
      *piVar2 = iVar3;
      param_2[5] = (long)(piVar2 + 1);
      if (piVar6 < piVar1) goto LAB_006c7f9b;
LAB_006c8000:
      iVar3 = (**(code **)(*param_1 + 0x50))(param_1);
    }
    else {
      iVar3 = (**(code **)(*param_2 + 0x68))(param_2,iVar3);
      if (iVar3 == -1) goto LAB_006c7fc0;
      piVar6 = (int *)param_1[2];
      if ((int *)param_1[3] <= piVar6) goto LAB_006c8000;
LAB_006c7f9b:
      iVar3 = *piVar6;
      param_1[2] = (long)(piVar6 + 1);
    }
    lVar7 = lVar7 + 1;
    if (iVar3 == -1) {
      return lVar7;
    }
    if ((int *)param_1[3] <= (int *)param_1[2]) goto LAB_006c7f5c;
    iVar3 = *(int *)param_1[2];
  } while( true );
}

