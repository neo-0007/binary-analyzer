
void FUN_006b7550(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) goto LAB_006b75bd;
  puVar3 = (undefined8 *)*param_1;
  puVar1 = param_1 + 2;
  puVar4 = (undefined8 *)*param_2;
  puVar2 = param_2 + 2;
  if (puVar1 == puVar3) {
    if (puVar2 == puVar4) {
      if (param_1[1] == 0) {
        if (param_2[1] != 0) {
          FUN_00756660(puVar1,puVar2,4);
          param_1[1] = param_2[1];
          param_2[1] = 0;
          *(undefined4 *)*param_2 = 0;
          goto LAB_006b75bd;
        }
        uVar7 = 0;
        uVar6 = 0;
      }
      else {
        if (param_2[1] == 0) {
          FUN_00756660(puVar2,puVar1,4);
          param_2[1] = param_1[1];
          param_1[1] = 0;
          *(undefined4 *)*param_1 = 0;
          goto LAB_006b75bd;
        }
        FUN_00756660(auStack_48,puVar2,4);
        FUN_00756660(puVar2,puVar1,4);
        FUN_00756660(puVar1,auStack_48,4);
        uVar6 = param_2[1];
        uVar7 = param_1[1];
      }
    }
    else {
      uVar5 = param_2[2];
      FUN_00756660(puVar2,puVar1,4);
      uVar7 = param_1[1];
      *param_1 = *param_2;
      uVar6 = param_2[1];
      *param_2 = puVar2;
      param_1[2] = uVar5;
    }
  }
  else {
    uVar5 = param_1[2];
    if (puVar2 == puVar4) {
      FUN_00756660(puVar1,puVar2,4);
      *param_2 = *param_1;
      *param_1 = puVar1;
    }
    else {
      *param_1 = puVar4;
      *param_2 = puVar3;
      param_1[2] = param_2[2];
    }
    uVar6 = param_2[1];
    uVar7 = param_1[1];
    param_2[2] = uVar5;
  }
  param_1[1] = uVar6;
  param_2[1] = uVar7;
LAB_006b75bd:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

