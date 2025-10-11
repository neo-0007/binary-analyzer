
void FUN_00418bf0(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_00422e80(*(undefined8 *)(param_1 + 2),*param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_0040a260(lVar2);
    FUN_00418a60(0,uVar1,0,param_2);
    return;
  }
  return;
}

