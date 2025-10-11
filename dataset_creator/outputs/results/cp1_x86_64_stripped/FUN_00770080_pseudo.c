
void FUN_00770080(undefined8 *param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)(param_1[1] & 0xfffffffffffffffe);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)param_1[2];
    }
    else {
      puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          FUN_0076f260();
        }
        if (puVar2[2] != 0) {
          FUN_0076f260(puVar2[2],param_2);
        }
        (*param_2)(*puVar2);
        FUN_007104f0(puVar2);
      }
      puVar2 = (undefined8 *)puVar1[2];
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          FUN_0076f260(puVar2[1] & 0xfffffffffffffffe,param_2);
        }
        if (puVar2[2] != 0) {
          FUN_0076f260(puVar2[2],param_2);
        }
        (*param_2)(*puVar2);
        FUN_007104f0(puVar2);
      }
      (*param_2)(*puVar1);
      FUN_007104f0(puVar1);
      puVar1 = (undefined8 *)param_1[2];
    }
    if (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)(puVar1[1] & 0xfffffffffffffffe);
      if (puVar2 != (undefined8 *)0x0) {
        if ((puVar2[1] & 0xfffffffffffffffe) != 0) {
          FUN_0076f260(puVar2[1] & 0xfffffffffffffffe,param_2);
        }
        if (puVar2[2] != 0) {
          FUN_0076f260(puVar2[2],param_2);
        }
        (*param_2)(*puVar2);
        FUN_007104f0(puVar2);
      }
      if (puVar1[2] != 0) {
        FUN_0076f260(puVar1[2],param_2);
      }
      (*param_2)(*puVar1);
      FUN_007104f0(puVar1);
    }
    (*param_2)(*param_1);
    FUN_007104f0(param_1);
    return;
  }
  return;
}

