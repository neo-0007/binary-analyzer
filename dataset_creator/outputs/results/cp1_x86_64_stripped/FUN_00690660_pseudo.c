
void FUN_00690660(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,10);
    uVar3 = FUN_00690330(param_1,uVar2);
    FUN_0068f8c0(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

