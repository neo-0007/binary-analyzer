
void FUN_0061e1e0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = FUN_0049fab0(param_2);
  piVar3 = *(int **)(param_1 + 0x60);
  lVar1 = *(long *)(piVar3 + 2);
  while( true ) {
    if (lVar1 == 0) {
      FUN_0059cee0(param_1,param_2);
      return;
    }
    if (*piVar3 == lVar2) break;
    lVar1 = *(long *)(piVar3 + 8);
    piVar3 = piVar3 + 6;
  }
  FUN_0041c2c0(lVar1,"../crypto/x509/v3_enum.c",0x32);
  return;
}

