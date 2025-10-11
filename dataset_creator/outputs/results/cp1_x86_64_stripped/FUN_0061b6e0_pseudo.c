
long * FUN_0061b6e0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_00436480(*(undefined8 *)(param_1 + 8));
    if (iVar1 <= iVar3) {
      return (long *)0x0;
    }
    plVar2 = (long *)FUN_004364a0(*(undefined8 *)(param_1 + 8),iVar3);
    if (plVar2[1] == param_2) {
      iVar1 = FUN_00424ba0(*(undefined8 *)(*plVar2 + 8),param_3);
      if (iVar1 == 0) {
        return plVar2;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

