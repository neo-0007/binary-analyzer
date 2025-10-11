
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00423350(int param_1)

{
  undefined8 uVar1;
  
  if (DAT_0093fd28 != 0) {
    _DAT_0093fd08 = param_1;
    uVar1 = FUN_00545d70();
    FUN_00545d80(DAT_0093fd28,0);
    FUN_00545bd0(DAT_0093fd28,&DAT_004231d0);
    if (-1 < param_1) {
      FUN_00545d80(DAT_0093fd28,uVar1);
      return;
    }
    FUN_00545790(DAT_0093fd28);
    FUN_00436430(DAT_0093fd18,FUN_00422b90);
    FUN_00422300(DAT_0093fd20);
    DAT_0093fd28 = 0;
    DAT_0093fd18 = 0;
    DAT_0093fd20 = 0;
  }
  return;
}

