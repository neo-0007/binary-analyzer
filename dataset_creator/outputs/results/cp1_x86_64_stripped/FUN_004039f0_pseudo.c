
void FUN_004039f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403a16 to 00403a1a has its CatchHandler @ 00403a31 */
  FUN_00635970(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_00934078,FUN_0062bfd0);
}

