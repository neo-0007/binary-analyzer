
undefined8 FUN_0060d8e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
    iVar1 = FUN_00436480(param_2);
    if (iVar1 <= iVar3) break;
    if (iVar3 != 0) {
      FUN_004ab870(param_3,&DAT_008243ea);
    }
    plVar2 = (long *)FUN_004364a0(param_2,iVar3);
    if (*plVar2 != 0) {
      FUN_0060d750(param_3,*plVar2,param_4);
    }
    if (plVar2[1] != 0) {
      FUN_0060d820(param_3,"Reasons",plVar2[1],param_4);
    }
    if (plVar2[2] != 0) {
      FUN_004ae9e0(param_3,"%*sCRL Issuer:\n",param_4,&DAT_0083e5c2);
      FUN_0060d6c0(param_3,plVar2[2],param_4);
    }
    iVar3 = iVar3 + 1;
  }
  return 1;
}

