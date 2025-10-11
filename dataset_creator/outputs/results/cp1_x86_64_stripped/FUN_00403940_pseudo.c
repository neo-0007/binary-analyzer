
void FUN_00403940(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_006231b0(0x10);
  uVar2 = FUN_006e2820(param_1);
                    /* try { // try from 00403966 to 0040396a has its CatchHandler @ 00403981 */
  FUN_00635930(uVar1,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00624060(uVar1,&PTR_PTR_00934048,FUN_0062bf50);
}

