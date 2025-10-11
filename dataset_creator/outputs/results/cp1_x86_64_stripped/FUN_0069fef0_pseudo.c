
void FUN_0069fef0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (param_1 == param_2) {
    return;
  }
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)*param_2;
  puVar1 = param_2 + 2;
  if (param_1 + 2 == puVar2) {
    if (puVar1 != puVar3) {
      uVar7 = param_2[2];
      uVar4 = param_1[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar4;
      *param_1 = puVar3;
      uVar4 = param_1[1];
      *param_2 = puVar1;
      param_1[2] = uVar7;
      param_1[1] = param_2[1];
      param_2[1] = uVar4;
      return;
    }
    lVar6 = param_2[1];
    if (param_1[1] == 0) {
      uVar7 = 0;
      if (lVar6 != 0) {
        uVar7 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = uVar7;
        param_1[1] = param_2[1];
        param_2[1] = 0;
        *(undefined1 *)*param_2 = 0;
        return;
      }
    }
    else {
      uVar7 = param_1[3];
      if (lVar6 == 0) {
        param_2[2] = param_1[2];
        param_2[3] = uVar7;
        param_2[1] = param_1[1];
        param_1[1] = 0;
        *(undefined1 *)*param_1 = 0;
        return;
      }
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      param_2[2] = param_1[2];
      param_2[3] = uVar7;
      uVar7 = param_1[1];
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      lVar6 = param_2[1];
    }
  }
  else {
    uVar7 = param_1[2];
    if (puVar1 == puVar3) {
      uVar4 = param_2[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar4;
      *param_2 = puVar2;
      *param_1 = param_1 + 2;
    }
    else {
      *param_1 = puVar3;
      *param_2 = puVar2;
      param_1[2] = param_2[2];
    }
    param_2[2] = uVar7;
    lVar6 = param_2[1];
    uVar7 = param_1[1];
  }
  param_1[1] = lVar6;
  param_2[1] = uVar7;
  return;
}

