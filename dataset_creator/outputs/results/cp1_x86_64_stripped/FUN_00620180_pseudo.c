
void FUN_00620180(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = FUN_00436480();
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      while( true ) {
        uVar3 = FUN_004364a0(param_1,iVar4);
        FUN_0061fdd0(uVar3,param_2,param_3,param_5);
        iVar2 = FUN_00436480(param_1);
        if (iVar2 + -1 <= iVar4) break;
        iVar4 = iVar4 + 1;
        FUN_004ae9e0(param_2,&DAT_007e3d61,param_4);
        if (iVar1 == iVar4) {
          return;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

