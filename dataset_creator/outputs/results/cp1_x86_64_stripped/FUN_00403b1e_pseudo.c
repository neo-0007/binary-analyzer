
void FUN_00403b1e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403b44 to 00403b48 has its CatchHandler @ 00403b5f */
  FUN_00635ab0(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_009340c0,FUN_0062c110);
}

