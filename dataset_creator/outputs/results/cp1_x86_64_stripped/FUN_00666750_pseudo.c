
void FUN_00666750(long *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  cVar1 = FUN_0067e320(param_2);
  if (cVar1 == '\0') {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = (long *)FUN_0067ca70(param_2);
  }
  cVar1 = FUN_006c3d30(param_1 + 0xd);
  if (cVar1 == '\0') goto LAB_00666805;
  if ((*(char *)((long)param_1 + 0xa9) == '\0') && (*(char *)((long)param_1 + 0xaa) == '\0')) {
    param_1[0x19] = (long)plVar3;
    return;
  }
  if ((long *)param_1[0x19] == (long *)0x0) {
LAB_00666967:
                    /* WARNING: Subroutine does not return */
    FUN_00403826();
  }
  iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x28))();
  if (iVar2 == -1) goto LAB_00666851;
  if (*(char *)((long)param_1 + 0xa9) == '\0') {
    if (*(char *)((long)param_1 + 0xaa) != '\0') {
      cVar1 = FUN_00666060(param_1);
      if (cVar1 == '\0') goto LAB_00666851;
      lVar4 = param_1[0x13];
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[1] = lVar4;
      param_1[2] = lVar4;
      param_1[3] = lVar4;
      param_1[6] = 0;
    }
  }
  else {
    if ((long *)param_1[0x19] == (long *)0x0) goto LAB_00666967;
    cVar1 = (**(code **)(*(long *)param_1[0x19] + 0x30))();
    if (cVar1 == '\0') {
      lVar4 = param_1[0x1a];
      iVar2 = (**(code **)(*(long *)param_1[0x19] + 0x38))
                        ((long *)param_1[0x19],(long)param_1 + 0x8c,lVar4,param_1[0x1c],
                         param_1[2] - param_1[1]);
      lVar4 = lVar4 + iVar2;
      param_1[0x1c] = lVar4;
      lVar5 = param_1[0x1d] - lVar4;
      lVar6 = 0;
      if (lVar5 != 0) {
        thunk_FUN_00713610(param_1[0x1a],lVar4,lVar5);
        lVar6 = lVar5;
      }
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[0x1c] = param_1[0x1a];
      param_1[0x1d] = param_1[0x1a] + lVar6;
      lVar4 = param_1[0x13];
      param_1[6] = 0;
      param_1[1] = lVar4;
      param_1[2] = lVar4;
      param_1[3] = lVar4;
      *(undefined8 *)((long)param_1 + 0x84) = *(undefined8 *)((long)param_1 + 0x7c);
      *(undefined8 *)((long)param_1 + 0x8c) = *(undefined8 *)((long)param_1 + 0x7c);
    }
    else {
      if (plVar3 == (long *)0x0) {
LAB_00666851:
        param_1[0x19] = 0;
        return;
      }
      cVar1 = (**(code **)(*plVar3 + 0x30))(plVar3);
      if (cVar1 == '\0') {
        lVar4 = (**(code **)(*param_1 + 0x20))(param_1,0,1,(int)param_1[0xf]);
        if (lVar4 == -1) goto LAB_00666851;
      }
    }
  }
LAB_00666805:
  param_1[0x19] = (long)plVar3;
  return;
}

