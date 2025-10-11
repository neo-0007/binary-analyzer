
void FUN_004a6750(long *param_1,char *param_2,int param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int *piVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 == (char *)0x0) {
    piVar1 = (int *)*param_1;
    lVar3 = *(long *)(piVar1 + 2);
    param_1 = (long *)(piVar1 + 2);
    if (lVar3 == 0) {
      return;
    }
    iVar2 = *piVar1;
    if (iVar2 == 5) goto LAB_004a67e0;
    if (iVar2 < 6) {
      if (iVar2 == -4) {
LAB_004a67bd:
        FUN_004a6750(param_1,0,0);
        FUN_0041ad60(*param_1,"../crypto/asn1/tasn_fre.c",200);
        goto LAB_004a67e0;
      }
      if (iVar2 == 1) {
        piVar1[2] = -1;
        return;
      }
    }
    else {
LAB_004a6820:
      if (iVar2 == 6) {
        FUN_004a06b0();
        goto LAB_004a67e0;
      }
    }
  }
  else {
    lVar3 = *(long *)(param_2 + 0x20);
    if (param_3 == 0) {
      if (lVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x18);
        goto joined_r0x004a678c;
      }
    }
    else if (lVar3 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x20);
joined_r0x004a678c:
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a677b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(param_1);
        return;
      }
    }
    if (*param_2 == '\x05') {
      lVar3 = *param_1;
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      iVar2 = (int)*(undefined8 *)(param_2 + 8);
      if (iVar2 == 1) {
        *(int *)param_1 = (int)*(undefined8 *)(param_2 + 0x28);
        return;
      }
      lVar3 = *param_1;
      if (lVar3 == 0) {
        return;
      }
      if (iVar2 == 5) goto LAB_004a67e0;
      if (5 < iVar2) goto LAB_004a6820;
      if (iVar2 == -4) goto LAB_004a67bd;
    }
  }
  FUN_004a2200(lVar3,param_3);
LAB_004a67e0:
  *param_1 = 0;
  return;
}

