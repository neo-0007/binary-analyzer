
int FUN_00437b90(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (param_1 != 0) {
    param_3 = param_3 + 1;
    if (param_3 < 0) {
      param_3 = 0;
    }
    iVar1 = FUN_00436480();
    if (param_3 < iVar1) {
      do {
        puVar3 = (undefined8 *)FUN_004364a0(param_1,param_3);
        iVar2 = FUN_00424ba0(*puVar3,param_2);
        if (iVar2 == 0) {
          return param_3;
        }
        param_3 = param_3 + 1;
      } while (iVar1 != param_3);
    }
  }
  return -1;
}

