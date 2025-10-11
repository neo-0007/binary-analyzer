
void FUN_00417080(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  FUN_0041ab70();
  puVar3 = (undefined8 *)param_1[0x37];
  while (puVar3 != (undefined8 *)0x0) {
    (*(code *)*puVar3)(param_1);
    puVar1 = (undefined8 *)puVar3[1];
    FUN_0041ad60(puVar3,"../crypto/context.c",0x84);
    puVar3 = puVar1;
  }
  FUN_00419990(0x10,0,param_1 + 1);
  puVar3 = param_1 + 0x20;
  FUN_00418fb0(param_1);
  do {
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    FUN_00422300(uVar2);
  } while (puVar3 != param_1 + 0x33);
  FUN_00422300(param_1[0x33]);
  FUN_00422300(*param_1);
  *param_1 = 0;
  return;
}

