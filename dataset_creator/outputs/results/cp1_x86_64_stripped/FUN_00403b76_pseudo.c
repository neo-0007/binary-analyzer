
void FUN_00403b76(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403b9c to 00403ba0 has its CatchHandler @ 00403bb7 */
  FUN_00635ad0(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_009340d8,FUN_0062c150);
}

