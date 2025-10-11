
void FUN_0068dbd0(long *param_1)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      FUN_0063d6f0(plVar1);
      iVar4 = 10;
      if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
        cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,10);
        iVar4 = (int)cVar2;
      }
    }
    else {
      iVar4 = (int)*(char *)((long)plVar1 + 0x43);
    }
    uVar3 = FUN_0068d8c0(param_1,iVar4);
    FUN_0068ce90(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

