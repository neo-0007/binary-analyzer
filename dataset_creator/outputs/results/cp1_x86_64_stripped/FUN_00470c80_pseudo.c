
bool FUN_00470c80(undefined8 param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  
  lVar2 = FUN_004ee2d0();
  lVar3 = FUN_004ee2d0(param_2);
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return false;
  }
  uVar4 = FUN_004ee2a0(param_1);
  lVar5 = FUN_004b2a70(uVar4);
  if (lVar5 == 0) {
    return false;
  }
  bVar7 = true;
  if ((param_3 & 4) != 0) {
    if ((lVar2 == 0) || (lVar3 == 0)) {
      bVar7 = false;
    }
    else {
      iVar1 = FUN_004f1190(lVar2,lVar3,lVar5);
      bVar7 = iVar1 == 0;
    }
  }
  bVar8 = bVar7;
  if ((param_3 & 3) == 0) goto LAB_00470d42;
  if ((param_3 & 2) == 0) {
LAB_00470d3a:
    bVar8 = (bool)(param_3 & 1);
    if ((param_3 & 1) == 0) goto LAB_00470d42;
    lVar2 = FUN_004ee2e0(param_1);
    lVar3 = FUN_004ee2e0(param_2);
    if (((lVar2 != 0) && (lVar3 != 0)) && (bVar7 != false)) {
      iVar1 = FUN_004b7840(lVar2,lVar3);
      bVar8 = iVar1 == 0;
      goto LAB_00470d42;
    }
  }
  else {
    lVar2 = FUN_004ee3f0(param_1);
    lVar6 = FUN_004ee3f0(param_2);
    if ((lVar2 == 0) || (lVar6 == 0)) goto LAB_00470d3a;
    if (bVar7 != false) {
      iVar1 = FUN_004f10c0(lVar3,lVar2,lVar6,lVar5);
      bVar8 = iVar1 == 0;
      goto LAB_00470d42;
    }
  }
  bVar8 = false;
LAB_00470d42:
  FUN_004b2b50(lVar5);
  return bVar8;
}

