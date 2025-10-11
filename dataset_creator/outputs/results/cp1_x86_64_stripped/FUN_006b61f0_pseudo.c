
undefined8 * FUN_006b61f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar5 = param_2 + 2;
  puVar6 = (undefined8 *)*param_2;
  puVar7 = (undefined8 *)*param_1;
  if (puVar6 == puVar5) {
    if (param_2 != param_1) {
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        if (lVar4 == 1) {
          *(undefined4 *)puVar7 = *(undefined4 *)(param_2 + 2);
        }
        else {
          FUN_00771ea0();
          lVar4 = param_2[1];
          puVar7 = (undefined8 *)*param_1;
          puVar5 = (undefined8 *)*param_2;
        }
      }
      param_1[1] = lVar4;
      *(undefined4 *)((long)puVar7 + lVar4 * 4) = 0;
      puVar6 = puVar5;
    }
  }
  else {
    uVar1 = param_2[2];
    uVar2 = param_2[1];
    if (puVar7 == param_1 + 2) {
      *param_1 = puVar6;
      param_1[1] = uVar2;
      param_1[2] = uVar1;
    }
    else {
      uVar3 = param_1[2];
      *param_1 = puVar6;
      param_1[1] = uVar2;
      param_1[2] = uVar1;
      if (puVar7 != (undefined8 *)0x0) {
        *param_2 = puVar7;
        param_2[2] = uVar3;
        puVar6 = puVar7;
        goto LAB_006b6242;
      }
    }
    *param_2 = puVar5;
    puVar6 = puVar5;
  }
LAB_006b6242:
  param_2[1] = 0;
  *(undefined4 *)puVar6 = 0;
  return param_1;
}

