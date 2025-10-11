
void FUN_00675140(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0xf0);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,10);
    FUN_006c6140(param_1,param_2,param_3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00403826();
}

