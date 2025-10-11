
undefined8 * FUN_0069e620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar5 = param_2 + 2;
  puVar1 = (undefined8 *)*param_2;
  puVar6 = (undefined8 *)*param_1;
  if (puVar5 == puVar1) {
    if (param_1 != param_2) {
      lVar4 = param_2[1];
      if (lVar4 != 0) {
        if (lVar4 == 1) {
          *(undefined1 *)puVar6 = *(undefined1 *)(param_2 + 2);
          puVar6 = (undefined8 *)*param_1;
          lVar4 = param_2[1];
        }
        else {
          thunk_FUN_00713a50();
          puVar6 = (undefined8 *)*param_1;
          lVar4 = param_2[1];
        }
      }
      param_1[1] = lVar4;
      *(undefined1 *)((long)puVar6 + lVar4) = 0;
      puVar5 = (undefined8 *)*param_2;
    }
  }
  else {
    uVar2 = param_2[1];
    if (puVar6 == param_1 + 2) {
      *param_1 = puVar1;
      param_1[1] = uVar2;
      param_1[2] = param_2[2];
    }
    else {
      *param_1 = puVar1;
      uVar3 = param_1[2];
      param_1[1] = uVar2;
      param_1[2] = param_2[2];
      if (puVar6 != (undefined8 *)0x0) {
        *param_2 = puVar6;
        param_2[2] = uVar3;
        puVar5 = puVar6;
        goto LAB_0069e672;
      }
    }
    *param_2 = puVar5;
  }
LAB_0069e672:
  param_2[1] = 0;
  *(undefined1 *)puVar5 = 0;
  return param_1;
}

