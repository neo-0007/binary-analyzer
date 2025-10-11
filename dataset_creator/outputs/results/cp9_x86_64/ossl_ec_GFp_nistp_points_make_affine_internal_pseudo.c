
void ossl_ec_GFp_nistp_points_make_affine_internal
               (long param_1,long param_2,long param_3,long param_4,code *UNRECOVERED_JUMPTABLE,
               code *param_6,code *param_7,code *param_8,code *param_9,code *param_10,code *param_11
               )

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = param_2 + param_3 * 2;
  iVar1 = (*param_6)(lVar4);
  if (iVar1 == 0) {
    (*param_7)(param_4,lVar4);
  }
  else {
    (*UNRECOVERED_JUMPTABLE)(param_4);
  }
  iVar1 = (int)param_1;
  if (1 < iVar1) {
    lVar7 = param_3 * 3;
    iVar3 = 1;
    lVar4 = lVar4 + lVar7;
    lVar8 = param_4;
    do {
      while( true ) {
        iVar2 = (*param_6)(lVar4);
        lVar6 = lVar8 + param_3;
        if (iVar2 == 0) break;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + lVar7;
        (*param_7)(lVar6);
        lVar8 = lVar6;
        if (iVar3 == iVar1) goto LAB_004fd6bc;
      }
      iVar3 = iVar3 + 1;
      (*param_9)(lVar6,lVar8,lVar4);
      lVar4 = lVar4 + lVar7;
      lVar8 = lVar6;
    } while (iVar3 != iVar1);
  }
LAB_004fd6bc:
  lVar4 = (param_1 + -1) * param_3 + param_4;
  (*param_10)(lVar4,lVar4);
  if (-1 < iVar1 + -1) {
    lVar8 = param_3 * param_1 + param_4;
    lVar7 = ((long)(iVar1 * 3 + -3) + 2) * param_3 + param_2;
    lVar4 = param_4 + (iVar1 + -1) * param_3;
    for (iVar1 = iVar1 + -2; iVar1 != -1; iVar1 = iVar1 + -1) {
      lVar6 = iVar1 * param_3 + param_4;
      (*param_9)(lVar8,lVar6,lVar4);
      iVar3 = (*param_6)(lVar7);
      if (iVar3 == 0) {
        (*param_9)(lVar6,lVar4,lVar7);
        (*param_8)(lVar7,lVar8);
        lVar5 = lVar7 + param_3 * -2;
        (*param_9)(lVar5,lVar5,lVar7);
        (*param_9)(lVar7,lVar7,lVar8);
        lVar6 = (iVar1 * 3 + 4) * param_3 + param_2;
        (*param_9)(lVar6,lVar6,lVar7);
        (*param_11)(lVar5,lVar5);
        (*param_11)(lVar6,lVar6);
        (*UNRECOVERED_JUMPTABLE)(lVar7);
      }
      else {
        (*param_7)(lVar6,lVar4);
      }
      lVar4 = lVar4 - param_3;
      lVar7 = lVar7 + param_3 * -3;
    }
    (*param_7)(lVar8,param_4);
    iVar1 = (*param_6)(lVar7);
    if (iVar1 == 0) {
      (*param_8)(lVar7,lVar8);
      lVar4 = lVar7 + param_3 * -2;
      (*param_9)(lVar4,lVar4,lVar7);
      (*param_9)(lVar7,lVar7,lVar8);
      param_2 = param_2 + param_3;
      (*param_9)(param_2,param_2,lVar7);
      (*param_11)(lVar4,lVar4);
      (*param_11)(param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x004fd8c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(lVar7);
      return;
    }
  }
  return;
}

