
void FUN_0060d6c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) break;
    if (iVar3 != 0) {
      FUN_004ab870(param_1,&DAT_008243ea);
    }
    FUN_004ae9e0(param_1,"%*s",param_3 + 2,&DAT_0083e5c2);
    uVar2 = FUN_004364a0(param_2,iVar3);
    FUN_00612440(param_1,uVar2);
    iVar3 = iVar3 + 1;
  }
  return;
}

