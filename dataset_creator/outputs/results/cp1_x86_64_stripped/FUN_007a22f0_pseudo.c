
void FUN_007a22f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_4 == 1) {
    uVar2 = 0;
    uVar1 = param_3;
  }
  else {
    uVar1 = 0;
    uVar2 = param_3;
    if (param_4 != 2) {
      uVar2 = 0;
    }
  }
  FUN_0078d640(param_1,param_2,uVar2,uVar1);
  return;
}

