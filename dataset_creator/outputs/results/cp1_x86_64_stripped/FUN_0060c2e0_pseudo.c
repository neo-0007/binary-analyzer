
undefined8 FUN_0060c2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) break;
    if (iVar3 != 0) {
      FUN_004ab870(param_3,&DAT_008243ea);
    }
    puVar2 = (undefined8 *)FUN_004364a0(param_2,iVar3);
    FUN_004ae9e0(param_3,"%*sPolicy: ",param_4,&DAT_0083e5c2);
    FUN_004a0450(param_3,*puVar2);
    if (puVar2[1] != 0) {
      FUN_004ab870(param_3,&DAT_008243ea);
      FUN_0060c060(param_3,puVar2[1],param_4 + 2);
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}

