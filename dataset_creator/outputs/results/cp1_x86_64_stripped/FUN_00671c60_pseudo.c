
void FUN_00671c60(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 extraout_RDX;
  
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    if ((char)plVar1[7] == '\0') {
      FUN_0063d6f0(plVar1);
      iVar3 = 10;
      if (*(code **)(*plVar1 + 0x30) != FUN_00405e50) {
        cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,10,extraout_RDX,10);
        iVar3 = (int)cVar2;
      }
    }
    else {
      iVar3 = (int)*(char *)((long)plVar1 + 0x43);
    }
    FUN_006c5670(param_1,param_2,param_3,iVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

