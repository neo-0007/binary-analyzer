
long ossl_bsearch(undefined8 param_1,long param_2,int param_3,int param_4,code *param_5,uint param_6
                 )

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  
  if (param_3 != 0) {
    if (param_3 < 1) {
      param_6 = param_6 & 2;
      lVar3 = param_2;
    }
    else {
      iVar4 = 0;
      do {
        while( true ) {
          iVar2 = iVar4 + param_3 >> 1;
          lVar3 = param_4 * iVar2 + param_2;
          iVar1 = (*param_5)(param_1,lVar3);
          if (-1 < iVar1) break;
          param_3 = iVar2;
          if (iVar2 <= iVar4) goto LAB_005387f9;
        }
        if (iVar1 == 0) goto LAB_00538820;
        iVar4 = iVar2 + 1;
      } while (iVar4 < param_3);
LAB_005387f9:
      if (iVar1 == 0) {
LAB_00538820:
        if ((param_6 & 2) == 0) {
          return lVar3;
        }
        lVar3 = param_2 + (iVar2 + -1) * param_4;
        do {
          iVar4 = iVar2;
          if (iVar4 == 0) {
            return param_2;
          }
          iVar1 = (*param_5)(param_1,lVar3);
          lVar3 = lVar3 + -param_4;
          iVar2 = iVar4 + -1;
        } while (iVar1 == 0);
        return param_2 + param_4 * iVar4;
      }
      param_6 = param_6 & 1;
    }
    if (param_6 != 0) {
      return lVar3;
    }
  }
  return 0;
}

