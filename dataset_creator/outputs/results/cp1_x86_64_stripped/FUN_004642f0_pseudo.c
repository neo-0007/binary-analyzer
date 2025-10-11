
long FUN_004642f0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar2 = (code *)thunk_FUN_00464249();
  pcVar3 = (code *)thunk_FUN_00464279(param_1);
  pcVar4 = (code *)thunk_FUN_004642a9(param_1);
  if ((pcVar2 != (code *)0x0 && pcVar4 != (code *)0x0) && (pcVar3 != (code *)0x0)) {
    lVar5 = (*pcVar2)(param_2);
    if ((lVar5 != 0) && (iVar1 = (*pcVar4)(lVar5,param_3,param_4), iVar1 != 0)) {
      return lVar5;
    }
    (*pcVar3)(lVar5);
  }
  return 0;
}

