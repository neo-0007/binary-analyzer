
void FUN_0063d8d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  *(uint *)(param_1 + 1) = (uint)(param_3 != 0);
  *param_1 = &PTR_FUN_00935170;
  local_10 = param_2;
  uVar1 = FUN_006c4570(&local_10);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[2] = uVar1;
  FUN_0063e320(param_1);
  return;
}

