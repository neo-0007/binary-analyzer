
long FUN_004b9c80(long param_1,long param_2,long param_3,int param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = FUN_005c1070();
  if (param_5 != 0) {
    lVar5 = (long)param_4 * 8;
    plVar4 = (long *)(param_1 + lVar5);
    plVar3 = (long *)(param_3 + lVar5);
    if (-1 < param_5) {
      plVar3 = (long *)(param_2 + lVar5);
      lVar5 = 0;
      do {
        if (lVar2 == 0) {
LAB_004b9d7f:
          while (((*plVar4 = *plVar3, param_5 != 1 && (plVar4[1] = plVar3[1], param_5 != 2)) &&
                 (plVar4[2] = plVar3[2], param_5 != 3))) {
            plVar4[3] = plVar3[3];
            param_5 = param_5 + -4;
            if (param_5 == 0) {
              return 0;
            }
            plVar3 = plVar3 + 4;
            plVar4 = plVar4 + 4;
          }
          return 0;
        }
        lVar1 = *plVar3;
        *plVar4 = lVar1 - lVar2;
        if (lVar1 != 0) {
          lVar2 = lVar5;
        }
        if (param_5 == 1) {
          return lVar2;
        }
        lVar1 = plVar3[1];
        plVar4[1] = lVar1 - lVar2;
        if (lVar1 != 0) {
          lVar2 = lVar5;
        }
        if (param_5 == 2) {
          return lVar2;
        }
        lVar1 = plVar3[2];
        plVar4[2] = lVar1 - lVar2;
        if (lVar1 != 0) {
          lVar2 = lVar5;
        }
        if (param_5 == 3) {
          return lVar2;
        }
        lVar1 = plVar3[3];
        param_5 = param_5 + -4;
        plVar4[3] = lVar1 - lVar2;
        if (lVar1 != 0) {
          plVar3 = plVar3 + 4;
          plVar4 = plVar4 + 4;
          if (param_5 == 0) {
            return 0;
          }
          goto LAB_004b9d7f;
        }
        if (param_5 == 0) {
          return lVar2;
        }
        plVar3 = plVar3 + 4;
        plVar4 = plVar4 + 4;
      } while( true );
    }
    while( true ) {
      lVar5 = *plVar3;
      *plVar4 = -(lVar2 + lVar5);
      if (lVar5 != 0) {
        lVar2 = 1;
      }
      if (param_5 == -1) break;
      lVar5 = plVar3[1];
      plVar4[1] = -(lVar2 + lVar5);
      if (lVar5 != 0) {
        lVar2 = 1;
      }
      if (param_5 == -2) {
        return lVar2;
      }
      lVar5 = plVar3[2];
      plVar4[2] = -(lVar2 + lVar5);
      if (lVar5 != 0) {
        lVar2 = 1;
      }
      if (param_5 == -3) {
        return lVar2;
      }
      lVar5 = plVar3[3];
      plVar4[3] = -(lVar2 + lVar5);
      if (lVar5 != 0) {
        lVar2 = 1;
      }
      param_5 = param_5 + 4;
      if (param_5 == 0) {
        return lVar2;
      }
      plVar3 = plVar3 + 4;
      plVar4 = plVar4 + 4;
    }
  }
  return lVar2;
}

