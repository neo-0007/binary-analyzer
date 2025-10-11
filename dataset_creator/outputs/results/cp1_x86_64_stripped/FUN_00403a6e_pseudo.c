
void FUN_00403a6e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403a94 to 00403a98 has its CatchHandler @ 00403aaf */
  FUN_00635990(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_00934090,FUN_0062c010);
}

