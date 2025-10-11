
void FUN_00403ac6(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403aec to 00403af0 has its CatchHandler @ 00403b07 */
  FUN_00635a90(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_009340a8,FUN_0062c0d0);
}

