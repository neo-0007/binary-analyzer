
void FUN_004038e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 0040390e to 00403912 has its CatchHandler @ 00403929 */
  FUN_00635910(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_00934030,FUN_0062bf10);
}

