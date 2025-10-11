
long * FUN_0041e580(long *param_1,long *param_2,long param_3,int *param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *param_1;
  plVar6 = param_2;
  do {
    if (lVar4 == 0) {
      return plVar6;
    }
    iVar3 = FUN_0041bfe0(param_1[2]);
    if (param_2 == (long *)0x0) {
      if ((int)param_1[1] - 6U < 2) {
        lVar4 = 8;
      }
      else {
        lVar4 = param_1[3];
        if ((int)param_1[1] == 4) {
          lVar4 = lVar4 + 1;
        }
      }
      lVar4 = FUN_0041e570(lVar4);
      plVar1 = (long *)(param_3 + 0x10 + (long)iVar3 * 0x20);
      *plVar1 = *plVar1 + lVar4;
    }
    else {
      lVar4 = param_1[1];
      lVar5 = (long)iVar3 * 0x20 + param_3;
      *plVar6 = *param_1;
      plVar6[1] = lVar4;
      lVar4 = param_1[3];
      puVar2 = *(undefined8 **)(lVar5 + 8);
      plVar6[2] = param_1[2];
      plVar6[3] = lVar4;
      lVar4 = param_1[4];
      plVar6[2] = (long)puVar2;
      plVar6[4] = lVar4;
      if ((int)param_1[1] - 6U < 2) {
        lVar4 = 8;
        *puVar2 = *(undefined8 *)param_1[2];
LAB_0041e688:
        lVar4 = FUN_0041e570(lVar4);
      }
      else {
        lVar4 = param_1[3];
        thunk_FUN_00713a50(puVar2,param_1[2],lVar4);
        if ((int)param_1[1] != 4) goto LAB_0041e688;
        lVar4 = FUN_0041e570(lVar4 + 1);
      }
      plVar1 = (long *)(lVar5 + 8);
      *plVar1 = *plVar1 + lVar4 * 8;
      plVar6 = plVar6 + 5;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = *param_4 + 1;
    }
    param_1 = param_1 + 5;
    lVar4 = *param_1;
  } while( true );
}

